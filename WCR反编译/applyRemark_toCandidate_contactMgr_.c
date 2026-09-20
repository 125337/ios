// applyRemark:toCandidate:contactMgr: @ 018668d4

/* Function Stack Size: 0x28 bytes */

bool WCRefineBatchRemarkViewController::applyRemark_toCandidate_contactMgr_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ulong local_128;
  byte local_d9;
  ulong local_80;
  ulong local_70;
  ulong local_68;
  undefined4 local_60;
  byte local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  local_59 = 0;
  bVar2 = true;
  if (local_40 != 0) {
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_userName_0269f7b8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = true;
    if (uVar3 != 0) {
      bVar2 = local_50 == 0;
    }
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (bVar2) {
    local_21 = 0;
    local_60 = 1;
  }
  else {
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contact_026a0d10);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_50;
    local_128 = uVar4;
    if (uVar4 == 0) {
      local_70 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_userName_0269f7b8);
      _objc_retainAutoreleasedReturnValue();
      FUN_0185efe4();
      _objc_retainAutoreleasedReturnValue();
      local_128 = uVar3;
      local_80 = uVar3;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_128;
    if (uVar4 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (local_68 == 0) {
      local_21 = 0;
    }
    else {
      pcVar5 = &
               cf_startModifyContactUserName_remark_isChangeRemark_arrPhone_isChangePhone_contactDesc_isChangecontactDesc_callbackBlock_
      ;
      _NSSelectorFromString();
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar5);
      uVar3 = local_50;
      bVar2 = (uVar4 & 1) != 0;
      if (bVar2) {
        uVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_userName_0269f7b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar5,uVar4,local_40,1,0,0,0,0);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      else {
        uVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,
                   PTR_s_startModifyContactUserName_remar_026a2ec8);
        uVar3 = local_50;
        puVar1 = PTR_s_startModifyContactUserName_remar_026a2ec8;
        if ((uVar4 & 1) != 0) {
          uVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_userName_0269f7b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,puVar1,uVar4,local_40);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          bVar2 = true;
        }
      }
      if (!bVar2) {
        pcVar6 = "CContactOPLog";
        _objc_getClass();
        pcVar5 = &
                 cf_start_ModifyContactUserName_remark_isChangeRemark_arrPhone_isChangePhone_contactDesc_isChangecontactDesc_callbackBlock_
        ;
        _NSSelectorFromString();
        if ((pcVar6 != (char *)0x0) &&
           (pcVar7 = pcVar6,
           (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_respondsToSelector__026ca818,pcVar5),
           ((ulong)pcVar7 & 1) != 0)) {
          uVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_userName_0269f7b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,pcVar5,uVar3,local_40,1,0,0,0,0);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          bVar2 = true;
        }
      }
      pcVar5 = &cf_setRemarkWithoutEmojiChange_;
      _NSSelectorFromString();
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar5);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,pcVar5,local_40);
      }
      local_d9 = 0;
      pcVar5 = &cf_setContact_remark_isLocal_;
      _NSSelectorFromString();
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar5);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setContact_remark__026a2ed0);
        if ((uVar3 & 1) != 0) {
          uVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_setContact_remark__026a2ed0,local_68,local_40);
          local_d9 = (byte)uVar3;
        }
      }
      else {
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar5,local_68,local_40,bVar2);
        local_d9 = (byte)uVar3;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCurrentRemark__026b6a50,local_40);
      local_21 = 1;
      if (!bVar2) {
        local_21 = local_d9;
      }
      local_21 = local_21 & 1;
    }
    local_60 = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

