// editHighlightColor @ 01e51040

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingViewController::editHighlightColor(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_f8;
  cfstringStruct *local_c8;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [15];
  byte local_69;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  undefined1 auStack_40 [8];
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  _objc_initWeak(auStack_40,local_28);
  IVar1 = local_28;
  local_59 = 0;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingHighlightCol_026c6790);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_c8 = &cf__111111;
  }
  else {
    local_c8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingHighlightCol_026c6790);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_c8;
  }
  local_69 = 0;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingHighlightCol_026c6798);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_f8 = &cf__FFFFFF;
  }
  else {
    local_f8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingHighlightCol_026c6798);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_f8;
  }
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_01e51370;
  local_80 = &DAT_0258bb10;
  _objc_copyWeak(auStack_78,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showColorPickerWithTitle_lightHe_026c6888,&cf_Ne_gr,local_c8,local_f8,
             &local_98);
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  return;
}

