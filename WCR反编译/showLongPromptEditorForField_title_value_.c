// showLongPromptEditorForField:title:value: @ 017de880

/* Function Stack Size: 0x28 bytes */

void WCRefineAISettingsViewController::showLongPromptEditorForField_title_value_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined *local_58;
  undefined1 auStack_50 [8];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  _objc_initWeak(auStack_50,local_28);
  puVar3 = PTR_WCRefineHelper_026ce000;
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_c0 = &cf___c_y;
  }
  else {
    local_c0 = local_40;
  }
  if (local_48 == (cfstringStruct *)0x0) {
    local_d8 = &::cf___;
  }
  else {
    local_d8 = local_48;
  }
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_017deb24;
  local_80 = &DAT_025891e8;
  _objc_copyWeak(auStack_70,auStack_50);
  uVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0,puVar3,PTR_s_presentPageSheetMultilineInputWi_026ab118,local_c0,&cf_O9eTzsSuHe,
             &cf_eQc_y_,local_d8,&local_98);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_78,0);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

