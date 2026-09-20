// editKeywordFieldTitle:subtitle:placeholder:currentText:onSave: @ 018b6e08

/* Function Stack Size: 0x38 bytes */

void WCRefineChatRoomManageViewController::
     editKeywordFieldTitle_subtitle_placeholder_currentText_onSave_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *local_100;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_60,local_28);
  uVar3 = local_38;
  uVar2 = local_40;
  uVar1 = local_48;
  local_78 = local_58;
  local_68 = PTR_WCRefineHelper_026ce000;
  if (local_50 == (cfstringStruct *)0x0) {
    local_100 = &::cf___;
  }
  else {
    local_100 = local_50;
  }
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_018b70bc;
  local_80 = &DAT_02589f28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_copyWeak(auStack_70,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (0,local_68,PTR_s_presentPageSheetMultilineInputWi_026ab118,uVar3,uVar2,uVar1,local_100,
             &local_98);
  _objc_retainAutoreleasedReturnValue();
  if (local_68 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_Sb);
  }
  _objc_storeStrong(&local_68);
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_78,0);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

