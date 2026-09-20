// FUN_01572af4 @ 01572af4

byte FUN_01572af4(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  ulong local_c0;
  cfstringStruct *local_b8;
  ulong local_b0;
  undefined4 local_a4;
  ulong local_a0;
  int local_94;
  undefined *local_90;
  ulong local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ulong local_70;
  undefined4 local_68;
  byte local_61;
  ulong local_60;
  ulong local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_1);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_2);
  local_61 = param_3;
  if (((local_58 == 0) || (uVar2 = local_58, FUN_01564574(), (uVar2 & 1) != 0)) ||
     (uVar2 = local_58, FUN_01565620(), (uVar2 & 1) != 0)) {
    local_49 = 0;
    local_68 = 1;
    goto LAB_01573168;
  }
  uVar2 = local_60;
  FUN_01570cf0();
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar2;
  if (uVar2 == 0) {
    local_49 = 0;
    local_68 = 1;
  }
  else {
    pcVar3 = &cf_WeixinContactInfoAssist;
    _NSClassFromString();
    pcVar4 = &cf_initWithContact_andChatContact_andVerify_delegate_location_sourceMsg_;
    local_78 = pcVar3;
    _NSSelectorFromString();
    local_80 = pcVar4;
    if ((local_78 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_78,PTR_s_instancesRespondToSelector__0269da90,pcVar4),
       ((ulong)pcVar3 & 1) == 0)) {
      local_49 = 0;
      local_68 = 1;
    }
    else {
      uVar2 = local_60;
      FUN_01570f24();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_WCRMomentsVoipActionDelegateProxy_026ceda0;
      local_88 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRMomentsVoipActionDelegateProxy_026ceda0,PTR_s_new_0269d288);
      local_90 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setSourceViewController__026b0690,local_70)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setUserData__0269f728,local_88);
      local_94 = 0;
      uVar2 = local_70;
      FUN_01566074(local_70,&cf_m_uiFromScene);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_unsignedIntValue_0269db10);
        local_94 = (int)uVar2;
      }
      if (local_94 == 0) {
        local_94 = 0x1e;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setFromScene__026b0698,local_94);
      local_a4 = 0;
      uVar2 = local_58;
      FUN_01566074(local_58,&cf_m_uiVerify);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_unsignedIntValue_0269db10);
        local_a4 = (undefined4)uVar2;
      }
      pcVar3 = local_78;
      _objc_alloc();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (local_b8 == (cfstringStruct *)0x0) {
        local_49 = 0;
        local_68 = 1;
      }
      else {
        uVar2 = local_88;
        FUN_01566074(local_88,&cf_jumpData);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = uVar2;
        if (uVar2 != 0) {
          FUN_01563e1c(local_b8,&cf_snsJumpData,uVar2);
        }
        uVar2 = local_70;
        uVar1 = DAT_028c5f90;
        local_48 = &cf_assist;
        local_38 = local_b8;
        local_40 = &cf_delegate;
        local_30 = local_90;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,uVar1,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar3 = &cf_canShowVOIPBtn;
        _NSSelectorFromString();
        pcVar4 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,pcVar3);
        if ((((ulong)pcVar4 & 1) == 0) ||
           (pcVar4 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,pcVar3),
           ((ulong)pcVar4 & 1) != 0)) {
          pcVar3 = &cf_onOpenVoiceVoipView;
          _NSSelectorFromString();
          pcVar4 = &cf_onOpenVoipView;
          _NSSelectorFromString();
          if ((local_61 & 1) == 0) {
            pcVar6 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_respondsToSelector__026ca818,pcVar3);
            if (((ulong)pcVar6 & 1) == 0) {
              pcVar3 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_respondsToSelector__026ca818,pcVar4);
              if (((ulong)pcVar3 & 1) == 0) goto LAB_015730e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,pcVar4);
              local_49 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,pcVar3);
              local_49 = 1;
            }
          }
          else {
            pcVar6 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_respondsToSelector__026ca818,pcVar4);
            if (((ulong)pcVar6 & 1) == 0) {
              pcVar4 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_respondsToSelector__026ca818,pcVar3);
              if (((ulong)pcVar4 & 1) == 0) {
LAB_015730e8:
                local_49 = 0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_b8,pcVar3);
                local_49 = 1;
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,pcVar4);
              local_49 = 1;
            }
          }
        }
        else {
          local_49 = 0;
        }
        local_68 = 1;
        _objc_storeStrong(&local_c0,0);
      }
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
    }
  }
  _objc_storeStrong(&local_70,0);
LAB_01573168:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_49 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

