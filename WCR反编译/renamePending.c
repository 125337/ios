// renamePending @ 01e06be8

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatBallWarehouseViewController::renamePending(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  ID IVar3;
  char *local_48;
  ID local_40;
  char *local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingRel_026c5ca0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    local_2c = 1;
  }
  else {
    pcVar1 = "WCUIAlertView";
    _objc_getClass();
    local_38 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_2c = 1;
    }
    else {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      pcVar1 = local_38;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x28)
        ;
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98
                );
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setTextFieldDefaultText__0269fd98,local_40);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_confirmRename__026b6d20);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

