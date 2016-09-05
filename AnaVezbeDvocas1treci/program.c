static char sqla_program_id[292] = 
{
 172,0,65,69,65,85,65,73,101,65,77,115,79,70,74,103,48,49,49,49,
 49,32,50,32,32,32,32,32,32,32,32,32,13,0,65,76,69,75,83,65,
 77,65,82,75,79,78,73,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,8,0,80,82,79,71,82,65,77,32,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0
};

#include "sqladef.h"

static struct sqla_runtime_info sqla_rtinfo = 
{{'S','Q','L','A','R','T','I','N'}, sizeof(wchar_t), 0, {' ',' ',' ',' '}};


static const short sqlIsLiteral   = SQL_IS_LITERAL;
static const short sqlIsInputHvar = SQL_IS_INPUT_HVAR;


#line 1 "program.sqc"
#include <stdio.h>
#include <stdlib.h>


/*
EXEC SQL INCLUDE SQLCA;
*/

/* SQL Communication Area - SQLCA - structures and constants */
#include "sqlca.h"
struct sqlca sqlca;


#line 4 "program.sqc"



/*
EXEC SQL BEGIN DECLARE SECTION;
*/

#line 6 "program.sqc"

    sqlint32 d_indeks, d_godslusanja;
    short polozio, postoji;
    short d_godina;
    sqlint32 d_ugod;

/*
EXEC SQL END DECLARE SECTION;
*/

#line 11 "program.sqc"


void is_error(char err[]) {
  if (SQLCODE < 0) {
    printf("SQLCODE %d %s\n\n", SQLCODE, err);
    
/*
EXEC SQL CONNECT RESET;
*/

{
#line 16 "program.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 16 "program.sqc"
  sqlacall((unsigned short)29,3,0,0,0L);
#line 16 "program.sqc"
  sqlastop(0L);
}

#line 16 "program.sqc"

    exit(EXIT_FAILURE);
  }
}

