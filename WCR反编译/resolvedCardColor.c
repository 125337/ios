// resolvedCardColor @ 01e54064

/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramTabStripView::resolvedCardColor(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *local_88;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_30;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_homepageCornerEnabled_0269fc40);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mainFrameCornerEnabled_026a1ff0),
     ((ulong)puVar2 & 1) == 0)) {
    puVar2 = PTR_WCRefineOfficialTheme_026ce620;
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_colorNamed_fallback__026a3268,&cf_cellBackgroundColor);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_homeTelegramGroupingCustomCardCo_026c6700);
  puVar2 = local_38;
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_3c = 1;
  }
  else {
    IVar5 = local_20;
    FUN_01e54350();
    bVar1 = (IVar5 & 1) == 0;
    local_88 = local_30;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_homeTelegramGroupingCardColorLig_026c6710);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_88;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_homeTelegramGroupingCardColorDar_026c6718);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_88;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    puVar2 = local_48;
    FUN_01e54424(local_48,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

