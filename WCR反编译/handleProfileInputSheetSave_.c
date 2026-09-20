// handleProfileInputSheetSave: @ 01cdb084

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardBeautifyViewController::handleProfileInputSheetSave_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_58;
  ID local_50;
  undefined *local_48;
  ID local_40;
  ID local_38;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e46fa);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30[0] = IVar1;
  _objc_getAssociatedObject(local_18,&DAT_028e46fb);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = local_38;
    _NSSelectorFromString(IVar2);
  }
  local_40 = local_58;
  if (local_58 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,local_58);
    puVar3 = PTR_WCRefineProfileInputValueProxy_026cf4f0;
    if ((IVar1 & 1) != 0) {
      IVar1 = local_30[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_proxyWithText__026c3880);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar3;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_40,local_48);
      _objc_storeStrong(&local_48,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_resignFirstResponder_0269ea18);
  IVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e46fd);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar1;
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_dismissWithAnimated__0269e420,1);
    }
  }
  _objc_setAssociatedObject(local_18,&DAT_028e46fd);
  _objc_setAssociatedObject(local_18,&DAT_028e46fa,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028e46fb,0,3);
  _objc_setAssociatedObject(local_18,&DAT_028e46fc,0,1);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