int main() {
  printf("Indeks studenta: ");
  scanf("%d", &d_indeks);

  
/*
EXEC SQL CONNECT TO sem97st1 USER aleksamarkoni USING teodon300;
*/

{
#line 25 "program.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 25 "program.sqc"
  sqlaaloc(2,3,1,0L);
    {
      struct sqla_setdata_list sql_setdlist[3];
#line 25 "program.sqc"
      sql_setdlist[0].sqltype = 460; sql_setdlist[0].sqllen = 9;
#line 25 "program.sqc"
      sql_setdlist[0].sqldata = (void*)"sem97st1";
#line 25 "program.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 25 "program.sqc"
      sql_setdlist[1].sqltype = 460; sql_setdlist[1].sqllen = 14;
#line 25 "program.sqc"
      sql_setdlist[1].sqldata = (void*)"aleksamarkoni";
#line 25 "program.sqc"
      sql_setdlist[1].sqlind = 0L;
#line 25 "program.sqc"
      sql_setdlist[2].sqltype = 460; sql_setdlist[2].sqllen = 10;
#line 25 "program.sqc"
      sql_setdlist[2].sqldata = (void*)"teodon300";
#line 25 "program.sqc"
      sql_setdlist[2].sqlind = 0L;
#line 25 "program.sqc"
      sqlasetdata(2,0,3,sql_setdlist,0L,0L);
    }
#line 25 "program.sqc"
  sqlacall((unsigned short)29,5,2,0,0L);
#line 25 "program.sqc"
  sqlastop(0L);
}

#line 25 "program.sqc"

  is_error("connect");

  
/*
EXEC SQL SELECT count(*) INTO:postoji from dosije where indeks=:d_indeks;
*/

{
#line 28 "program.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 28 "program.sqc"
  sqlaaloc(2,1,2,0L);
    {
      struct sqla_setdata_list sql_setdlist[1];
#line 28 "program.sqc"
      sql_setdlist[0].sqltype = 496; sql_setdlist[0].sqllen = 4;
#line 28 "program.sqc"
      sql_setdlist[0].sqldata = (void*)&d_indeks;
#line 28 "program.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 28 "program.sqc"
      sqlasetdata(2,0,1,sql_setdlist,0L,0L);
    }
#line 28 "program.sqc"
  sqlaaloc(3,1,3,0L);
    {
      struct sqla_setdata_list sql_setdlist[1];
#line 28 "program.sqc"
      sql_setdlist[0].sqltype = 500; sql_setdlist[0].sqllen = 2;
#line 28 "program.sqc"
      sql_setdlist[0].sqldata = (void*)&postoji;
#line 28 "program.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 28 "program.sqc"
      sqlasetdata(3,0,1,sql_setdlist,0L,0L);
    }
#line 28 "program.sqc"
  sqlacall((unsigned short)24,1,2,3,0L);
#line 28 "program.sqc"
  sqlastop(0L);
}

#line 28 "program.sqc"

  is_error("Select into");

  if (postoji == 0) {
    printf("Ne postoji student sa indeksom %d.\n", d_indeks);
    
/*
EXEC SQL CONNECT RESET;
*/

{
#line 33 "program.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 33 "program.sqc"
  sqlacall((unsigned short)29,3,0,0,0L);
#line 33 "program.sqc"
  sqlastop(0L);
}

#line 33 "program.sqc"

    is_error("Connect reset");
    return 0;
  }

  
/*
EXEC SQL SELECT count(*) into:polozio
  from polagao where indeks=:d_indeks
  and sifpred in (select sifpred
                  from plans where nazivpred = 'Analiza 1')
  and ocena > 5;
*/

{
#line 42 "program.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 42 "program.sqc"
  sqlaaloc(2,1,4,0L);
    {
      struct sqla_setdata_list sql_setdlist[1];
#line 42 "program.sqc"
      sql_setdlist[0].sqltype = 496; sql_setdlist[0].sqllen = 4;
#line 42 "program.sqc"
      sql_setdlist[0].sqldata = (void*)&d_indeks;
#line 42 "program.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 42 "program.sqc"
      sqlasetdata(2,0,1,sql_setdlist,0L,0L);
    }
#line 42 "program.sqc"
  sqlaaloc(3,1,5,0L);
    {
      struct sqla_setdata_list sql_setdlist[1];
#line 42 "program.sqc"
      sql_setdlist[0].sqltype = 500; sql_setdlist[0].sqllen = 2;
#line 42 "program.sqc"
      sql_setdlist[0].sqldata = (void*)&polozio;
#line 42 "program.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 42 "program.sqc"
      sqlasetdata(3,0,1,sql_setdlist,0L,0L);
    }
#line 42 "program.sqc"
  sqlacall((unsigned short)24,2,2,3,0L);
#line 42 "program.sqc"
  sqlastop(0L);
}

#line 42 "program.sqc"

  is_error("Da li je polozio Analizu 1.");

  if (polozio == 0) {
    printf("Studnet nije polozio Analizu 1\n");
  } else {
    printf("Student je polozio Analizu 1\n");
  }

  /* pronalazimo na kojoj godini se slusa dati predmet u zavisnosti od studentovog profila */
  
/*
EXEC SQL select (p.semslus2 + 1)/ 2 into :d_godslusanja
  from plans p join dosije d on d.statg = p.statg and d.sifprof = p.sifprof
    and d.indeks = :d_indeks and nazivpred = 'Analiza 1';
*/

{
#line 54 "program.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 54 "program.sqc"
  sqlaaloc(2,1,6,0L);
    {
      struct sqla_setdata_list sql_setdlist[1];
#line 54 "program.sqc"
      sql_setdlist[0].sqltype = 496; sql_setdlist[0].sqllen = 4;
#line 54 "program.sqc"
      sql_setdlist[0].sqldata = (void*)&d_indeks;
#line 54 "program.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 54 "program.sqc"
      sqlasetdata(2,0,1,sql_setdlist,0L,0L);
    }
#line 54 "program.sqc"
  sqlaaloc(3,1,7,0L);
    {
      struct sqla_setdata_list sql_setdlist[1];
#line 54 "program.sqc"
      sql_setdlist[0].sqltype = 496; sql_setdlist[0].sqllen = 4;
#line 54 "program.sqc"
      sql_setdlist[0].sqldata = (void*)&d_godslusanja;
#line 54 "program.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 54 "program.sqc"
      sqlasetdata(3,0,1,sql_setdlist,0L,0L);
    }
#line 54 "program.sqc"
  sqlacall((unsigned short)24,3,2,3,0L);
#line 54 "program.sqc"
  sqlastop(0L);
}

#line 54 "program.sqc"

  is_error("Godina u kojoj se slusa ispit");

  printf("Ispit se slusa u %d godini\n.", d_godslusanja);

  /*pronalazimo kada je student upisao prvu godinu po prvi put */
  
/*
EXEC SQL select u.god into :d_ugod
  from upisgod u join dosije d
    on u.indeks = d.indeks and u.god = d.god and u.godstud = :d_godslusanja and put = 1
    and d.indeks = :d_indeks;
*/

{
#line 63 "program.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 63 "program.sqc"
  sqlaaloc(2,2,8,0L);
    {
      struct sqla_setdata_list sql_setdlist[2];
#line 63 "program.sqc"
      sql_setdlist[0].sqltype = 496; sql_setdlist[0].sqllen = 4;
#line 63 "program.sqc"
      sql_setdlist[0].sqldata = (void*)&d_godslusanja;
#line 63 "program.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 63 "program.sqc"
      sql_setdlist[1].sqltype = 496; sql_setdlist[1].sqllen = 4;
#line 63 "program.sqc"
      sql_setdlist[1].sqldata = (void*)&d_indeks;
#line 63 "program.sqc"
      sql_setdlist[1].sqlind = 0L;
#line 63 "program.sqc"
      sqlasetdata(2,0,2,sql_setdlist,0L,0L);
    }
#line 63 "program.sqc"
  sqlaaloc(3,1,9,0L);
    {
      struct sqla_setdata_list sql_setdlist[1];
#line 63 "program.sqc"
      sql_setdlist[0].sqltype = 496; sql_setdlist[0].sqllen = 4;
#line 63 "program.sqc"
      sql_setdlist[0].sqldata = (void*)&d_ugod;
#line 63 "program.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 63 "program.sqc"
      sqlasetdata(3,0,1,sql_setdlist,0L,0L);
    }
#line 63 "program.sqc"
  sqlacall((unsigned short)24,4,2,3,0L);
#line 63 "program.sqc"
  sqlastop(0L);
}

#line 63 "program.sqc"

  is_error("Kada je student upisao godinu u kojoj se slusa ispit");

  printf("Student je odslusao godinu %d godine\n", d_ugod);

  
/*
EXEC SQL CONNECT RESET;
*/

{
#line 68 "program.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 68 "program.sqc"
  sqlacall((unsigned short)29,3,0,0,0L);
#line 68 "program.sqc"
  sqlastop(0L);
}

#line 68 "program.sqc"

  is_error("Connect reset");
  return 0;
}
