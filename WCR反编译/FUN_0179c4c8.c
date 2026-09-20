// FUN_0179c4c8 @ 0179c4c8

byte FUN_0179c4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  ulong local_30;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_WCRefine);
  if (((uVar1 & 1) == 0) && (uVar1 = local_30, FUN_017ae374(), (uVar1 & 1) == 0)) {
    uVar2 = local_20;
    (*DAT_028e40b0)(local_20,local_28,local_30,local_38);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

