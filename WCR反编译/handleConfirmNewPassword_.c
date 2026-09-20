// handleConfirmNewPassword: @ 01cba51c

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendViewController::handleConfirmNewPassword_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_a8;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  undefined4 local_4c;
  ID local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_39 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_68 = &::cf___;
  }
  else {
    local_68 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_68;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  IVar3 = local_18;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  _objc_setAssociatedObject(local_18,&DAT_028e4690,0,3);
  IVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((IVar3 == 0) ||
     (pcVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_48),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__N_k_xN);
    local_4c = 1;
  }
  else {
    local_58 = (cfstringStruct *)0x0;
    puVar4 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58;
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_58,pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (((ulong)puVar5 & 1) == 0) {
      if (local_58 == (cfstringStruct *)0x0) {
        local_a8 = &cf__xeHe;
      }
      else {
        local_a8 = local_58;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_a8);
      local_4c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__x_febr);
      local_4c = 0;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

