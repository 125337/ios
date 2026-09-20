// confirmRenameWatermark: @ 01fae26c

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineWatermarkLibraryViewController::confirmRenameWatermark_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_40;
  undefined4 local_34;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar1 = local_18;
  _objc_getAssociatedObject(local_18,PTR_s_renameWatermark_026c9dd0);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = IVar1;
  if (IVar1 == 0) {
    local_34 = 1;
  }
  else {
    local_40 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getTextFieldText_0269fb40);
    if ((IVar1 & 1) != 0) {
      IVar2 = local_30[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30[0],PTR_s_performSelector__026ca7b8,PTR_s_getTextFieldText_0269fb40);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_40;
      local_40 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    _objc_setAssociatedObject(local_18,PTR_s_renameWatermark_026c9dd0,0,1);
    IVar1 = local_40;
    if (local_40 == 0) {
      local_34 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_40;
      local_40 = IVar1;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (IVar1 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_TyN_Nzz);
        local_34 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_performRenameWithNewName__026c4a50,local_40);
        local_34 = 0;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

