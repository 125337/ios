// FUN_00ee6b24 @ 00ee6b24

void FUN_00ee6b24(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_290;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  long local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  long local_1c8;
  cfstringStruct *local_1c0;
  long local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  long local_170;
  byte local_161;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  byte local_141;
  cfstringStruct *local_140;
  int local_138;
  byte local_131;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_130,param_1);
  local_131 = param_2;
  if (local_130 == (cfstringStruct *)0x0) {
    local_138 = 1;
  }
  else {
    pcVar2 = local_130;
    FUN_00eeb684(local_130,&cf_m_dicMultiSelect);
    _objc_retainAutoreleasedReturnValue();
    local_140 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_138 = 1;
    }
    else {
      pcVar2 = local_130;
      FUN_00ee649c();
      local_141 = (byte)pcVar2;
      pcVar2 = local_130;
      FUN_00ee61c0();
      _objc_retainAutoreleasedReturnValue();
      local_150 = pcVar2;
      if ((local_131 & 1) == 0) {
        _memset(auStack_208,0,0x40);
        pcVar2 = local_150;
        (*(code *)PTR__objc_retain_02578638)();
        local_2b0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        if (local_2b0 != (cfstringStruct *)0x0) {
          lVar5 = *local_1f8;
          local_2b8 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_1f8 - lVar5 != 0) {
                _objc_enumerationMutation(*local_1f8 - lVar5,pcVar2);
              }
              local_1c8 = *(long *)(local_200 + (long)local_2b8 * 8);
              pcVar3 = local_130;
              FUN_00eec2c8(local_130,&cf_isExisted_,local_1c8);
              if (((ulong)pcVar3 & 1) == 0) {
                lVar4 = local_1c8;
                FUN_00ee8104();
                _objc_retainAutoreleasedReturnValue();
                local_210 = lVar4;
                (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
                if (lVar4 == 0) {
                  local_138 = 5;
                }
                else {
                  FUN_00eec654(local_140,local_210);
                  local_138 = 0;
                }
                _objc_storeStrong(&local_210,0);
              }
              local_2b8 = (cfstringStruct *)((long)&local_2b8->field0_0x0 + 1);
            } while (local_2b8 < local_2b0);
            local_2b0 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                       auStack_128,0x10);
            local_2b8 = (cfstringStruct *)0x0;
          } while (local_2b0 != (cfstringStruct *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      else {
        pcVar2 = local_130;
        FUN_00eec410();
        pcVar3 = local_130;
        local_158 = pcVar2;
        FUN_00ee4b18();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        local_161 = 0;
        local_160 = pcVar2;
        _memset(auStack_1b0,0,0x40);
        pcVar2 = local_150;
        (*(code *)PTR__objc_retain_02578638)();
        local_250 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                   0x10);
        if (local_250 != (cfstringStruct *)0x0) {
          lVar5 = *local_1a0;
          local_258 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_1a0 - lVar5 != 0) {
                _objc_enumerationMutation(*local_1a0 - lVar5,pcVar2);
              }
              local_170 = *(long *)(local_1a8 + (long)local_258 * 8);
              pcVar3 = local_130;
              FUN_00eec2c8(local_130,&cf_isExisted_,local_170);
              if ((((ulong)pcVar3 & 1) == 0) &&
                 (pcVar3 = local_130, FUN_00eec2c8(local_130,&cf_isSelected_,local_170),
                 ((ulong)pcVar3 & 1) == 0)) {
                lVar4 = local_170;
                FUN_00ee8104();
                _objc_retainAutoreleasedReturnValue();
                local_1b8 = lVar4;
                (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
                if (lVar4 == 0) {
                  local_138 = 3;
                }
                else if (local_160 < local_158) {
                  FUN_00eec4f4((long)local_160 - (long)local_158,local_140,local_170,local_1b8);
                  local_160 = (cfstringStruct *)((long)&local_160->field0_0x0 + 1);
                  local_138 = 0;
                }
                else {
                  local_161 = 1;
                  local_138 = 2;
                }
                _objc_storeStrong(&local_1b8,0);
                if ((local_138 != 0) && (local_138 != 3)) goto LAB_00ee6e50;
              }
              local_258 = (cfstringStruct *)((long)&local_258->field0_0x0 + 1);
            } while (local_258 < local_250);
            local_250 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8
                       ,0x10);
            local_258 = (cfstringStruct *)0x0;
          } while (local_250 != (cfstringStruct *)0x0);
        }
        local_138 = 0;
LAB_00ee6e50:
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if ((local_161 & 1) != 0) {
          pcVar2 = local_130;
          FUN_00eeb684(local_130,&cf_m_countExceedTipWord);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar2;
          FUN_00eeb5a8();
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          puVar1 = PTR_WCRefineHelper_026ce000;
          pcVar2 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_290 = &cf__0RSNP;
          }
          else {
            local_290 = local_1c0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_290);
          _objc_storeStrong(&local_1c0,0);
        }
      }
      FUN_00eec780(local_130,local_140);
      if ((local_141 & 1) == 0) {
        FUN_00eecc44(local_130);
      }
      else {
        FUN_00eecba0(local_130);
      }
      FUN_00eecddc(local_130);
      _objc_storeStrong(&local_150,0);
      local_138 = 0;
    }
    _objc_storeStrong(&local_140,0);
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

