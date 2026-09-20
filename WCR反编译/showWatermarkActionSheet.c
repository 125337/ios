// showWatermarkActionSheet @ 01fab9ec

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::showWatermarkActionSheet(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *local_50;
  char *local_48;
  cfstringStruct *local_40;
  byte local_32;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = false;
  if ((*(byte *)(param_1 + (long)_isSelectMode) & 1) != 0) {
    local_31 = 0 < *(long *)(param_1 + (long)_watermarkIndex);
  }
  local_32 = *(byte *)(param_1 + (long)_pendingNoneItem) & 1;
  pcVar1 = &cf_e4lpS;
  if (local_32 == 0) {
    pcVar1 = &cf_4lpSd_O;
  }
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_28;
  pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = pcVar1;
  if (((local_32 & 1) == 0) && ((local_31 & 1) != 0)) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_effectiveWatermarkLayerIndex_026c9db0);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_watermarkLayerDisplayNameForInde_026b5848,IVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_40;
    local_40 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  pcVar6 = "WCActionSheet";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_48 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar5;
  if ((local_31 & 1) == 0) {
    pcVar6 = "WCActionSheetItem";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    puVar5 = local_50;
    if ((local_32 & 1) == 0) {
      pcVar6 = "WCActionSheetItem";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
    }
  }
  else {
    pcVar6 = "WCActionSheetItem";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    puVar5 = local_50;
    pcVar6 = "WCActionSheetItem";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    puVar5 = local_50;
    if ((local_32 & 1) == 0) {
      pcVar6 = "WCActionSheetItem";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setButtonTitleList__026b5ae0,local_50);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTag__026caa80,0x5f01);
  pcVar6 = local_48;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_showInView__0269d310);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

