// FUN_00857610 @ 00857610

void FUN_00857610(undefined8 param_1,double param_2,double param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_50;
  double dStack_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_38 = 1;
  }
  else if (local_28 == DAT_028cd070) {
    FUN_00857cd8(0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    FUN_00857d4c();
    dVar5 = param_2;
    uVar6 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    uVar7 = 0x4020000000000000;
    bVar1 = false;
    if (8.0 <= param_3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      bVar1 = 8.0 <= dVar5;
      uVar6 = uVar7;
      dVar5 = param_3;
    }
    local_50 = param_1;
    dStack_48 = param_2;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_50 = uVar6;
      dStack_48 = dVar5;
    }
    uVar7 = 0;
    uVar6 = 0;
    FUN_0081e864();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,local_50,dStack_48,local_28,PTR_s_setFrame__026ca960);
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    (*(code *)PTR__objc_release_02578630)();
    if (uVar4 != uVar3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_28);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_evaluateJavaScript_completionHan_026a12f0,
               &
               cf_document_querySelectorAll__video_audio___forEach_function_el__try_el_pause___catch_e_____
               ,0);
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_configuration_026a1de8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_configuration_026a1de8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stopLoading_026a8e68);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

