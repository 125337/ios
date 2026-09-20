// showLongPressActionSheet @ 01fb34cc

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::showLongPressActionSheet(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  ID IVar8;
  undefined8 uVar9;
  byte local_a4;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  long local_40;
  char *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar7 = "WCActionSheet";
  local_30 = param_2;
  local_28 = param_1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  lVar1 = 9;
  local_38 = pcVar7;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  uVar3 = *(undefined8 *)(local_28 + (long)_selectedImagePath);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(ulong *)(local_28 + (long)_selectedImagePath);
  local_48 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasPrefix__0269d320,local_40);
  if ((uVar4 & 1) != 0) {
    uVar9 = *(undefined8 *)(local_28 + (long)_selectedImagePath);
    lVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_substringFromIndex__0269d120,lVar2 + 1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_48 = uVar9;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_screenshotWatermarkToppedList_026a78b8);
  _objc_retainAutoreleasedReturnValue();
  local_a4 = 0;
  local_58 = puVar5;
  if (puVar5 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_containsObject__0269cbb8,local_48);
    local_a4 = (byte)puVar5;
  }
  local_59 = local_a4 & 1;
  pcVar7 = "WCActionSheetItem";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar6 = "WCActionSheetItem";
  local_68 = pcVar7;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar7 = "WCActionSheetItem";
  local_70 = pcVar6;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar6 = "WCActionSheetItem";
  local_78 = pcVar7;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_80 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObjects__026af658,local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setButtonTitleList__026b5ae0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTag__026caa80,0x5f02);
  pcVar7 = local_38;
  IVar8 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_showInView__0269d310);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

