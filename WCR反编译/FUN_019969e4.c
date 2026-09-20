// FUN_019969e4 @ 019969e4

/* WARNING: Type propagation algorithm not settling */

void FUN_019969e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *local_c0;
  long local_a8;
  undefined *local_60;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28 [3];
  
  local_28[2] = 0;
  _objc_storeStrong(local_28 + 2,param_1);
  local_28[1] = 0;
  _objc_storeStrong(local_28 + 1,param_2);
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_3);
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_48 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_4c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_30 == 0) {
      local_a8 = 0x3c;
    }
    else {
      local_a8 = local_30;
    }
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_a8);
    lVar2 = local_28[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_28[0],PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setTextFieldDefaultText__0269fd98,local_28[0]);
    }
    puVar3 = PTR_WCRFileTextAlertProxy_026cf208;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileTextAlertProxy_026cf208,PTR_s_new_0269d288);
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setAlert__0269fd90,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setConfirm__0269fd88,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setSelfRef__0269fb58,local_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_60,
               PTR_s_onCancel__0269fda0);
    if (local_38 == (cfstringStruct *)0x0) {
      local_c0 = &cf_nx_;
    }
    else {
      local_c0 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addBtnTitle_target_sel__0269d278,local_c0,local_60,
               PTR_s_onConfirm__0269fda8);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(local_28,0);
  _objc_storeStrong(local_28 + 1,0);
  _objc_storeStrong(local_28 + 2,0);
  return;
}

