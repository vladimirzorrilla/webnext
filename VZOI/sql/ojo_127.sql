"SELECT "+vzselect()+" FROM DGA"+XCOD();
+" LEFT JOIN SEA"+XCOD()+" ON  DGA"+XCOD()+".NUME_ORDEN=SEA"+XCOD()+".NUME_ORDEN AND DGA"+XCOD()+".ANO_ORDEN=SEA"+XCOD()+".ANO_ORDEN";
+" LEFT JOIN SDC"+XCOD()+" ON  DGA"+XCOD()+".NUME_ORDEN=SDC"+XCOD()+".NUME_ORDEN AND DGA"+XCOD()+".ANO_ORDEN=SDC"+XCOD()+".ANO_ORDEN";
+" LEFT JOIN FEX"+XCOD()+" ON  DGA"+XCOD()+".NUME_ORDEN=FEX"+XCOD()+".NUME_ORDEN AND DGA"+XCOD()+".ANO_ORDEN=FEX"+XCOD()+".ANO_ORDEN";
+WHEREOJO()+" GROUP BY DGA"+XCOD()+".NUME_ORDEN,DGA"+XCOD()+".ANO_ORDEN "+vzordervista()