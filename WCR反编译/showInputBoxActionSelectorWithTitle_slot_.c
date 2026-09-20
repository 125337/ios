// showInputBoxActionSelectorWithTitle:slot: @ 01a5403c

/* Function Stack Size: 0x20 bytes */

void WCRefineGeneralFunctionViewController::showInputBoxActionSelectorWithTitle_slot_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  long lVar6;
  undefined *local_198;
  undefined *local_190;
  cfstringStruct *local_170;
  undefined *local_140;
  undefined *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  char *local_e0;
  undefined4 local_d4;
  char *local_d0;
  long_long local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  pcVar1 = "WCUIActionSheet";
  local_c8 = param_4;
  _objc_getClass();
  IVar5 = local_b0;
  local_d0 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_d4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_c8);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar5,"wcr_input_box_picker_slot",puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_d0;
    _objc_alloc();
    if (local_c0 == (cfstringStruct *)0x0) {
      local_170 = &cf_bR_O;
    }
    else {
      local_170 = local_c0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_170);
    puVar2 = PTR_WCRefineInputBoxGestureSupport_026ce678;
    local_e0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_actionIds_026ad508);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    _memset(auStack_130,0,0x40);
    puVar2 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_190 != (undefined *)0x0) {
      lVar6 = *local_120;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar6 != 0) {
            _objc_enumerationMutation(*local_120 - lVar6,puVar2);
          }
          local_f0 = *(ulong *)(local_128 + (long)local_198 * 8);
          puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineInputBoxGestureSupport_026ce678,
                     PTR_s_displayNameForAction__026bbea8,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_140 = (undefined *)0x0;
          uVar4 = local_f0;
          local_138 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionNone);
          if ((uVar4 & 1) == 0) {
            uVar4 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionUndo);
            if ((uVar4 & 1) == 0) {
              uVar4 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f0,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionPaste);
              if ((uVar4 & 1) == 0) {
                uVar4 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionClipboard);
                if ((uVar4 & 1) == 0) {
                  uVar4 = local_f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f0,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionQuickReply);
                  if ((uVar4 & 1) == 0) {
                    uVar4 = local_f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f0,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionClear);
                    if ((uVar4 & 1) == 0) {
                      uVar4 = local_f0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_f0,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionCopyAll)
                      ;
                      if ((uVar4 & 1) == 0) {
                        uVar4 = local_f0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_f0,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionCut);
                        if ((uVar4 & 1) == 0) {
                          uVar4 = local_f0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_f0,PTR_s_isEqualToString__0269ccc8,
                                     _WCRInputBoxActionHideKeyboard);
                          if ((uVar4 & 1) != 0) {
                            local_140 = PTR_s_handleInputBoxActionHideKeyboard_026bccd0;
                          }
                        }
                        else {
                          local_140 = PTR_s_handleInputBoxActionCut__026bccc8;
                        }
                      }
                      else {
                        local_140 = PTR_s_handleInputBoxActionCopyAll__026bccc0;
                      }
                    }
                    else {
                      local_140 = PTR_s_handleInputBoxActionClear__026bccb8;
                    }
                  }
                  else {
                    local_140 = PTR_s_handleInputBoxActionQuickReply__026bccb0;
                  }
                }
                else {
                  local_140 = PTR_s_handleInputBoxActionClipboard__026bcca8;
                }
              }
              else {
                local_140 = PTR_s_handleInputBoxActionPaste__026bcca0;
              }
            }
            else {
              local_140 = PTR_s_handleInputBoxActionUndo__026bcc98;
            }
          }
          else {
            local_140 = PTR_s_handleInputBoxActionNone__026bcc90;
          }
          if (local_140 == (undefined *)0x0) {
            local_d4 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_addBtnTitle_target_sel__0269d278,local_138,local_b0,local_140)
            ;
            local_d4 = 0;
          }
          _objc_storeStrong(&local_138,0);
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_e0;
    IVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

