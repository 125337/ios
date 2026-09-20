// FUN_004d5a44 @ 004d5a44

byte FUN_004d5a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_30;
  FUN_004da094(local_30,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_40 = uVar1;
  FUN_004d5f78(local_38,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar2 == 0) {
    uVar1 = local_20;
    (*DAT_028cad20)(local_20,local_28,local_30,local_38);
    local_11 = (byte)uVar1 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

