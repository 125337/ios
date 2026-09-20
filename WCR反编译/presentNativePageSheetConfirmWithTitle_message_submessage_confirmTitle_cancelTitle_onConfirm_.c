// presentNativePageSheetConfirmWithTitle:message:submessage:confirmTitle:cancelTitle:onConfirm: @ 00fa3478

/* Function Stack Size: 0x40 bytes */

ID WCRefineHelper::
   presentNativePageSheetConfirmWithTitle_message_submessage_confirmTitle_cancelTitle_onConfirm_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,undefined4 param_9)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *local_198;
  cfstringStruct *local_188;
  cfstringStruct *local_178;
  cfstringStruct *local_160;
  cfstringStruct *local_140;
  cfstringStruct *local_118;
  cfstringStruct *local_100;
  cfstringStruct *local_e8;
  char *local_a8;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  char *local_30;
  char *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = (char *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_6);
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,param_7);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_8);
  pcVar2 = "LoadingBottomDialog";
  _objc_getClass();
  pcVar3 = local_30;
  uVar1 = local_68;
  local_70 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    if (local_40 == (cfstringStruct *)0x0) {
      local_e8 = &cf_c_y;
    }
    else {
      local_e8 = local_40;
    }
    if (local_48 == (cfstringStruct *)0x0) {
      local_100 = &::cf___;
    }
    else {
      local_100 = local_48;
    }
    if (local_58 == (cfstringStruct *)0x0) {
      local_118 = &cf_nx;
    }
    else {
      local_118 = local_58;
    }
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_00fa38a4;
    local_80 = &DAT_025838c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = uVar1;
    if (local_60 == (cfstringStruct *)0x0) {
      local_140 = &cf_Sm;
    }
    else {
      local_140 = local_60;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_showAlertWithTitle_message_destr_0269f868,local_e8,local_100,local_118,
               &local_98,local_140);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    _objc_storeStrong(&local_78,0);
    local_9c = 1;
  }
  else {
    _objc_alloc();
    if (local_40 == (cfstringStruct *)0x0) {
      local_160 = &::cf___;
    }
    else {
      local_160 = local_40;
    }
    if (local_48 == (cfstringStruct *)0x0) {
      local_178 = &::cf___;
    }
    else {
      local_178 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_initWithTitle_tips_subTips_shoul_026ace30,local_160,local_178,local_50,0
              );
    if (local_58 == (cfstringStruct *)0x0) {
      local_188 = &cf_nx;
    }
    else {
      local_188 = local_58;
    }
    local_a8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setConfirmButtonTitle__026ace38,local_188);
    if (local_60 == (cfstringStruct *)0x0) {
      local_198 = &cf_Sm;
    }
    else {
      local_198 = local_60;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setCancelButtonTitle__026ace40,local_198);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setConfirmCallBack__026ace48,local_68);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_show_0269d280);
    pcVar2 = local_a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_9c = 1;
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

