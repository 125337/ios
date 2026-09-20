// syncPageSheetTopBar @ 01f86fec

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::syncPageSheetTopBar(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageSheetMode_026c9788);
  bVar1 = true;
  if ((IVar2 & 1) != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hostSheet_026c8f78);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar2 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (!bVar1) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hostSheet_026c8f78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_syncPageSheetChromeForNavigation_026c97a8,IVar3);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  return;
}

