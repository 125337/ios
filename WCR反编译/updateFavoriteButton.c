// updateFavoriteButton @ 01bce404

/* Function Stack Size: 0x10 bytes */

void WCRMomentsCacheDetailViewController::updateFavoriteButton(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  
  puVar2 = PTR_WCRefineMomentsMonitor_026ce718;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_item_026a1890);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isDataItemFavorite__026c0668);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  _objc_alloc();
  pcVar1 = &cf_star_fill;
  if (((ulong)puVar4 & 1) == 0) {
    pcVar1 = &cf_star;
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_initWithImage_style_target_actio_026b47e8,puVar4,0,param_1,
             PTR_s_toggleFavorite_026c06a8);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c60,DAT_02323db8,DAT_02323cc0,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

