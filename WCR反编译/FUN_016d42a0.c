// FUN_016d42a0 @ 016d42a0

void FUN_016d42a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  char *local_40;
  undefined4 local_38;
  char *local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  local_28 = pcVar2;
  if ((pcVar2 == (char *)0x0) ||
     (lVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0),
     lVar3 == 0)) {
    local_38 = 1;
  }
  else {
    pcVar2 = local_28;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__b);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle_message__0269d260,&cf_OX__TVY);
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x50);
    uVar1 = local_18;
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copy_0269d150);
    _objc_setAssociatedObject(uVar1,&DAT_028e3f11,lVar3,1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    _objc_setAssociatedObject(local_18,&DAT_028e3f12,local_40,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
               PTR_s_WCRefine_confirmMessageRepositor_026b2b58);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

