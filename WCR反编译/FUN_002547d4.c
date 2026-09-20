// FUN_002547d4 @ 002547d4

void FUN_002547d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_228;
  undefined *local_220;
  cfstringStruct *local_1f0;
  undefined1 local_1e1;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b2;
  undefined1 local_1b1;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  undefined8 local_190;
  ulong local_188;
  undefined4 local_17c;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  ulong local_128;
  undefined *local_120 [3];
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined **local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  ulong local_b8;
  undefined **local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  local_f8 = param_2;
  local_f0 = param_1;
  _objc_storeStrong(&local_100,param_3);
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_groupIdForMd5__026a10c8,local_100);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_108 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_120[0] = puVar3;
  _memset(auStack_168,0,0x40);
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_moveTargetOptions_026a0f38);
  _objc_retainAutoreleasedReturnValue();
  local_220 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_220 != (undefined *)0x0) {
    lVar8 = *local_158;
    local_228 = (undefined *)0x0;
    do {
      do {
        if (*local_158 - lVar8 != 0) {
          _objc_enumerationMutation(*local_158 - lVar8,puVar2);
        }
        uVar9 = *(ulong *)(local_160 + (long)local_228 * 8);
        local_128 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,PTR_s_objectForKeyedSubscript__0269d098,_WCREmoticonGroupIdKey);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_128;
        local_170 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_objectForKeyedSubscript__0269d098,_WCREmoticonGroupNameKey);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = local_170;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_178 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar4 = local_178;
        if ((uVar9 & 1) == 0) {
LAB_00254a8c:
          local_17c = 3;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar4 & 1) == 0) goto LAB_00254a8c;
          puVar3 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
          if ((puVar3 == (undefined *)0x0) ||
             (uVar4 = local_170,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_170,PTR_s_isEqualToString__0269ccc8,local_108), (uVar4 & 1) == 0)) {
            puVar3 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
            if ((puVar3 == (undefined *)0x0) &&
               (uVar4 = local_170,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_170,PTR_s_isEqualToString__0269ccc8,_WCREmoticonGroupUngroupedId),
               (uVar4 & 1) != 0)) {
              local_17c = 3;
            }
            else {
              uVar7 = local_100;
              puVar3 = local_120[0];
              local_c8 = &cf_title;
              local_b8 = local_178;
              local_c0 = &cf_handler;
              ppuVar5 = &local_1b0;
              local_1b0 = PTR___NSConcreteStackBlock_02578660;
              local_1a8 = 0xc2000000;
              local_1a4 = 0;
              local_1a0 = FUN_0025d304;
              local_198 = &DAT_02578e60;
              (*(code *)PTR__objc_retain_02578638)();
              uVar4 = local_170;
              local_190 = uVar7;
              local_1b2 = 1;
              (*(code *)PTR__objc_retain_02578638)();
              local_188 = uVar4;
              local_1b1 = 1;
              _objc_retainBlock();
              puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_b0 = ppuVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              local_1b1 = 0;
              local_1b2 = 0;
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_release_02578630)(ppuVar5);
              _objc_storeStrong(&local_188);
              _objc_storeStrong(&local_190,0);
              local_17c = 0;
            }
          }
          else {
            local_17c = 3;
          }
        }
        _objc_storeStrong(&local_178);
        _objc_storeStrong(&local_170,0);
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10)
      ;
      local_228 = (undefined *)0x0;
    } while (local_220 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar7 = local_100;
  puVar2 = local_120[0];
  local_e8 = &cf_title;
  local_d8 = &cf_e_R_;
  local_e0 = &cf_handler;
  ppuVar5 = &local_1e0;
  local_1e0 = PTR___NSConcreteStackBlock_02578660;
  local_1d8 = 0xc2000000;
  local_1d4 = 0;
  local_1d0 = FUN_0025d450;
  local_1c8 = &DAT_02578c20;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c0 = uVar7;
  local_1e1 = 1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_d0 = ppuVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_d8,&local_e8,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
  local_1e1 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(ppuVar5);
  puVar2 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
  pcVar1 = &cf_yRR_;
  if (puVar2 == (undefined *)0x0) {
    pcVar1 = &cf_mRR_;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_120[0];
  uVar7 = local_f0;
  local_1f0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  FUN_002553c8(pcVar1,puVar2);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  _objc_storeStrong(&local_1f0);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(local_120,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

