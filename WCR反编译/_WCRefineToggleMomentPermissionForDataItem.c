// _WCRefineToggleMomentPermissionForDataItem @ 005a78e0

void _WCRefineToggleMomentPermissionForDataItem(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  cfstringStruct *local_268;
  char *local_208;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  byte local_e9;
  undefined *local_e8;
  byte local_d9;
  char *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  bool local_b9;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  byte local_9a;
  byte local_99;
  undefined *local_98;
  char *local_90;
  byte local_82;
  byte local_81;
  char *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_60;
  cfstringStruct *local_50;
  ulong local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  local_50 = (cfstringStruct *)0x0;
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_username_026a2238);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_50;
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_50;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_username);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_50;
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_50;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_OOo_);
    local_60 = 1;
    goto LAB_005a87f8;
  }
  FUN_005a88c4();
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  uVar8 = 0;
  if (pcVar2 == (cfstringStruct *)0x0) {
LAB_005a7c10:
    pcVar2 = local_50;
    FUN_005a8b7c(uVar8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0RT_N);
      local_60 = 1;
    }
    else {
      FUN_005a8d0c();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = "CContactMgr";
      local_78 = pcVar2;
      _objc_getClass();
      FUN_005a8d2c();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = local_48;
      local_80 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_isEqualToString__0269ccc8,&cf_perm_chat_only);
      if ((uVar8 & 1) == 0) {
        uVar8 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_isEqualToString__0269ccc8,&cf_perm_hide_me);
        if ((uVar8 & 1) == 0) {
          uVar8 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_isEqualToString__0269ccc8,&cf_perm_hide_him);
          if ((uVar8 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gwCgPd_O);
            local_60 = 0;
          }
          else {
            local_d9 = 0;
            local_e8 = PTR_s_isUserInGroup_GroupID__026a5710;
            if ((local_78 != (cfstringStruct *)0x0) &&
               (pcVar2 = local_78,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_78,PTR_s_respondsToSelector__026ca818,
                          PTR_s_isUserInGroup_GroupID__026a5710), ((ulong)pcVar2 & 1) != 0)) {
              pcVar2 = local_78;
              (*(code *)PTR__objc_msgSend_02578628)(local_78,local_e8,local_50,&cf_5);
              local_d9 = (byte)pcVar2;
            }
            local_e9 = (local_d9 ^ 1) & 1;
            local_f8 = (cfstringStruct *)0x0;
            local_100 = PTR_s_getGroupByID__026a5718;
            if ((local_78 != (cfstringStruct *)0x0) &&
               (pcVar2 = local_78,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_getGroupByID__026a5718),
               ((ulong)pcVar2 & 1) != 0)) {
              pcVar3 = local_78;
              (*(code *)PTR__objc_msgSend_02578628)(local_78,local_100,&cf_5);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_f8;
              local_f8 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
            }
            bVar1 = false;
            if ((local_f8 == (cfstringStruct *)0x0) ||
               (pcVar2 = local_f8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_gid_026a5720),
               ((ulong)pcVar2 & 1) == 0)) {
              local_268 = &cf_5;
            }
            else {
              local_268 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_gid_026a5720);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              local_110 = local_268;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_108 = local_268;
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_110);
            }
            puVar6 = PTR_s_removeMembers_fromGroup_withScen_026a5730;
            puVar4 = PTR_s_addMembers_toGroup_withScene__026a5728;
            if ((local_e9 & 1) == 0) {
              if ((local_78 == (cfstringStruct *)0x0) ||
                 (pcVar3 = local_78,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_78,PTR_s_respondsToSelector__026ca818,
                            PTR_s_removeMembers_fromGroup_withScen_026a5730), pcVar2 = local_78,
                 ((ulong)pcVar3 & 1) == 0)) goto LAB_005a8714;
              local_38 = local_50;
              puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_38,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar6,puVar4,local_108,0);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__sQNwN);
            }
            else if ((local_78 == (cfstringStruct *)0x0) ||
                    (pcVar3 = local_78,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_78,PTR_s_respondsToSelector__026ca818,
                               PTR_s_addMembers_toGroup_withScene__026a5728), pcVar2 = local_78,
                    ((ulong)pcVar3 & 1) == 0)) {
LAB_005a8714:
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_NwNn_NS_u);
            }
            else {
              local_30 = local_50;
              puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_30,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar4,puVar6,local_108,0);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__);
            }
            local_60 = 1;
            _objc_storeStrong(&local_108);
            _objc_storeStrong(&local_f8,0);
          }
        }
        else {
          local_99 = 0;
          pcVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_isSnsBlack_026a56f0);
          if (((ulong)pcVar2 & 1) != 0) {
            pcVar2 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isSnsBlack_026a56f0);
            local_99 = (byte)pcVar2;
          }
          local_9a = (local_99 ^ 1) & 1;
          local_208 = "WCOpLog";
          _objc_getClass();
          local_b9 = false;
          bVar1 = local_208 == (char *)0x0;
          local_a8 = local_208;
          if (bVar1) {
            local_208 = (char *)0x0;
          }
          else {
            _objc_alloc_init();
            local_b8 = local_208;
          }
          local_b9 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = local_208;
          if ((local_b9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          local_c8 = PTR_s_modSnsBlackList_modType_syncNow__026a56f8;
          if ((local_b0 != (char *)0x0) &&
             (pcVar5 = local_b0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b0,PTR_s_respondsToSelector__026ca818,
                        PTR_s_modSnsBlackList_modType_syncNow__026a56f8), ((ulong)pcVar5 & 1) != 0))
          {
            uVar7 = 2;
            if ((local_9a & 1) != 0) {
              uVar7 = 1;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_c8,local_50,uVar7,0);
          }
          local_d0 = PTR_s_setContact_snsBlack__026a5700;
          if ((local_80 != (char *)0x0) &&
             (pcVar5 = local_80,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_80,PTR_s_respondsToSelector__026ca818,
                        PTR_s_setContact_snsBlack__026a5700), ((ulong)pcVar5 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_80,local_d0,local_70,local_9a & 1);
          }
          pcVar5 = "NewSyncService";
          _objc_getClass();
          FUN_005a8d2c();
          _objc_retainAutoreleasedReturnValue();
          local_d8 = pcVar5;
          if ((pcVar5 != (char *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_NeedToSyncOplog_026a5708),
             ((ulong)pcVar5 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_NeedToSyncOplog_026a5708);
          }
          pcVar2 = &cf__;
          if ((local_9a & 1) == 0) {
            pcVar2 = &cf__sQNNw;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar2);
          local_60 = 1;
          _objc_storeStrong(&local_d8);
          _objc_storeStrong(&local_b0,0);
        }
      }
      else {
        local_81 = 0;
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_isSocialBlack_026a56e0);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isSocialBlack_026a56e0);
          local_81 = (byte)pcVar2;
        }
        local_82 = (local_81 ^ 1) & 1;
        pcVar5 = "CContactOPLog";
        _objc_getClass();
        local_98 = PTR_s_start_ModifySocialBlackList_modT_026a56e8;
        local_90 = pcVar5;
        if ((pcVar5 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_respondsToSelector__026ca818,
                       PTR_s_start_ModifySocialBlackList_modT_026a56e8), ((ulong)pcVar5 & 1) == 0))
        {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_NJ_Yn_NS_u);
        }
        else {
          uVar7 = 2;
          if ((local_82 & 1) != 0) {
            uVar7 = 1;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_90,local_98,local_50,uVar7);
          pcVar2 = &cf___NNJ_Y;
          if ((local_82 & 1) == 0) {
            pcVar2 = &cf__SmNJ_Y;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar2);
        }
        local_60 = 1;
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70,0);
  }
  else {
    pcVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,local_50);
    uVar8 = (ulong)pcVar2 & 0xffffffff;
    if (((ulong)pcVar2 & 1) == 0) goto LAB_005a7c10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N__n_CgP);
    local_60 = 1;
  }
  _objc_storeStrong(&local_68,0);
LAB_005a87f8:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

