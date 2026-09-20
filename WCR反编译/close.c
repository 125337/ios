// close @ 01e3f1ac

/* Function Stack Size: 0x10 bytes */

int WCRTGTabReorderViewController::close(int param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = (ulong)(uint)param_1;
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_onChanged_026c51b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar3 != 0) {
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_onChanged_026c51b0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(uVar3 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (uVar5 == uVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0)
    ;
    iVar1 = (int)uVar2;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_navigationController_0269d458);
    iVar1 = (int)uVar2;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
  }
  return iVar1;
}

