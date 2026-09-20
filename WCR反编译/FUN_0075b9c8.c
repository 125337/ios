// FUN_0075b9c8 @ 0075b9c8

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0075b9c8(void)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FUN_0075be48();
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  _NSClassFromString(&cf_MFBannerBtn);
  FUN_0075c0dc();
  _NSClassFromString(&cf_MFWebMMBtn);
  FUN_0075c0dc();
  _NSClassFromString();
  FUN_0075c304();
  _NSClassFromString(&cf_WCSearchBar);
  FUN_0075c304();
  _NSClassFromString();
  FUN_0075c0dc();
  _NSClassFromString(&cf_MMTransparentButton);
  FUN_0075c304();
  pcVar2 = &cf_MMRecordButton;
  _NSClassFromString();
  FUN_0075c0dc(pcVar2,FUN_0075cfe0,&DAT_028cc850);
  FUN_0075c304(pcVar2,PTR_s_setTitle_forState__026caab8,FUN_0075cd14,
               &cf_wcr_special_record_original_setTitle_forState_);
  FUN_0075c304(pcVar2,PTR_s_didMoveToWindow_0269ddb8,FUN_0075d104,
               &cf_wcr_special_original_record_didMoveToWindow);
  _NSClassFromString(&cf_InputToolViewBar);
  FUN_0075c0dc();
  pcVar2 = &cf_MMGrowTextView;
  _NSClassFromString();
  FUN_0075c0dc(pcVar2,FUN_0075d594,&DAT_028cc860);
  pcVar3 = &cf_setPlaceHolder_;
  _NSSelectorFromString(&cf_setPlaceHolder_);
  FUN_0075c304(pcVar2,pcVar3,FUN_0075d6b8,&cf_wcr_special_original_setPlaceHolder_);
  pcVar3 = &cf_setAttributePlaceholder_;
  _NSSelectorFromString(&cf_setAttributePlaceholder_);
  FUN_0075c304(pcVar2,pcVar3,FUN_0075d9e4,&cf_wcr_special_original_setAttributePlaceholder_);
  pcVar3 = &cf_setPlaceHolderColor_;
  _NSSelectorFromString(&cf_setPlaceHolderColor_);
  FUN_0075c304(pcVar2,pcVar3,FUN_0075dd14,&cf_wcr_special_original_setPlaceHolderColor_);
  pcVar3 = &cf_setPlaceholder_animated_;
  _NSSelectorFromString();
  FUN_0075c304(pcVar2,pcVar3);
  pcVar3 = &cf_setAttributedPlaceholder_animated_;
  _NSSelectorFromString();
  FUN_0075c304(pcVar2,pcVar3);
  FUN_0075c304(pcVar2,PTR_s_didMoveToWindow_0269ddb8,FUN_0075e0ac,
               &cf_wcr_special_original_grow_didMoveToWindow);
  pcVar2 = &cf_MMTextView;
  _NSClassFromString();
  pcVar3 = &cf_setPlaceholder_;
  _NSSelectorFromString(&cf_setPlaceholder_);
  FUN_0075c304(pcVar2,pcVar3,FUN_0075d6b8,&cf_wcr_special_original_setPlaceholder_);
  pcVar3 = &cf_setAttributedPlaceholder_;
  _NSSelectorFromString(&cf_setAttributedPlaceholder_);
  FUN_0075c304(pcVar2,pcVar3,FUN_0075d9e4,&cf_wcr_special_original_setAttributedPlaceholder_);
  pcVar3 = &cf_setPlaceholder_animated_;
  _NSSelectorFromString(&cf_setPlaceholder_animated_);
  FUN_0075c304(pcVar2,pcVar3,FUN_0075ded4,&cf_wcr_special_original_setPlaceholder_animated_);
  pcVar3 = &cf_setAttributedPlaceholder_animated_;
  _NSSelectorFromString(&cf_setAttributedPlaceholder_animated_);
  FUN_0075c304(pcVar2,pcVar3,FUN_0075dfc0,
               &cf_wcr_special_original_setAttributedPlaceholder_animated_);
  FUN_0075c304(pcVar2,PTR_s_setText__026caa88,FUN_0075e1d8,&cf_wcr_special_original_setText_);
  FUN_0075c304(pcVar2,PTR_s_setAttributedText__026a0000,FUN_0075e280,
               &cf_wcr_special_original_setAttributedText_);
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028cc868;
  DAT_028cc868 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  return;
}

