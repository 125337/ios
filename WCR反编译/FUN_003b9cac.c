// FUN_003b9cac @ 003b9cac

void FUN_003b9cac(long param_1)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  long lVar3;
  long local_68;
  long local_40;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar3 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar3;
  if (lVar3 == 0) {
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
  if (lVar3 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      lVar3 = local_28;
      FUN_003b9b5c(local_28,*(undefined8 *)(param_1 + 0x28));
      bVar2 = ((byte)lVar3 ^ 1) & 1;
      FUN_003b9f28(local_28,*(undefined8 *)(param_1 + 0x28),bVar2);
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_00368c14(*(undefined8 *)(param_1 + 0x30),&cf_homeLongPressGroupPin);
      }
      else {
        FUN_003736ec(*(undefined8 *)(param_1 + 0x30));
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
      }
      pcVar1 = &cf__R__Nn_v;
      if (bVar2 == 0) {
        pcVar1 = &cf__SmR__Nn_v;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

