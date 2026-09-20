// FUN_00748910 @ 00748910

void FUN_00748910(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48 [3];
  ulong local_30;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  local_21 = param_2;
  FUN_0074c5f8(local_20,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_30 = uVar1;
  FUN_0074c5f8(local_20,&cf_m_nsRealChatUsr);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar2;
  if ((local_21 & 1) != 0) {
    uVar1 = local_30;
    FUN_00744988();
    if ((uVar1 & 1) != 0) {
      uVar2 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
      uVar1 = local_48[0];
      if (uVar2 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        goto LAB_00748a74;
      }
    }
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar1;
LAB_00748a74:
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

