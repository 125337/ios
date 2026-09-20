// FUN_0075ee98 @ 0075ee98

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0075ee98(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = DAT_028cc878 + 1;
  DAT_028cc878 = lVar1;
  (*param_3)(local_18,param_2);
  FUN_0075ef40(local_18,lVar1);
  DAT_028cc878 = DAT_028cc878 + -1;
  _objc_storeStrong(&local_18,0);
  return;
}

