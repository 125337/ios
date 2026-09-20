// extractTranslateText @ 0167a67c

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::extractTranslateText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  dispatch_queue_t pdVar6;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [24];
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined4 local_5c;
  ID local_58;
  SEL local_50;
  ID local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_translateResultText_026b26d8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar4 = local_48;
  if (IVar3 != 0) {
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_translateResultText_026b26d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_presentExtractedTranslateText__026b2730);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    goto LAB_0167ab5c;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_translateResultImage_026b26f0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar4;
  if (IVar4 == 0) {
LAB_0167a7b8:
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feeScS);
    local_5c = 1;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_CGImage_0269e0e8);
    if (IVar4 == 0) goto LAB_0167a7b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WcSeW__);
    puVar5 = PTR__OBJC_CLASS___VNImageRequestHandler_026cee90;
    _objc_alloc();
    IVar4 = local_58;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_CGImage_0269e0e8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_initWithCGImage_options__026b2738,IVar4,
               *(undefined8 *)PTR____NSDictionary0___02578288);
    local_68 = puVar5;
    _objc_initWeak(auStack_70,local_48);
    puVar5 = PTR__OBJC_CLASS___VNRecognizeTextRequest_026cee98;
    _objc_alloc();
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_0167aba0;
    local_98 = &DAT_02587b10;
    _objc_copyWeak(auStack_90,auStack_70);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_initWithCompletionHandler__026b2750,&local_b0);
    local_78 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setRecognitionLevel__026b2758,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setUsesLanguageCorrection__026b2760,1);
    iVar2 = 2;
    ___isPlatformVersionAtLeast(2,0x10,0);
    if (iVar2 != 0) {
      local_40 = &cf_zh_Hans;
      local_38 = &cf_zh_Hant;
      local_30 = &cf_en_US;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setRecognitionLanguages__026b2768);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    pdVar6 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_68;
    local_e0 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_0167b1d0;
    local_c8 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_78;
    local_c0 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = puVar5;
    _dispatch_async(pdVar6,&local_e0);
    (*(code *)PTR__objc_release_02578630)(pdVar6);
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_78,0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58,0);
LAB_0167ab5c:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

