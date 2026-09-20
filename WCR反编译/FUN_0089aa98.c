// FUN_0089aa98 @ 0089aa98

void FUN_0089aa98(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cdcc8)(local_18,local_20,local_28,param_4 & 1);
  FUN_008a3cbc(local_18);
  FUN_008a48cc(local_18,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

