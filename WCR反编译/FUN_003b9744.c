// FUN_003b9744 @ 003b9744

void FUN_003b9744(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_68;
  long local_40;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar1;
  if (lVar1 == 0) {
    local_30 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_30;
    FUN_00366324();
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_68;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    FUN_003b7a54();
    if ((uVar2 & 1) != 0) {
      lVar1 = local_28;
      FUN_003b7c38();
      FUN_003b9978(local_28,((byte)lVar1 ^ 1) & 1);
      FUN_00368c14(*(undefined8 *)(param_1 + 0x28),&cf_homeLongPressSuperPin);
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
      }
      goto LAB_003b9960;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQn_vJ_Y);
LAB_003b9960:
  _objc_storeStrong(&local_28,0);
  return;
}

