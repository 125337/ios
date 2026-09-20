// FUN_008a4d30 @ 008a4d30

void FUN_008a4d30(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_008a4394(local_18,PTR_s_controlCenter_026a9798);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = uVar1;
  FUN_008a5128(local_18,uVar1);
  if ((((uVar2 & 1) != 0) &&
      (uVar1 = local_18,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setCanSendOriginalImage__026a9800
                ), (uVar1 & 1) != 0)) &&
     (uVar1 = local_18, FUN_008a47c0(local_18,PTR_s_canSendOriginalImage_026a2188,0),
     (uVar1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCanSendOriginalImage__026a9800,1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

