// deliverEmoticonMessage:chatVC:asSelfie:title: @ 00f3a980

/* Function Stack Size: 0x2c bytes */

void WCRefineEmoticonToolsHelper::deliverEmoticonMessage_chatVC_asSelfie_title_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_a8;
  char *local_70;
  char *local_68;
  undefined *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  undefined1 local_41;
  ulong local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (undefined1)param_5;
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_6);
  if ((local_38 == 0) || (local_40 == 0)) {
    local_54 = 1;
  }
  else {
    local_60 = PTR_s_SendNotGameEmoticonMessage_error_026a3dc8;
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,
               PTR_s_SendNotGameEmoticonMessage_error_026a3dc8);
    if ((uVar2 & 1) == 0) {
      pcVar3 = "SharePreConfirmSheetView";
      _objc_getClass();
      local_68 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_NNS_u);
        local_54 = 1;
      }
      else {
        _objc_alloc_init();
        local_70 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDelegate__026ca910,local_40);
        }
        pcVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setTitle__0269cef0);
        if (((ulong)pcVar3 & 1) != 0) {
          if (local_50 == (cfstringStruct *)0x0) {
            local_a8 = &cf_Sh_;
          }
          else {
            local_a8 = local_50;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTitle__0269cef0,local_a8);
        }
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setArrMsgs__026a9878);
        pcVar3 = local_70;
        puVar1 = PTR_s_setArrMsgs__026a9878;
        if (((ulong)pcVar4 & 1) != 0) {
          local_20 = local_38;
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_20,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,
                   PTR_s_OnSharePreConfirmSheetViewSend__026ac180);
        if (((uVar2 & 1) != 0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_OnSharePreConfirmSheetViewSend__026ac180,local_70),
           (DAT_028e2d50 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
        }
        _objc_storeStrong(&local_70,0);
        local_54 = 0;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_60,local_38,0);
      if ((DAT_028e2d50 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      }
      local_54 = 1;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

