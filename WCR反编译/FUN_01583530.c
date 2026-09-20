// FUN_01583530 @ 01583530

void FUN_01583530(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_338;
  undefined *local_330;
  byte local_310;
  byte local_2dc;
  byte local_21c;
  undefined *local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  byte local_1b7;
  byte local_1b6;
  byte local_1b5;
  byte local_1b4;
  byte local_1b3;
  byte local_1b2;
  byte local_1b1;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  byte local_16c;
  byte local_16b;
  byte local_16a;
  byte local_169;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined4 local_144;
  undefined *local_140;
  undefined *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined1 auStack_100 [128];
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = (undefined *)0x0;
  _objc_storeStrong(&local_140,param_1);
  if (local_140 == (undefined *)0x0) {
    local_138 = (undefined *)0x0;
    local_144 = 1;
  }
  else {
    puVar2 = local_140;
    FUN_01584428();
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_138 = (undefined *)0x0;
      local_144 = 1;
    }
    else {
      FUN_01584904();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_158 = puVar3;
      (*(code *)PTR__objc_release_02578630)();
      puVar3 = local_158;
      if (local_158 == (undefined *)0x0) {
        FUN_0158020c();
        if (((ulong)puVar2 & 1) == 0) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_WCRefineProfileCardActionCatalog_026ced78;
          puVar4 = local_140;
          local_198 = puVar3;
          FUN_01564574();
          puVar3 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_198,PTR_s_chatAvatarProfileCardFunctionPag_026b0968);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_198,PTR_s_chatAvatarProfileCardFunctionPag_026b0970);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_visibleActionIDsForGroupContact__026b0978,
                     (ulong)puVar4 & 0xffffffff,puVar3);
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_1a8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_140;
          local_1b0 = puVar3;
          FUN_01584978();
          local_1b1 = (byte)puVar2;
          puVar2 = local_140;
          FUN_01584ad8();
          local_1b2 = (byte)puVar2;
          puVar2 = local_140;
          FUN_01584c04();
          local_1b3 = (byte)puVar2;
          puVar2 = local_140;
          FUN_01584ccc();
          local_1b4 = (byte)puVar2;
          puVar2 = PTR_WCRefineAnonymousAtHelper_026ce0e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineAnonymousAtHelper_026ce0e0,PTR_s_isFeatureAllowed_026ab0f0);
          local_1b5 = (byte)puVar2;
          local_2dc = 0;
          if ((((ulong)puVar2 & 1) != 0) && (local_2dc = 0, (local_1b4 & 1) != 0)) {
            puVar2 = local_140;
            FUN_01564574();
            local_2dc = (byte)puVar2 ^ 1;
          }
          local_1b6 = local_2dc & 1;
          local_310 = 0;
          if ((local_1b5 & 1) != 0) {
            puVar2 = local_140;
            FUN_01564574();
            local_310 = 0;
            if (((ulong)puVar2 & 1) != 0) {
              local_310 = (byte)puVar2;
              FUN_0156c6b8();
            }
          }
          local_1b7 = local_310 & 1;
          _memset(auStack_200,0,0x40);
          puVar2 = local_1a0;
          (*(code *)PTR__objc_retain_02578638)();
          local_330 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_100,
                     0x10);
          if (local_330 != (undefined *)0x0) {
            lVar6 = *local_1f0;
            local_338 = (undefined *)0x0;
            do {
              do {
                if (*local_1f0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_1f0 - lVar6,puVar2);
                }
                uVar7 = *(ulong *)(local_1f8 + (long)local_338 * 8);
                local_1c0 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMessage
                          );
                if (((((((uVar7 & 1) == 0) || ((local_1b1 & 1) != 0)) &&
                      ((uVar7 = local_1c0,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_1c0,PTR_s_isEqualToString__0269ccc8,
                                  _WCRefineProfileCardActionIDVoiceCall), (uVar7 & 1) == 0 ||
                       ((local_1b2 & 1) != 0)))) &&
                     ((uVar7 = local_1c0,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1c0,PTR_s_isEqualToString__0269ccc8,
                                 _WCRefineProfileCardActionIDVideoCall), (uVar7 & 1) == 0 ||
                      ((local_1b3 & 1) != 0)))) &&
                    ((uVar7 = local_1c0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_1c0,PTR_s_isEqualToString__0269ccc8,
                                _WCRefineProfileCardActionIDAt), (uVar7 & 1) == 0 ||
                     ((local_1b4 & 1) != 0)))) &&
                   ((((uVar7 = local_1c0,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1c0,PTR_s_isEqualToString__0269ccc8,
                                 _WCRefineProfileCardActionIDAnonymousAt), (uVar7 & 1) == 0 ||
                      ((local_1b6 & 1) != 0)) &&
                     ((uVar7 = local_1c0,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1c0,PTR_s_isEqualToString__0269ccc8,
                                 _WCRefineProfileCardActionIDAnonymousAtAll), (uVar7 & 1) == 0 ||
                      ((local_1b7 & 1) != 0)))) &&
                    (((uVar7 = local_1c0,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1c0,PTR_s_isEqualToString__0269ccc8,
                                 _WCRefineProfileCardActionIDMessageBlock), (uVar7 & 1) == 0 &&
                      (uVar7 = local_1c0,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1c0,PTR_s_isEqualToString__0269ccc8,
                                 _WCRefineProfileCardActionIDChangeWallpaper), (uVar7 & 1) == 0)) ||
                     (puVar3 = local_140, FUN_01565620(), ((ulong)puVar3 & 1) == 0)))))) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1a8,PTR_s_addObject__0269d180,local_1c0);
                  uVar7 = local_1c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c0,PTR_s_isEqualToString__0269ccc8,
                             _WCRefineProfileCardActionIDMessage);
                  if ((uVar7 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1b0,PTR_s_addObject__0269d180,local_1c0);
                  }
                }
                local_338 = local_338 + 1;
              } while (local_338 < local_330);
              local_330 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                         auStack_100,0x10);
              local_338 = (undefined *)0x0;
            } while (local_330 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_130 = &cf_visible;
          puVar3 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_copy_0269d150);
          local_128 = &cf_primary;
          puVar4 = local_1b0;
          local_118 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_copy_0269d150);
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_120 = &cf_showsMessage;
          puVar5 = local_1a8;
          local_110 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_containsObject__0269cbb8,_WCRefineProfileCardActionIDMessage);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithBool__0269ce60,puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_108 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_118,&local_130,3);
          _objc_retainAutoreleasedReturnValue();
          local_208 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)();
          FUN_01584904();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar2 = local_208;
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = puVar2;
          local_144 = 1;
          _objc_storeStrong(&local_208);
          _objc_storeStrong(&local_1b0,0);
          _objc_storeStrong(&local_1a8,0);
          _objc_storeStrong(&local_1a0,0);
          _objc_storeStrong(&local_198,0);
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_160 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_140;
          local_168 = puVar3;
          FUN_01584978();
          local_169 = (byte)puVar2;
          puVar2 = local_140;
          FUN_01584ad8();
          local_16a = (byte)puVar2;
          puVar2 = local_140;
          FUN_01584c04();
          local_16b = (byte)puVar2;
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_179 = 0;
          local_21c = 0;
          if ((((ulong)puVar3 & 1) != 0) && (local_21c = 0, local_140 != (undefined *)0x0)) {
            puVar3 = local_140;
            FUN_01564574();
            local_21c = 0;
            if (((ulong)puVar3 & 1) == 0) {
              puVar3 = local_140;
              FUN_01565620();
              local_21c = 0;
              if (((ulong)puVar3 & 1) == 0) {
                puVar4 = local_140;
                FUN_0157804c();
                puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
                local_21c = 0;
                if (((ulong)puVar4 & 1) == 0) {
                  puVar4 = local_140;
                  FUN_01528d34();
                  _objc_retainAutoreleasedReturnValue();
                  local_179 = 1;
                  local_178 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_shouldConcealUsername__0269fef8);
                  local_21c = (byte)puVar3 ^ 1;
                }
              }
            }
          }
          if ((local_179 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_178);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_16c = local_21c & 1;
          if ((local_16a & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_addObject__0269d180,_WCRefineProfileCardActionIDVoiceCall);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_addObject__0269d180,_WCRefineProfileCardActionIDVoiceCall);
          }
          if ((local_16b & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_addObject__0269d180,_WCRefineProfileCardActionIDVideoCall);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_addObject__0269d180,_WCRefineProfileCardActionIDVideoCall);
          }
          if (DAT_028e3918 != 0) {
            local_50 = &cf___wcr_moments_permissions__;
            local_48 = &cf___wcr_moments_forward__;
            local_40 = &cf___wcr_moments_delete__;
            local_38 = &cf___wcr_moments_fake_engagement__;
            local_30 = &cf___wcr_moments_complain__;
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_50,5);
            _objc_retainAutoreleasedReturnValue();
            local_188 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_addObjectsFromArray__0269d540,puVar2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_addObjectsFromArray__0269d540,local_188);
            _objc_storeStrong(&local_188,0);
          }
          if (((local_169 & 1) != 0) || ((local_16c & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_addObject__0269d180,_WCRefineProfileCardActionIDMessage);
          }
          local_80 = &cf_visible;
          puVar2 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_copy_0269d150);
          local_78 = &cf_primary;
          puVar3 = local_168;
          local_68 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_copy_0269d150);
          local_70 = &cf_showsMessage;
          bVar1 = 1;
          if ((local_169 & 1) == 0) {
            bVar1 = local_16c;
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_60 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,bVar1 & 1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_58 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_68,&local_80,3);
          _objc_retainAutoreleasedReturnValue();
          local_190 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)();
          FUN_01584904();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_190;
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = puVar2;
          local_144 = 1;
          _objc_storeStrong(&local_190);
          _objc_storeStrong(&local_168,0);
          _objc_storeStrong(&local_160,0);
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_138 = puVar3;
        local_144 = 1;
      }
      _objc_storeStrong(&local_158,0);
    }
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_138);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

