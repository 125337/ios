// FUN_000b06dc @ 000b06dc

void FUN_000b06dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_48 [3];
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar2 = "WCUIAlertView";
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  uVar1 = local_18;
  if (pcVar2 != (char *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028c80c0,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_30;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_initWithTitle_message__0269d260,&cf__INc6RhV,&cf_eQVc6RhV__T);
    local_48[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_showTextFieldWithMaxLen__0269e5e0,0x32);
    }
    pcVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48[0],PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_wcrefine_cancelCustomControllerI_0269e4a0);
    }
    pcVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48[0],PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278
              );
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_wcrefine_handleCustomControllerI_0269e4a8);
    }
    pcVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48[0],PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_show_0269d280);
    }
    _objc_storeStrong(local_48,0);
  }
  return;
}

