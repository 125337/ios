// finderMediaVideoStreamDownloadFailedWithTid: @ 00275630

/* Function Stack Size: 0x18 bytes */

void WCRFinderDLWaiter::finderMediaVideoStreamDownloadFailedWithTid_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
  uint local_64;
  ID local_40;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finished_026a15b0);
  if ((IVar2 & 1) == 0) {
    bVar1 = false;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tid_026a15d8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_64 = 0;
    if (IVar3 != 0) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      local_64 = 0;
      if (lVar4 != 0) {
        local_40 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tid_026a15d8);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        IVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_64 = (uint)IVar3 ^ 1;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    if ((local_64 & 1) == 0) {
      uVar5 = 0xfffffffffffffff7;
      FUN_00272848(0xfffffffffffffff7,&cf__eN_1Y__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_finishWithPath_error__026a15f8,0);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

