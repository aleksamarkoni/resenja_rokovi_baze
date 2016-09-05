static char sqla_program_id[292] = 
{
 172,0,65,69,65,85,65,73,114,65,99,118,81,81,73,103,48,49,49,49,
 49,32,50,32,32,32,32,32,32,32,32,32,13,0,65,76,69,75,83,65,
 77,65,82,75,79,78,73,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,8,0,80,82,79,66,78,73,95,80,0,0,0,0,0,0,0,0,
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


#line 1 "probni_primer_db2.sqc"
/*
Napisati program koji ispisuje najveci indeks nekog studenta
*/


#include <stdio.h>
#include <stdlib.h>

/* ukljucuje se struktura koja omogucava rad sa DB */

/*
EXEC SQL INCLUDE SQLCA;
*/

/* SQL Communication Area - SQLCA - structures and constants */
#include "sqlca.h"
struct sqlca sqlca;


#line 10 "probni_primer_db2.sqc"


/* deklaracija promenljivih koje koristi SQL, host promenljive */

/*
EXEC SQL BEGIN DECLARE SECTION;
*/

#line 13 "probni_primer_db2.sqc"

  sqlint32 d_maxindeks;

/*
EXEC SQL END DECLARE SECTION;
*/

#line 15 "probni_primer_db2.sqc"


int iserr(char err[]) {
  if (SQLCODE < 0) {
    printf("SQLCODE %ld - %s \n\n", SQLCODE, err);
    return 1;
  }
  return 0;
}

/* za poziv fje greske koristimo makro */
#define CHECKERR(s) if (iserr(s)) exit(1);

int main() {
  /* povezivanje na bazu */
  
/*
EXEC SQL CONNECT TO sem97st1 USER aleksamarkoni USING teodon300;
*/

{
#line 30 "probni_primer_db2.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 30 "probni_primer_db2.sqc"
  sqlaaloc(2,3,1,0L);
    {
      struct sqla_setdata_list sql_setdlist[3];
#line 30 "probni_primer_db2.sqc"
      sql_setdlist[0].sqltype = 460; sql_setdlist[0].sqllen = 9;
#line 30 "probni_primer_db2.sqc"
      sql_setdlist[0].sqldata = (void*)"sem97st1";
#line 30 "probni_primer_db2.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 30 "probni_primer_db2.sqc"
      sql_setdlist[1].sqltype = 460; sql_setdlist[1].sqllen = 14;
#line 30 "probni_primer_db2.sqc"
      sql_setdlist[1].sqldata = (void*)"aleksamarkoni";
#line 30 "probni_primer_db2.sqc"
      sql_setdlist[1].sqlind = 0L;
#line 30 "probni_primer_db2.sqc"
      sql_setdlist[2].sqltype = 460; sql_setdlist[2].sqllen = 10;
#line 30 "probni_primer_db2.sqc"
      sql_setdlist[2].sqldata = (void*)"teodon300";
#line 30 "probni_primer_db2.sqc"
      sql_setdlist[2].sqlind = 0L;
#line 30 "probni_primer_db2.sqc"
      sqlasetdata(2,0,3,sql_setdlist,0L,0L);
    }
#line 30 "probni_primer_db2.sqc"
  sqlacall((unsigned short)29,5,2,0,0L);
#line 30 "probni_primer_db2.sqc"
  sqlastop(0L);
}

#line 30 "probni_primer_db2.sqc"

  CHECKERR("connect");

  
/*
EXEC SQL select max(indeks) INTO :d_maxindeks from dosije;
*/

{
#line 33 "probni_primer_db2.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 33 "probni_primer_db2.sqc"
  sqlaaloc(3,1,2,0L);
    {
      struct sqla_setdata_list sql_setdlist[1];
#line 33 "probni_primer_db2.sqc"
      sql_setdlist[0].sqltype = 496; sql_setdlist[0].sqllen = 4;
#line 33 "probni_primer_db2.sqc"
      sql_setdlist[0].sqldata = (void*)&d_maxindeks;
#line 33 "probni_primer_db2.sqc"
      sql_setdlist[0].sqlind = 0L;
#line 33 "probni_primer_db2.sqc"
      sqlasetdata(3,0,1,sql_setdlist,0L,0L);
    }
#line 33 "probni_primer_db2.sqc"
  sqlacall((unsigned short)24,1,0,3,0L);
#line 33 "probni_primer_db2.sqc"
  sqlastop(0L);
}

#line 33 "probni_primer_db2.sqc"

  CHECKERR("select");

  if (!SQLCODE) {
    printf("Max indeks = %d \n\n", d_maxindeks);
  }

  
/*
EXEC SQL CONNECT RESET;
*/

{
#line 40 "probni_primer_db2.sqc"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 40 "probni_primer_db2.sqc"
  sqlacall((unsigned short)29,3,0,0,0L);
#line 40 "probni_primer_db2.sqc"
  sqlastop(0L);
}

#line 40 "probni_primer_db2.sqc"

  CHECKERR("reset");

  return 0;
}
