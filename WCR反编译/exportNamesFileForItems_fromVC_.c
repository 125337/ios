// exportNamesFileForItems:fromVC: @ 00fe5bc0

/* Function Stack Size: 0x20 bytes */

void WCRefineIconNameCaptureSupport::exportNamesFileForItems_fromVC_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 uVar5;
  undefined8 in_d2;
  undefined8 uVar6;
  undefined8 in_d3;
  undefined8 uVar7;
  ID local_168;
  ID local_a0;
  ID local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_5c;
  ID local_58;
  ID local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_4);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_exportNamesTextForItems__026ad498,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feS_QTy);
    local_5c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_stringWithFormat__0269cca8,&cf_wcr_icons__ld_txt);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar4;
    (*(code *)PTR__objc_release_02578630)();
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_78 = 0;
    local_80 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_writeToFile_atomically_encoding__026a33a8,local_70,1,4,&local_80);
    _objc_storeStrong(&local_78,local_80);
    if (local_78 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIActivityViewController_026cea70;
      local_88 = puVar4;
      _objc_alloc();
      local_30 = local_88;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithActivityItems_applicatio_026aa228,puVar4,0);
      local_90 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      bVar1 = local_50 == 0;
      if (bVar1) {
        local_168 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_topPresenter_026ad4a0);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_168;
      }
      else {
        local_168 = local_50;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = local_168;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      if (local_98 == 0) {
        puVar4 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Y6RTy0RjR4_g);
        local_5c = 1;
      }
      else {
        puVar4 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_popoverPresentationController_0269fdf0)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar4 != (undefined *)0x0) {
          IVar2 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_popoverPresentationController_0269fdf0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(IVar2);
          IVar2 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          _CGRectGetMidX(in_d0,in_d1,in_d2,in_d3);
          uVar5 = 0x405e000000000000;
          uVar7 = 0x3ff0000000000000;
          uVar6 = 0x3ff0000000000000;
          FUN_00fd5bd8();
          puVar4 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_popoverPresentationController_0269fdf0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(in_d0,uVar5,uVar6,uVar7);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_presentViewController_animated_c_0269d2b0,local_90,1,0);
        local_5c = 0;
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Y6RTy0RjR4_g);
      local_5c = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

