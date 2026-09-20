// layoutToggleButton @ 01fb93c4

/* Function Stack Size: 0x10 bytes */

ID WCRefineWechatThemeManagerViewController::layoutToggleButton(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_21 = (byte)puVar3;
  pcVar1 = &cf_list_bullet;
  if (((ulong)puVar3 & 1) == 0) {
    pcVar1 = &cf_square_grid_2x2;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  local_70 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  local_30 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = local_70;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_70;
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar1 = &cf_Rbc_NRh___;
  if ((local_21 & 1) == 0) {
    pcVar1 = &cf_Rbc_NaSGr___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAccessibilityLabel__0269e968,pcVar1);
  puVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

