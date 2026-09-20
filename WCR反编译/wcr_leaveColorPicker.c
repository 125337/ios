// wcr_leaveColorPicker @ 0190960c

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::wcr_leaveColorPicker(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined **ppuVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  undefined **local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dismissHandler_026b89d8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &local_68;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01909a70;
  local_50 = &DAT_025814c8;
  local_38 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = param_1;
  _objc_retainBlock();
  IVar3 = local_28;
  local_40 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentingViewController_026a0db0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (IVar3 == 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar5 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,local_40);
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (IVar3 != 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = 1 < IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (bVar1) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar7 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,local_40);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

