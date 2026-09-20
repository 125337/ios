// FUN_0112e094 @ 0112e094

void FUN_0112e094(long param_1)

{
  bool bVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_presentationController_026af278);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_28 = lVar2;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setDelegate__026ca910,*(undefined8 *)(param_1 + 0x28));
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineQuickRemarkEditor_026ce820,PTR_s_focusOwnedOfficialControllerIfNe_026a68f8,
             *(undefined8 *)(param_1 + 0x30));
  _objc_storeStrong(&local_28,0);
  return;
}

