// FUN_0084415c @ 0084415c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0084415c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *local_3a0;
  cfstringStruct *local_338;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2c0;
  undefined1 *local_1f8;
  undefined1 auStack_1f0 [48];
  undefined *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined8 local_1a8;
  undefined1 local_19a;
  byte local_199;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  cfstringStruct *local_138;
  byte local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  ulong local_110;
  undefined1 local_101;
  cfstringStruct *local_100 [2];
  cfstringStruct *local_f0;
  cfstringStruct *local_e8 [2];
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_2);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_3);
  pcVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isViewLoaded_0269cde0);
  if (((ulong)pcVar3 & 1) == 0) {
    local_c8 = 1;
  }
  else {
    _objc_storeStrong(&DAT_026f4830,&cf_main_tab);
    _CFAbsoluteTimeGetCurrent();
    local_d0 = param_1;
    FUN_00821344(local_b0);
    local_d8 = (cfstringStruct *)0x0;
    pcVar9 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_valueForKey__0269d128,&cf_selectedViewController);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_d8;
    local_d8 = pcVar9;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_b0;
    FUN_008452bc();
    _objc_retainAutoreleasedReturnValue();
    local_e8[0] = pcVar3;
    if (local_d8 == (cfstringStruct *)0x0) {
      local_f0 = (cfstringStruct *)0x0;
      pcVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_valueForKey__0269d128,&cf_selectedIndex);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_f0 = pcVar9;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_f0;
      pcVar9 = local_e8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_count_0269cfe0);
      if (pcVar3 < pcVar9) {
        pcVar9 = local_e8[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_f0);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_d8;
        local_d8 = pcVar9;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    pcVar3 = local_d8;
    FUN_0084548c();
    _objc_retainAutoreleasedReturnValue();
    local_100[0] = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_c8 = 1;
    }
    else {
      uVar2 = (uint)pcVar3;
      FUN_00843f9c();
      if ((uVar2 & 1) == 0) {
        FUN_008437a4(local_100[0]);
        local_c8 = 1;
      }
      else {
        if (local_d8 != local_100[0]) {
          FUN_00821344(local_d8);
        }
        pcVar3 = local_100[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_100[0],PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar3;
        FUN_00845638();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        local_101 = SUB81(pcVar9,0);
        local_110 = (ulong)(((ulong)pcVar9 & 1) != 0);
        FUN_00810a08(local_100[0],local_b8,local_110);
        pcVar3 = local_100[0];
        _objc_getAssociatedObject(local_100[0],&DAT_028cd0e0);
        _objc_retainAutoreleasedReturnValue();
        local_118 = pcVar3;
        FUN_00815824(local_100[0],1);
        pcVar3 = local_118;
        _objc_getAssociatedObject(local_118,&DAT_028cd1df);
        _objc_retainAutoreleasedReturnValue();
        local_129 = 0;
        local_2c0 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_2c0 = local_118;
          _objc_getAssociatedObject(local_118,&DAT_028cd1d8);
          _objc_retainAutoreleasedReturnValue();
          local_128 = local_2c0;
        }
        local_129 = pcVar3 == (cfstringStruct *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = local_2c0;
        if ((local_129 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_128);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        _memset(auStack_178,0,0x40);
        pcVar3 = local_e8[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_2f0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                   0x10);
        if (local_2f0 != (cfstringStruct *)0x0) {
          lVar8 = *local_168;
          local_2f8 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_168 - lVar8 != 0) {
                _objc_enumerationMutation(*local_168 - lVar8,pcVar3);
              }
              pcVar9 = *(cfstringStruct **)(local_170 + (long)local_2f8 * 8);
              local_138 = pcVar9;
              FUN_0084548c();
              _objc_retainAutoreleasedReturnValue();
              local_180 = pcVar9;
              if ((long)pcVar9 - (long)local_100[0] == 0) {
                local_c8 = 5;
              }
              else {
                _objc_getAssociatedObject((long)pcVar9 - (long)local_100[0],pcVar9,&DAT_028cd0e0);
                _objc_retainAutoreleasedReturnValue();
                local_188 = pcVar9;
                _objc_getAssociatedObject(pcVar9,&DAT_028cd1df);
                _objc_retainAutoreleasedReturnValue();
                local_199 = 0;
                local_338 = pcVar9;
                if (pcVar9 == (cfstringStruct *)0x0) {
                  local_338 = local_188;
                  _objc_getAssociatedObject(local_188,&DAT_028cd1d8);
                  _objc_retainAutoreleasedReturnValue();
                  local_198 = local_338;
                }
                local_199 = pcVar9 == (cfstringStruct *)0x0;
                (*(code *)PTR__objc_retain_02578638)();
                local_190 = local_338;
                if ((local_199 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_198);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar9);
                if ((local_120 == (cfstringStruct *)0x0) || (local_190 != local_120)) {
                  FUN_00815824(local_180,0);
                }
                _objc_storeStrong(&local_190);
                _objc_storeStrong(&local_188,0);
                local_c8 = 0;
              }
              _objc_storeStrong(&local_180,0);
              local_2f8 = (cfstringStruct *)((long)&local_2f8->field0_0x0 + 1);
            } while (local_2f8 < local_2f0);
            local_2f0 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8
                       ,0x10);
            local_2f8 = (cfstringStruct *)0x0;
          } while (local_2f0 != (cfstringStruct *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)();
        FUN_0082d7bc();
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = local_100[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_100[0],PTR_s_traitCollection_026caba8);
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          uVar4 = local_b8;
          local_19a = pcVar9 == (cfstringStruct *)0x2;
          FUN_00821f48(local_b8,pcVar9 == (cfstringStruct *)0x2);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_100[0];
          local_1a8 = uVar4;
          FUN_00826364();
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = local_118;
          local_1b0 = pcVar3;
          _objc_getAssociatedObject(local_118,&DAT_028cd1d2);
          _objc_retainAutoreleasedReturnValue();
          local_3a0 = pcVar9;
          if (pcVar9 == (cfstringStruct *)0x0) {
            local_3a0 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1b8 = local_3a0;
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          pcVar3 = local_100[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_100[0],PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = false;
          if (local_1b0 != (cfstringStruct *)0x0) {
            if (local_1b0 == (cfstringStruct *)0x0) {
              _memset(auStack_1f0,0,0x30);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(auStack_1f0,local_1b0,PTR_s_transform_0269e178);
            }
            local_1f8 = auStack_1f0;
            _NSStringFromCGAffineTransform();
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_stringWithFormat__0269cca8,&cf_leaf___table___transform___);
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = puVar5;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_1f8);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          uVar4 = local_b8;
          pcVar9 = local_100[0];
          pcVar3 = local_1b8;
          puVar5 = local_1c0;
          uVar6 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_118;
          _objc_getAssociatedObject(local_118,&DAT_028cd0e1);
          _objc_retainAutoreleasedReturnValue();
          FUN_0081501c(local_d0,pcVar9,&cf_main_tab,uVar4,puVar5,pcVar3,uVar6);
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          _objc_storeStrong(&local_1c0);
          _objc_storeStrong(&local_1b8,0);
          _objc_storeStrong(&local_1b0,0);
          _objc_storeStrong(&local_1a8,0);
        }
        _objc_storeStrong(&local_120);
        _objc_storeStrong(&local_118,0);
        local_c8 = 0;
      }
    }
    _objc_storeStrong(local_100);
    _objc_storeStrong(local_e8,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

