// FUN_0076ea24 @ 0076ea24

void FUN_0076ea24(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar1 = PTR_s_checkAndRecordSponsorFromPayment_026a7e00;
      if ((uVar3 != 0) &&
         (uVar2 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_respondsToSelector__026ca818,
                    PTR_s_checkAndRecordSponsorFromPayment_026a7e00), (uVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

