// restoreDefaultIcon @ 01e146f8

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatButtonConfigViewController::restoreDefaultIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID local_58;
  bool local_49;
  ID local_48;
  ID local_40;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingActionId_026c5d30);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingActionId__026c5d10,0);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_2c = 1;
    goto LAB_01e1495c;
  }
  _WCRSuperFloatResetActionIcon(local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  local_58 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_actionWithId__026c5d38,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_49 = local_58 == 0;
  local_38 = local_58;
  if (local_49) {
    local_58 = 0;
  }
  else {
    _WCRSuperFloatLocalIconRelativePathForAction();
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_58;
  }
  local_49 = !local_49;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_58;
  if (local_49) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuIconPackEnabled_026b1a60);
  if (((ulong)puVar2 & 1) == 0) {
LAB_01e14910:
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__b_YVh);
  }
  else {
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    puVar2 = PTR_WCRefineHelper_026ce000;
    if (IVar1 == 0) goto LAB_01e14910;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__b_YVhS_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  local_2c = 0;
LAB_01e1495c:
  _objc_storeStrong(&local_28,0);
  return;
}

