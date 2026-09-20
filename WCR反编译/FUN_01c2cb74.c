// FUN_01c2cb74 @ 01c2cb74

void FUN_01c2cb74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_50;
  char *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_38 = &cf_n___>e_Y_;
  if (param_3 != 3) {
    local_38 = &cf_n_MOy;
  }
  local_30 = param_4;
  local_28 = param_1;
  local_20 = param_3;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &cf_V;
  if (local_20 != 3) {
    local_40 = &cf_V;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x10);
  pcVar2 = local_48;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTextFieldDefaultText__0269fd98);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getTextField_0269fb48);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58);
    if (((ulong)pcVar2 & 1) != 0) {
      uVar1 = 8;
      if (local_20 != 3) {
        uVar1 = 2;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setKeyboardType__026aec58,uVar1);
    }
  }
  _objc_storeStrong(&local_50,0);
  _objc_setAssociatedObject(local_18,DAT_028c6850,local_48,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_18,0);
  return;
}

