// wcr_openThemeBoxAirDropSettings @ 0173132c

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_openThemeBoxAirDropSettings(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  dispatch_time_t dVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined **local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheet_026aa728);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_ThemeBoxAirDropViewController_026cef40;
  local_28 = IVar1;
  _objc_alloc_init();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  puVar2 = local_30;
  ppuVar3 = &local_60;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01731504;
  local_48 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar2;
  _objc_retainBlock();
  local_38 = ppuVar3;
  if (local_28 == 0) {
    (*(code *)ppuVar3[2])();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSheet__026aa770,0);
    dVar4 = _dispatch_time(0,280000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar4,puVar2,local_38);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

