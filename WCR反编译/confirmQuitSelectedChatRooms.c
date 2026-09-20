// confirmQuitSelectedChatRooms @ 018a4dcc

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::confirmQuitSelectedChatRooms(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  ID IVar8;
  long lVar9;
  undefined *local_160;
  undefined *local_158;
  char *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  long local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  byte local_c9;
  undefined1 *local_c8;
  undefined1 *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_chatRoomMuteManageRule_026ab770);
  local_c9 = 0;
  bVar3 = false;
  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar5 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_chatRoomMuteManageIncludeGroups_026ab760);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar3 = puVar5 == (undefined1 *)0x0;
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if (bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb_J);
    local_d0 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = 0;
    local_d8 = puVar4;
    _memset(auStack_128,0,0x40);
    puVar4 = PTR_WCRefineChatRoomMuteHelper_026ce2f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomMuteHelper_026ce2f0,PTR_s_pendingTargetUserNames_026b7620);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != (undefined *)0x0) {
      lVar9 = *local_118;
      local_160 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar9 != 0) {
            _objc_enumerationMutation(*local_118 - lVar9,puVar4);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_160 * 8);
          puVar6 = PTR_WCRefineChatRoomMuteHelper_026ce2f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineChatRoomMuteHelper_026ce2f0,PTR_s_isOwnerUserName__026ab7b0,
                     local_e8);
          if (((ulong)puVar6 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e8);
          }
          else {
            local_e0 = local_e0 + 1;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_160 = (undefined *)0x0;
      } while (local_158 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
    IVar8 = local_b0;
    uVar2 = DAT_028c65f8;
    if (puVar4 == (undefined *)0x0) {
      pcVar1 = &cf_N__O_f__Nelvc;
      if (local_e0 == 0) {
        pcVar1 = &cf_lg;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
      local_d0 = 1;
    }
    else {
      puVar4 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
      _objc_setAssociatedObject(IVar8,uVar2,puVar4,3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      IVar8 = local_b0;
      uVar2 = DAT_028c6600;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 local_e0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(IVar8,uVar2,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar7 = "WCUIActionSheet";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_130 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar7,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OYuU_,local_b0,
                 PTR_s_quitSelectedChatRoomsKeepingReco_026b76d0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_addBtnTitle_target_sel__0269d278,&::cf___,local_b0,
                 PTR_s_quitSelectedChatRoomsClearingRec_026b76d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar7 = local_130;
      IVar8 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      _objc_storeStrong(&local_130,0);
      local_d0 = 0;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

