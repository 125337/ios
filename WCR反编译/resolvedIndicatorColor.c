// resolvedIndicatorColor @ 01e5486c

/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramTabStripView::resolvedIndicatorColor(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *local_98;
  undefined *local_70;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  undefined *local_48;
  undefined *local_40;
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
            (0x3f9c1c1c1c1c1c1c,0x3fe8383838383838,0x3fd8181818181818,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineOfficialTheme_026ce620;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineOfficialTheme_026ce620,PTR_s_colorNamed_fallback__026a3268,&cf_Brand,puVar3
            );
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineOfficialTheme_026ce620;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineOfficialTheme_026ce620,PTR_s_colorNamed_fallback__026a3268,&cf_Brand_100,
             puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_30;
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_homeTelegramGroupingCustomIndica_026c6730);
  puVar2 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_4c = 1;
  }
  else {
    IVar5 = local_20;
    FUN_01e54350();
    bVar1 = (IVar5 & 1) == 0;
    local_98 = local_30;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_homeTelegramGroupingIndicatorCol_026c6740);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_98;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_homeTelegramGroupingIndicatorCol_026c6748);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_98;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_98;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    puVar2 = local_58;
    FUN_01e54424(local_58,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_4c = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

