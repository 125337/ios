// FUN_01859f90 @ 01859f90

byte FUN_01859f90(undefined8 param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  ulong local_f0;
  ulong local_a8;
  byte local_99;
  ulong local_98 [4];
  byte local_71;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  byte local_49;
  ulong local_48;
  byte local_39;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_49 = 0;
  bVar3 = true;
  local_39 = param_3;
  if ((local_30 != 0) && (bVar3 = true, local_38 != 0)) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userName_0269f7b8);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar3 = uVar4 == 0;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar3) {
    local_21 = 0;
    local_50 = 1;
  }
  else {
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contact_026a0d10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_30;
    local_61 = 0;
    local_71 = 0;
    local_f0 = uVar5;
    if (uVar5 == 0) {
      uVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userName_0269f7b8);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = uVar6;
      FUN_01854b24();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar4;
      local_70 = uVar4;
    }
    local_71 = uVar5 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_f0;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    if (local_58 == 0) {
      local_21 = 0;
      local_50 = 1;
    }
    else {
      uVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_isSelf_0269ff30);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isSelf_0269ff30),
         (uVar4 & 1) == 0)) {
        uVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userName_0269f7b8);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 0;
        local_98[0] = uVar4;
        if ((local_39 & 1) != 0) {
          uVar4 = local_30;
          FUN_018549bc(local_30,&cf_m_oContactOPLog);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = &cf_add_DeleteContact_isRetainChatHistory_delScene_sync_;
          local_a8 = uVar4;
          _NSSelectorFromString();
          if ((local_a8 != 0) &&
             (uVar4 = local_a8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_a8,PTR_s_respondsToSelector__026ca818,pcVar7), (uVar4 & 1) != 0)) {
            uVar4 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,pcVar7,local_98[0],1,0,1);
            local_99 = (byte)uVar4;
          }
          _objc_storeStrong(&local_a8,0);
        }
        pcVar7 = &cf_deleteContact_listType_andScene_sync_local_;
        _NSSelectorFromString();
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar7);
        puVar2 = PTR_s_deleteContact_listType__0269ffd0;
        if ((uVar4 & 1) == 0) {
          uVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_respondsToSelector__026ca818,
                     PTR_s_deleteContact_listType__0269ffd0);
          if ((uVar4 & 1) == 0) {
            local_21 = 0;
          }
          else {
            uVar4 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar2,local_58);
            local_21 = (byte)uVar4 & 1;
          }
        }
        else {
          bVar1 = 0;
          if ((local_39 & 1) != 0) {
            bVar1 = local_99;
          }
          uVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar7,local_58,1,0,1,bVar1 & 1);
          local_21 = (byte)uVar4 & 1;
        }
        local_50 = 1;
        _objc_storeStrong(local_98,0);
      }
      else {
        local_21 = 0;
        local_50 = 1;
      }
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

