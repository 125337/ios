// FUN_01539238 @ 01539238

void FUN_01539238(double param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long local_2c0;
  double local_2b8;
  uint local_284;
  cfstringStruct *local_260;
  cfstringStruct *local_1c8;
  ulong local_1a8;
  uint local_178;
  uint local_164;
  bool local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  ulong local_b8;
  byte local_a9;
  undefined *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  bool local_81;
  cfstringStruct *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  byte local_59;
  cfstringStruct *local_58;
  undefined *local_50;
  byte local_42;
  byte local_41;
  cfstringStruct *local_40;
  byte local_32;
  byte local_31;
  cfstringStruct *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = (cfstringStruct *)PTR_WCRTopBarProfileData_026cedb0;
  _objc_alloc_init();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setContact__026b07c0,local_28);
  uVar7 = local_28;
  FUN_01533df4(local_28,PTR_s_m_nsUsrName_0269d638);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  FUN_01533bf8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setWxid__026b07c8);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (pcVar3 == (cfstringStruct *)0x0) {
    uVar7 = local_28;
    FUN_01533eb8(local_28,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setWxid__026b07c8);
    (*(code *)PTR__objc_release_02578630)(uVar7);
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar1;
  FUN_01565254();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  local_31 = (byte)pcVar3;
  local_41 = 0;
  local_164 = 0;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_164 = (uint)pcVar1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  local_32 = (byte)local_164 & 1;
  if (((local_164 & 1) == 0) && ((local_31 & 1) == 0)) {
    uVar7 = local_28;
    FUN_01533f64(local_28,PTR_s_isChatroom_0269e248,0);
    local_32 = (byte)uVar7;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setIsGroup__026af830,local_32 & 1);
  uVar7 = local_28;
  FUN_01533f64(local_28,PTR_s_isSelf_0269ff30,0);
  local_42 = (byte)uVar7;
  if ((uVar7 & 1) == 0) {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    puVar4 = local_50;
    local_59 = 0;
    local_178 = 0;
    if (puVar5 != (undefined *)0x0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isEqualToString__0269ccc8);
      local_178 = (uint)puVar4;
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_178 & 1) != 0) {
      local_42 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setIsSelf__026b07d0,local_42 & 1);
  uVar7 = local_28;
  FUN_01533df4(local_28,PTR_s_m_nsRemark_0269d760);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  FUN_01533bf8();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_28;
  FUN_01533df4(local_28,PTR_s_m_nsNickName_0269d758);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  FUN_01533bf8();
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (uVar7 == 0) {
    local_1a8 = local_70;
  }
  else {
    local_1a8 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_1a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
  if (local_1a8 == 0) {
    uVar2 = local_28;
    FUN_01533df4(local_28,PTR_s_getContactDisplayName_0269d160);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = local_78;
    local_78 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar7 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (uVar7 == 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_81 = false;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_1c8 = &cf__gw_u7b;
    }
    else {
      local_1c8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_1c8;
    }
    local_81 = pcVar3 != (cfstringStruct *)0x0;
    _objc_storeStrong(&local_78,local_1c8);
    if ((local_81 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDisplayName__026ae2f8,local_78);
  uVar7 = local_28;
  FUN_015623d8(local_28,PTR_s_m_uiSex_026acdc8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSex__026b07d8,uVar7);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isGroup_026af768);
  if (((ulong)pcVar1 & 1) == 0) {
    uVar7 = local_28;
    FUN_01533df4(local_28,PTR_s_m_nsCountry_026b07e0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar7);
    uVar7 = local_28;
    FUN_01533df4(local_28,PTR_s_m_nsProvince_026b07e8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_98 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar7);
    uVar7 = local_28;
    FUN_01533df4(local_28,PTR_s_m_nsCity_026b07f0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar7);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = local_90;
    local_a8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (uVar7 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addObject__0269d180,local_90);
    }
    uVar7 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    if (uVar7 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addObject__0269d180,local_98);
    }
    uVar7 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (uVar7 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addObject__0269d180,local_a0);
    }
    puVar4 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_componentsJoinedByString__0269d140,&cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setRegionText__026b07f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar7 = local_28;
    FUN_01533df4(local_28,PTR_s_m_nsSignature_026b0800);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSignatureText__026b0808);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    uVar7 = local_28;
    FUN_01533df4(local_28,PTR_s_m_nsAliasName_026a6a58);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setWechatNo__026b0810);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wechatNo_026b0518);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (pcVar3 == (cfstringStruct *)0x0) {
      uVar7 = local_28;
      FUN_01533eb8(local_28,&cf_m_nsAlias);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setWechatNo__026b0810);
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSelf_0269ff30);
    if (((ulong)pcVar1 & 1) == 0) {
      uVar7 = local_28;
      FUN_01533f64(local_28,PTR_s_isMyContact_0269ef80,0);
      local_a9 = (byte)uVar7;
      if ((uVar7 & 1) == 0) {
        FUN_0152b7ec();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_30;
        local_b8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
        _objc_retainAutoreleasedReturnValue();
        FUN_015625e8();
        local_a9 = (byte)uVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        _objc_storeStrong(&local_b8,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setIsFriend__026b0818,local_a9 & 1);
      puVar4 = PTR_WCRefinePrivateFriendManager_026ce160;
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_shouldConcealUsername__0269fef8);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (((ulong)puVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setIsFriend__026b0818,0);
      }
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e9 = pcVar3 == (cfstringStruct *)0x0;
      if (local_e9) {
        local_260 = (cfstringStruct *)0x0;
      }
      else {
        FUN_0157d7a0(pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
        _objc_retainAutoreleasedReturnValue();
        local_260 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKey__0269e048);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = local_260;
        local_c8 = pcVar3;
      }
      local_e9 = !local_e9;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_260;
      if (local_e9) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
        (*(code *)PTR__objc_release_02578630)(local_d8);
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (local_c0 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCommonGroupCount__026af818,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDeferredDataPending__026b0820,1);
      }
      else {
        pcVar1 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCommonGroupCount__026af818,pcVar1);
      }
      _objc_storeStrong(&local_c0,0);
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSelf_0269ff30);
    if ((((ulong)pcVar1 & 1) == 0) &&
       (pcVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isFriend_026b0450),
       uVar7 = local_28, ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = &cf_m_uiLocalAddContactTime;
      _NSSelectorFromString(&cf_m_uiLocalAddContactTime);
      FUN_015623d8(uVar7,pcVar1,0);
      uVar2 = local_28;
      local_284 = (uint)uVar7;
      if (local_284 == 0) {
        pcVar1 = &cf_m_uiAddCreateTime;
        _NSSelectorFromString(&cf_m_uiAddCreateTime);
        FUN_015623d8(uVar2,pcVar1,0);
        local_284 = (uint)uVar2;
      }
      uVar7 = (ulong)local_284;
      FUN_0157d818();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setAddTimeText__026b0828);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      uVar7 = (ulong)local_284;
      FUN_0157da90();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setAddTimeDetailText__026b0830);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      if (local_284 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_2b8 = (double)NEON_ucvtf((ulong)local_284);
        local_2b8 = param_1 - local_2b8;
        if (local_2b8 <= 0.0) {
          local_2b8 = 0.0;
        }
        local_2c0 = (long)(local_2b8 / 86400.0) + 1;
        if (local_2c0 < 2) {
          local_2c0 = 1;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setFriendDays__026b0838,local_2c0);
      }
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setGroupID__026b0840);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    FUN_0157dd08(local_30);
    uVar7 = local_28;
    FUN_0157e108(local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setMyFriendCount__026b0848,uVar7);
    puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupID_026b0500);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_membersInvitedByCurrentUserInRoo_026ab660);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setInvitedCount__026b0850,puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  FUN_0157e460(local_30);
  pcVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

