// fillPrivateSnapshot: @ 014e424c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineSessionStatsEngine::fillPrivateSnapshot_
          (WCRefineSessionStatsEngine *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 in_d0;
  cfstringStruct *local_e0;
  uint local_7c;
  char *local_78;
  char *local_70;
  undefined4 local_68;
  byte local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  long *local_28;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_51 = 0;
  local_61 = 0;
  bVar1 = true;
  if (local_48 != 0) {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isGroup_026af768);
    bVar1 = true;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_usr_026af770);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = uVar2;
      FUN_014dfa54();
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar2 == 0;
    }
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar1) {
    local_68 = 1;
  }
  else {
    pcVar3 = "CContactMgr";
    _objc_getClass();
    FUN_014e23b8();
    _objc_retainAutoreleasedReturnValue();
    local_78 = (char *)0x0;
    local_70 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    pcVar4 = local_70;
    puVar5 = PTR_s_getContactByName__0269d178;
    if (((ulong)pcVar3 & 1) != 0) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_usr_026af770);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_78;
      local_78 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    pcVar3 = local_78;
    FUN_014e48f4(local_78,&cf_m_uiLocalAddContactTime);
    local_7c = (uint)pcVar3;
    if (local_7c == 0) {
      pcVar3 = local_78;
      FUN_014e48f4(local_78,&cf_m_uiAddCreateTime);
      local_7c = (uint)pcVar3;
    }
    if (local_7c != 0) {
      local_28 = &DAT_028e36d8;
      local_30 = 0;
      _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02586058);
      if (*local_28 + 1 != 0) {
        _dispatch_once(*local_28 + 1,local_28,local_30);
      }
      _objc_storeStrong(&local_30,0);
      pcVar6 = DAT_028e36d0;
      in_d0 = NEON_ucvtf((ulong)local_7c);
      puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_stringFromDate__0269d1d8);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_e0 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFriendAddTimeText__026af800,local_e0);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_commonGroupCount_026af808);
    if (uVar2 == 0) {
      IVar7 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_commonGroupCounts_026af810);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_usr_026af770);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCommonGroupCount__026af818,IVar9);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(IVar7);
    }
    puVar5 = PTR_WCRefineConfig_026cdf58;
    puVar10 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_clampedSessionStatsTimeRange__026af710,puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,local_38,PTR_s_windowStartForTimeRange_now__026af740,puVar5);
    IVar7 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,local_38,PTR_s_windowEndForTimeRange_now__026af748,puVar5);
    FUN_014e41d8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_usr_026af770);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = IVar8;
    FUN_014e3f08();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setVisitCount__026af7f0,IVar9);
    (*(code *)PTR__objc_release_02578630)(IVar8);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    local_68 = 0;
  }
  _objc_storeStrong(&local_48,0);
  return;
}

