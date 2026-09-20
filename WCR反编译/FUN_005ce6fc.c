// FUN_005ce6fc @ 005ce6fc

void FUN_005ce6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined1 param_6)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  ulong local_70;
  cfstringStruct *local_68;
  ulong local_60 [3];
  undefined4 local_44;
  ulong local_40;
  long local_38;
  undefined1 local_29;
  long local_28;
  
  uVar1 = param_5 + 0x20;
  local_38 = param_5;
  local_29 = param_6;
  local_28 = param_5;
  _objc_loadWeakRetained();
  local_40 = uVar1;
  if (uVar1 == 0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setWCRefine_feedbackTriggered__026a57a0,0);
    if ((*(byte *)(param_5 + 0x30) & 1) != 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_dataItem_026a4670);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      lVar6 = *(long *)(param_5 + 0x28);
      local_60[0] = uVar2;
      if (lVar6 == 0) {
        if (uVar2 != 0) {
          pcVar3 = &cf_WCActionSheet;
          _NSClassFromString();
          local_68 = pcVar3;
          if (pcVar3 != (cfstringStruct *)0x0) {
            _objc_setAssociatedObject(pcVar3,&DAT_028cb77d,local_60[0],1);
            _objc_setAssociatedObject(local_68,&DAT_028cb77e,local_40,0);
          }
        }
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_editBlackList_026a5b70);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_performSelector__026ca7b8,PTR_s_editBlackList_026a5b70);
        }
      }
      else if (lVar6 == 1) {
        if (uVar2 != 0) {
          _WCRefineForwardMomentFromCellView(local_40,uVar2,0);
        }
      }
      else if (lVar6 == 2) {
        if (uVar2 != 0) {
          puVar4 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_WCRefine_deleteMoment_requiresCo_026a5818,uVar2,
                     (ulong)puVar5 & 0xffffffff);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
      }
      else if (lVar6 == 3) {
        if (uVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_WCRefine_applyFakeEngagement__026a57c8,uVar2);
        }
      }
      else if (lVar6 != 4) {
        if (lVar6 == 5) {
          if (uVar2 != 0) {
            _WCRefineForwardMomentToChatFromCellView(local_40,uVar2);
          }
        }
        else if (lVar6 == 6) {
          if (uVar2 != 0) {
            _WCRefineForwardMomentFromCellView(local_40,uVar2,1);
          }
        }
        else if (lVar6 == 7) {
          FUN_005cef0c(0);
          _objc_retainAutoreleasedReturnValue();
          local_78 = PTR_s_WCRefinePerformLikeAction_withTa_026a50a0;
          local_70 = uVar1;
          if (((uVar1 != 0) && (local_60[0] != 0)) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_respondsToSelector__026ca818,
                         PTR_s_WCRefinePerformLikeAction_withTa_026a50a0), (uVar1 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
            local_a8 = param_1;
            local_a0 = param_2;
            local_98 = param_3;
            local_90 = param_4;
            _CGRectGetMidX();
            uVar7 = param_1;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
            local_c8 = uVar7;
            local_c0 = param_2;
            local_b8 = param_3;
            local_b0 = param_4;
            _CGRectGetMidY(uVar7,param_2,param_3,param_4);
            FUN_005cf09c();
            uVar1 = local_70;
            puVar4 = local_78;
            uVar2 = local_60[0];
            local_88 = param_1;
            uStack_80 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_likeFlag_026a4708);
            uStack_d8 = uStack_80;
            local_e0 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,uStack_80,uVar1,puVar4,(uint)uVar2 ^ 1);
          }
          local_44 = 2;
          _objc_storeStrong(&local_70,0);
        }
        else if (lVar6 == 8) {
          FUN_005cef0c(0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_s_WCRefinePerformCommentActionWith_026a5020;
          local_e8 = uVar1;
          if ((uVar1 != 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_respondsToSelector__026ca818,
                         PTR_s_WCRefinePerformCommentActionWith_026a5020), (uVar1 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
            _CGRectGetMidX();
            uVar7 = param_1;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
            _CGRectGetMidY(uVar7,param_2,param_3,param_4);
            FUN_005cf09c();
            (*(code *)PTR__objc_msgSend_02578628)(param_1,uVar7,local_e8,puVar4);
          }
          local_44 = 2;
          _objc_storeStrong(&local_e8,0);
        }
        else if ((lVar6 == 9) && (uVar2 != 0)) {
          _WCRefineSaveMomentMediaFromCellView(local_40,uVar2);
        }
      }
      _objc_storeStrong(local_60,0);
    }
    local_44 = 0;
  }
  _objc_storeStrong(&local_40,0);
  return;
}

