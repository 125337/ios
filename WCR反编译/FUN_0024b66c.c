// FUN_0024b66c @ 0024b66c

void FUN_0024b66c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_228;
  undefined *local_220;
  undefined *local_1f8;
  undefined1 local_1ea;
  undefined1 local_1e9;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [14];
  undefined1 local_1aa;
  undefined1 local_1a9;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined8 local_188;
  ulong local_180;
  undefined4 local_174;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar1;
  _memset(auStack_160,0,0x40);
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_moveTargetOptions_026a0f38);
  _objc_retainAutoreleasedReturnValue();
  local_220 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_220 != (undefined *)0x0) {
    lVar7 = *local_150;
    local_228 = (undefined *)0x0;
    do {
      do {
        if (*local_150 - lVar7 != 0) {
          _objc_enumerationMutation(*local_150 - lVar7,puVar1);
        }
        uVar8 = *(ulong *)(local_158 + (long)local_228 * 8);
        local_120 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar8,PTR_s_objectForKeyedSubscript__0269d098,_WCREmoticonGroupIdKey);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_120;
        local_168 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_objectForKeyedSubscript__0269d098,_WCREmoticonGroupNameKey);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = local_168;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar2 = local_170;
        if ((uVar8 & 1) == 0) {
LAB_0024b8ec:
          local_174 = 3;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar6 = local_100;
          puVar3 = local_108;
          if ((uVar2 & 1) == 0) goto LAB_0024b8ec;
          local_c8 = &cf_title;
          local_b8 = local_170;
          local_c0 = &cf_handler;
          ppuVar4 = &local_1a8;
          local_1a8 = PTR___NSConcreteStackBlock_02578660;
          local_1a0 = 0xc2000000;
          local_19c = 0;
          local_198 = FUN_002552a4;
          local_190 = &DAT_02578e60;
          (*(code *)PTR__objc_retain_02578638)();
          uVar2 = local_168;
          local_188 = uVar6;
          local_1aa = 1;
          (*(code *)PTR__objc_retain_02578638)();
          local_180 = uVar2;
          local_1a9 = 1;
          _objc_retainBlock();
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_b0 = ppuVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          local_1a9 = 0;
          local_1aa = 0;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(ppuVar4);
          _objc_storeStrong(&local_180);
          _objc_storeStrong(&local_188,0);
          local_174 = 0;
        }
        _objc_storeStrong(&local_170);
        _objc_storeStrong(&local_168,0);
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10)
      ;
      local_228 = (undefined *)0x0;
    } while (local_220 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_initWeak(auStack_1b8,local_f0);
  puVar1 = local_108;
  local_e8 = &cf_title;
  local_d8 = &cf_e_R_;
  local_e0 = &cf_handler;
  ppuVar4 = &local_1e8;
  local_1e8 = PTR___NSConcreteStackBlock_02578660;
  local_1e0 = 0xc2000000;
  local_1dc = 0;
  local_1d8 = FUN_00255334;
  local_1d0 = &DAT_025797f0;
  _objc_copyWeak(auStack_1c0,auStack_1b8);
  uVar6 = local_100;
  local_1ea = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c8 = uVar6;
  local_1e9 = 1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_d0 = ppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_d8,&local_e8,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
  local_1e9 = 0;
  local_1ea = 0;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(ppuVar4);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_yeQR__);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_108;
  uVar6 = local_f0;
  local_1f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  FUN_002553c8(puVar1,puVar3);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  _objc_storeStrong(&local_1f8);
  _objc_storeStrong(&local_1c8,0);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_1b8);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

