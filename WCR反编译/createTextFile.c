// createTextFile @ 019a049c

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::createTextFile(ID param_1,SEL param_2)

{
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_019a057c;
  local_38 = &DAT_0257c558;
  _objc_copyWeak(auStack_30,auStack_28);
  FUN_019969e4(&cf_e_e_geN,&::cf_newline_s_,0,0x3c,&cf_R_,&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}

