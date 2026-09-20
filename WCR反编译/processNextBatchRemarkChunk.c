// processNextBatchRemarkChunk @ 01867208

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::processNextBatchRemarkChunk(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  dispatch_time_t dVar6;
  undefined *puVar7;
  ulong local_d8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  ID local_78;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isApplying_026b6b18);
  if ((param_1 & 1) != 0) {
    FUN_0185efc4();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_38 = param_1;
    if (param_1 == 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingChanges_026b6ba0);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30);
      IVar2 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_applyFailCount_026b6a38);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_setApplyFailCount__026b6a08,IVar2 + (IVar5 - IVar1));
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finishApplyingChanges_026b6ba8);
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30);
      local_50 = IVar3 + 0xc;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingChanges_026b6ba0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_d8 = IVar4;
      if (local_50 < IVar4) {
        local_d8 = local_50;
      }
      local_60 = local_d8;
      local_48 = local_d8;
      local_58 = IVar4;
      while (IVar3 = local_28,
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30),
            IVar3 < local_48) {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingChanges_026b6ba0);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30);
        IVar5 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectAtIndexedSubscript__0269cc78,IVar4);
        _objc_retainAutoreleasedReturnValue();
        local_68 = IVar5;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        IVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_candidate);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_68;
        local_70 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_newRemark);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_28;
        local_78 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_applyRemark_toCandidate_contactM_026b6bb0,IVar4,local_70,local_38)
        ;
        IVar3 = local_28;
        if ((IVar5 & 1) == 0) {
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyFailCount_026b6a38);
          (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setApplyFailCount__026b6a08,IVar4 + 1);
        }
        else {
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applySuccessCount_026b6a48);
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_setApplySuccessCount__026b6a00,IVar4 + 1);
        }
        IVar3 = local_28;
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30);
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setPendingApplyIndex__026b69f8,IVar4 + 1);
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_68,0);
      }
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingApplyIndex_026b6a30);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingChanges_026b6ba0);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if (IVar3 < IVar5) {
        dVar6 = _dispatch_time(0,30000000);
        puVar7 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_28;
        local_a0 = PTR___NSConcreteStackBlock_02578660;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_01867788;
        local_88 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = IVar3;
        _dispatch_after(dVar6,puVar7,&local_a0);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _objc_storeStrong(&local_80,0);
        local_3c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finishApplyingChanges_026b6ba8);
        local_3c = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

