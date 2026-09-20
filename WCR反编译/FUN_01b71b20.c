// FUN_01b71b20 @ 01b71b20

void FUN_01b71b20(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *local_228;
  ulong local_1f0;
  ulong local_1e8;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  long local_190;
  undefined8 local_188;
  long local_180;
  undefined1 local_171;
  undefined *local_170;
  undefined *local_168;
  bool local_159;
  undefined *local_158;
  byte local_149;
  undefined *local_148;
  byte local_139;
  long local_138;
  undefined *local_130;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  cfstringStruct *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_1;
  local_c8 = param_1;
  _memset(auStack_120,0,0x40);
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_1e8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1e8 != 0) {
    lVar10 = *local_110;
    local_1f0 = 0;
    do {
      do {
        uVar4 = local_1e8;
        if (*local_110 - lVar10 != 0) {
          uVar4 = uVar3;
          _objc_enumerationMutation(*local_110 - lVar10);
        }
        local_e0 = *(long *)(local_118 + local_1f0 * 8);
        _objc_autoreleasePoolPush();
        lVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_md5);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = local_e0;
        local_128 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        local_139 = 0;
        local_149 = 0;
        local_159 = false;
        if (lVar6 == 0) {
          local_228 = *(undefined **)PTR____NSArray0___02578280;
        }
        else {
          local_c0 = &cf_url;
          lVar5 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          local_139 = 1;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_138 = lVar5;
          local_b8 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c0);
          _objc_retainAutoreleasedReturnValue();
          local_149 = 1;
          local_228 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_148 = puVar7;
          local_b0 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_b0,1);
          _objc_retainAutoreleasedReturnValue();
          local_158 = local_228;
        }
        local_159 = lVar6 != 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = local_228;
        if ((local_159 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_158);
        }
        if ((local_149 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_148);
        }
        if ((local_139 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_138);
        }
        (*(code *)PTR__objc_release_02578630)(lVar6);
        puVar7 = PTR_WCRefineEmoticonToolsHelper_026ce448;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineEmoticonToolsHelper_026ce448,
                   PTR_s_fetchEmoticonDataSyncWithMD5_can_026bfb00,local_128,local_130);
        _objc_retainAutoreleasedReturnValue();
        local_168 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_length_0269cca0);
        local_171 = 0;
        bVar2 = false;
        uVar1 = puVar7 != (undefined *)0x0;
        if ((bool)uVar1) {
          puVar7 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,
                     PTR_s_importData_fileName_intoPack_err_026abfa0,local_168,local_128,
                     *(undefined8 *)(param_1 + 0x28),0);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = puVar7 != (undefined *)0x0;
          local_171 = uVar1;
          local_170 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar7);
          uVar1 = local_171;
        }
        local_171 = uVar1;
        if (bVar2) {
          local_d8 = local_d8 + 1;
        }
        _objc_storeStrong(&local_168);
        _objc_storeStrong(&local_130,0);
        _objc_storeStrong(&local_128,0);
        _objc_autoreleasePoolPop(uVar4);
        local_1f0 = local_1f0 + 1;
      } while (local_1f0 < local_1e8);
      local_1e8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1f0 = 0;
    } while (local_1e8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar7 = PTR___dispatch_main_q_02578680;
  local_180 = *(long *)(param_1 + 0x40) + local_d8;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = PTR___NSConcreteStackBlock_02578660;
  local_1b8 = 0xc2000000;
  local_1b4 = 0;
  local_1b0 = FUN_01b7212c;
  local_1a8 = &DAT_02582b88;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  local_1a0 = uVar8;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = local_180;
  local_188 = *(undefined8 *)(param_1 + 0x48);
  local_198 = uVar9;
  _dispatch_async(puVar7,&local_1c0);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  _objc_storeStrong(&local_198);
  _objc_storeStrong(&local_1a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

