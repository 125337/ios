// FUN_001b3638 @ 001b3638

void FUN_001b3638(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  long lVar7;
  undefined *local_290;
  undefined *local_288;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  undefined1 auStack_170 [8];
  long local_168;
  cfstringStruct *local_160;
  byte local_151;
  undefined1 auStack_150 [8];
  long local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  byte local_d6;
  byte local_d5;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = (undefined *)0x0;
  _objc_storeStrong(&local_c0,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_contactsSwipeStarEnabled_0269ff18);
  local_d5 = (byte)puVar2;
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contactsSwipeDeleteEnabled_0269ff20);
  local_b0 = local_c0;
  local_d6 = (byte)puVar2;
  if (((local_d5 & 1) == 0) && (((ulong)puVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
  }
  else {
    puVar2 = local_b8;
    FUN_001b4174();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_e8;
      local_e8 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_c0;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
       puVar2 == (undefined *)0x0)) {
      puVar2 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_dc = 1;
    }
    else {
      puVar3 = local_e8;
      FUN_001b4314();
      puVar2 = local_c0;
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar2;
        local_dc = 1;
      }
      else {
        puVar4 = local_b8;
        FUN_001b44e8();
        _objc_retainAutoreleasedReturnValue();
        local_f0 = puVar4;
        FUN_001b47e0();
        puVar3 = local_c0;
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        if (((ulong)puVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar3 + 2)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_f8 = puVar2;
          _memset(auStack_140,0,0x40);
          puVar2 = local_c0;
          (*(code *)PTR__objc_retain_02578638)();
          local_288 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          if (local_288 != (undefined *)0x0) {
            lVar6 = *local_130;
            local_290 = (undefined *)0x0;
            do {
              do {
                if (*local_130 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_130 - lVar6,puVar2);
                }
                lVar7 = *(long *)(local_138 + (long)local_290 * 8);
                local_100 = lVar7;
                FUN_001b4878();
                local_148 = lVar7;
                if ((lVar7 != 0x4e22) && (lVar7 != 0x4e23)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f8,PTR_s_addObject__0269d180,local_100);
                }
                local_290 = local_290 + 1;
              } while (local_290 < local_288);
              local_288 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,
                         auStack_a8,0x10);
              local_290 = (undefined *)0x0;
            } while (local_288 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar3 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
          puVar2 = local_c0;
          if (puVar3 == (undefined *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar2;
            local_dc = 1;
          }
          else {
            FUN_001b496c(local_b8,local_f0);
            _objc_initWeak(auStack_150,local_b8);
            if ((local_d5 & 1) != 0) {
              puVar2 = local_f0;
              FUN_001b4a3c(local_f0,PTR_s_isFavour_0269ff28);
              local_151 = (byte)puVar2;
              pcVar5 = &cf_Orange_100;
              _NSSelectorFromString();
              puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3ff0000000000000,DAT_02323e10,DAT_02323e08,
                         PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithRed_green_blue_alpha__0269cc48);
              _objc_retainAutoreleasedReturnValue();
              FUN_001b4b3c();
              _objc_retainAutoreleasedReturnValue();
              local_160 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              pcVar1 = local_160;
              pcVar5 = &cf_Sf;
              if ((local_151 & 1) == 0) {
                pcVar5 = &cf_fh;
              }
              local_190 = PTR___NSConcreteStackBlock_02578660;
              local_188 = 0xc2000000;
              local_184 = 0;
              local_180 = FUN_001b514c;
              local_178 = &DAT_0257abe0;
              _objc_copyWeak(auStack_170,auStack_150);
              lVar6 = 0x4e22;
              FUN_001b4d0c(0x4e22,pcVar5,pcVar1,0,&local_190);
              _objc_retainAutoreleasedReturnValue();
              local_168 = lVar6;
              if (lVar6 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,lVar6);
              }
              _objc_storeStrong(&local_168);
              _objc_destroyWeak(auStack_170);
              _objc_storeStrong(&local_160,0);
            }
            puVar2 = PTR_s_Red_0269ee08;
            if ((local_d6 & 1) != 0) {
              puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3ff0000000000000,DAT_02323e00,DAT_02323df8,
                         PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithRed_green_blue_alpha__0269cc48);
              _objc_retainAutoreleasedReturnValue();
              FUN_001b4b3c();
              _objc_retainAutoreleasedReturnValue();
              local_198 = puVar2;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar2 = local_198;
              local_1c8 = PTR___NSConcreteStackBlock_02578660;
              local_1c0 = 0xc2000000;
              local_1bc = 0;
              local_1b8 = FUN_001b5758;
              local_1b0 = &DAT_0257abe0;
              _objc_copyWeak(auStack_1a8,auStack_150);
              lVar6 = 0x4e23;
              FUN_001b4d0c(0x4e23,&cf_Rd,puVar2,0,&local_1c8);
              _objc_retainAutoreleasedReturnValue();
              local_1a0 = lVar6;
              if (lVar6 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,lVar6);
              }
              _objc_storeStrong(&local_1a0);
              _objc_destroyWeak(auStack_1a8);
              _objc_storeStrong(&local_198,0);
            }
            puVar2 = local_f8;
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar2;
            local_dc = 1;
            _objc_destroyWeak(auStack_150);
          }
          _objc_storeStrong(&local_f8,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar3;
          local_dc = 1;
        }
        _objc_storeStrong(&local_f0,0);
      }
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

