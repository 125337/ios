// wcr_mediaViewAtIndex: @ 01be9e80

/* Function Stack Size: 0x18 bytes */

ID WCRMomentsDraftCardView::wcr_mediaViewAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  unsigned_long_long uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  while( true ) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mediaViews_026c0a18);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar1 = local_28;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (uVar1 < IVar3) break;
    puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc_init();
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setContentMode__026ca8e0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidden__026ca970,1);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mediaViews_026c0a18);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTag__026caa80,DAT_0233a338);
      puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc_init();
      local_38 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setContentMode__026ca8e0,4);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTintColor__026caab0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_02323e88);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTag__026caa80,DAT_0233a340);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,1);
      puVar4 = PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4032000000000000,PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640,
                 PTR_s_configurationWithPointSize_weigh_026ca588,
                 (long)*(double *)PTR__UIFontWeightSemibold_02578160);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_40 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed_withConfigurati_026a3270,
                 &cf_play_fill,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setImage__026ca978);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_40,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addSubview__026ca4c0,local_38);
      _objc_storeStrong(&local_38,0);
    }
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mediaView_026c0a20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mediaViews_026c0a18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_30,0);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mediaViews_026c0a18);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

