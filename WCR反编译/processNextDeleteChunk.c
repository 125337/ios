// processNextDeleteChunk @ 0185996c

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchDeleteFriendViewController::processNextDeleteChunk(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  dispatch_time_t dVar7;
  undefined *puVar8;
  ulong local_c8;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  ID local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDeleting_026b69a0);
  if ((param_1 & 1) != 0) {
    FUN_01854b04();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    local_38 = param_1;
    if (param_1 == 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingCandidates_026b6a28);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30);
      IVar5 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_applyFailCount_026b6a38);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_setApplyFailCount__026b6a08,IVar5 + (IVar6 - IVar4));
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finishBatchDelete_026b6a40);
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30);
      local_50 = IVar1 + 8;
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingCandidates_026b6a28);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_c8 = IVar2;
      if (local_50 < IVar2) {
        local_c8 = local_50;
      }
      local_60 = local_c8;
      local_48 = local_c8;
      local_58 = IVar2;
      while (IVar1 = local_28,
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30),
            IVar1 < local_48) {
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingCandidates_026b6a28);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30);
        IVar6 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_objectAtIndexedSubscript__0269cc78,IVar2);
        _objc_retainAutoreleasedReturnValue();
        local_68 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        uVar3 = local_38;
        IVar1 = local_68;
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_retainChatHistory_026b6980);
        FUN_01859f90(uVar3,IVar1,IVar2);
        IVar1 = local_28;
        if ((uVar3 & 1) == 0) {
          IVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyFailCount_026b6a38);
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setApplyFailCount__026b6a08,IVar2 + 1);
        }
        else {
          IVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applySuccessCount_026b6a48);
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_setApplySuccessCount__026b6a00,IVar2 + 1);
          IVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingHistoryEntries_026b6a10);
          _objc_retainAutoreleasedReturnValue();
          IVar1 = local_68;
          IVar6 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contact_026a0d10);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sourceTitle_026b6958);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_retainChatHistory_026b6980);
          FUN_0185a554(IVar1,IVar6,IVar4,IVar5);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(IVar1);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
        IVar1 = local_28;
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30);
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setPendingApplyIndex__026b69f8,IVar2 + 1);
        _objc_storeStrong(&local_68,0);
      }
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingCandidates_026b6a28);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (IVar1 < IVar6) {
        dVar7 = _dispatch_time(0,50000000);
        puVar8 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_28;
        local_90 = PTR___NSConcreteStackBlock_02578660;
        local_88 = 0xc2000000;
        local_84 = 0;
        local_80 = FUN_0185aab8;
        local_78 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = IVar1;
        _dispatch_after(dVar7,puVar8,&local_90);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        _objc_storeStrong(&local_70,0);
        local_3c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finishBatchDelete_026b6a40);
        local_3c = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

