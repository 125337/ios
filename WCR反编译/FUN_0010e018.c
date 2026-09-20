// FUN_0010e018 @ 0010e018

void FUN_0010e018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong local_328;
  ulong local_320;
  ulong local_200;
  uint local_1e8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  undefined8 local_170;
  long local_168;
  ulong local_160;
  ulong local_158;
  undefined *local_150;
  ulong local_148;
  ulong local_140;
  undefined *local_138;
  ulong local_130;
  ulong local_128;
  undefined1 local_119;
  ulong local_118;
  ulong local_110;
  byte local_101;
  ulong local_100;
  byte local_f1;
  ulong local_f0;
  ulong local_e8;
  byte local_dd;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_3);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_4);
  local_c8 = param_1;
  if ((DAT_028c85a8 & 1) == 0) {
    local_cc = 1;
    goto LAB_0010ebbc;
  }
  uVar1 = local_b0;
  FUN_0010dc1c();
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_cc = 1;
    goto LAB_0010ebbc;
  }
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_containsString__0269d0b0,&cf_sysmsgtemplate);
  local_1e8 = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_containsString__0269d0b0,&cf_<link);
    local_1e8 = (uint)uVar1;
  }
  local_dd = (byte)local_1e8 & 1;
  local_f1 = 0;
  local_101 = 0;
  local_200 = local_b8;
  if ((local_1e8 & 1) == 0) {
    FUN_0010ee50();
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = local_200;
  }
  else {
    FUN_0010f418();
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 1;
    local_f0 = local_200;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_200;
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  uVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    uVar2 = local_b8;
    FUN_0010f6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_e8;
    local_e8 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_b8;
  FUN_0010fc58(local_b8,local_e8);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_e8;
    FUN_0010eda8();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_e8;
      FUN_001106c8();
      if ((uVar1 & 1) == 0) {
        uVar1 = local_e8;
        FUN_0010ec58();
        if ((uVar1 & 1) != 0) {
          uVar1 = local_b8;
          FUN_00110854(local_b8,&cf_names);
          _objc_retainAutoreleasedReturnValue();
          local_110 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
          if (uVar1 == 0) {
            uVar1 = local_e8;
            FUN_001110c0();
            _objc_retainAutoreleasedReturnValue();
            local_118 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
            if ((uVar1 != 0) &&
               (uVar1 = local_118,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_118,PTR_s_isEqualToString__0269ccc8,&cf_names), (uVar1 & 1) == 0)) {
              uVar2 = local_b8;
              FUN_00110854(local_b8,local_118);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = local_110;
              local_110 = uVar2;
              (*(code *)PTR__objc_release_02578630)(uVar1);
            }
            _objc_storeStrong(&local_118,0);
          }
          uVar1 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0);
          if (uVar1 == 0) {
            uVar1 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_containsString__0269d0b0,&cf__);
            local_119 = (undefined1)uVar1;
            if ((uVar1 & 1) == 0) {
              uVar2 = local_b8;
              FUN_00110854(local_b8,&cf_username);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = local_110;
              local_110 = uVar2;
              (*(code *)PTR__objc_release_02578630)(uVar1);
            }
          }
          uVar1 = local_b0;
          FUN_0011138c(local_b0,local_b8,local_e8,local_c0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_110;
          local_128 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0);
          if (uVar2 == 0) {
            uVar1 = local_e8;
            FUN_00112698(0,local_e8,&cf__,&cf_ReQ);
            _objc_retainAutoreleasedReturnValue();
            local_130 = uVar1;
            FUN_00112b1c();
            if ((uVar1 & 1) != 0) {
              _objc_storeStrong(&local_130,&cf___);
            }
            uVar1 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            if (((uVar1 == 0) &&
                (uVar1 = local_e8, puVar4 = PTR_s_rangeOfString__0269d838,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_rangeOfString__0269d838,&cf_ReQ), local_140 = uVar1,
                local_138 = puVar4, uVar1 != 0x7fffffffffffffff)) && (uVar1 != 0)) {
              uVar2 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_substringToIndex__0269d6c0,uVar1)
              ;
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR_s_rangeOfString_options__0269d118;
              local_148 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_rangeOfString_options__0269d118,&cf_format_s_,4);
              local_158 = uVar2;
              local_150 = puVar4;
              if (uVar2 != 0x7fffffffffffffff) {
                uVar3 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_148,PTR_s_substringToIndex__0269d6c0,uVar2);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar3;
                FUN_0010ee50();
                _objc_retainAutoreleasedReturnValue();
                uVar1 = local_130;
                local_130 = uVar2;
                (*(code *)PTR__objc_release_02578630)(uVar1);
                (*(code *)PTR__objc_release_02578630)(uVar3);
              }
              _objc_storeStrong(&local_148,0);
            }
            uVar1 = local_130;
            FUN_00112b1c();
            if ((uVar1 & 1) != 0) {
              _objc_storeStrong(&local_130,&cf___);
            }
            uVar1 = local_130;
            FUN_00112c78();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_b0;
            local_160 = uVar1;
            FUN_00113420();
            uVar1 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0);
            local_168 = uVar2 + uVar1;
            _memset(auStack_1b0,0,0x40);
            uVar1 = local_160;
            (*(code *)PTR__objc_retain_02578638)();
            local_320 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                       0x10);
            if (local_320 != 0) {
              lVar5 = *local_1a0;
              local_328 = 0;
              do {
                do {
                  if (*local_1a0 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_1a0 - lVar5,uVar1);
                  }
                  local_170 = *(undefined8 *)(local_1a8 + local_328 * 8);
                  FUN_001134f0(local_c8,local_b0,&cf___,local_170,local_128,local_168);
                  local_328 = local_328 + 1;
                } while (local_328 < local_320);
                local_320 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,
                           auStack_a8,0x10);
                local_328 = 0;
              } while (local_320 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar1);
            _objc_storeStrong(&local_160);
            _objc_storeStrong(&local_130,0);
            local_cc = 0;
          }
          else {
            FUN_00112074(local_c8,local_b0,local_110,1,&cf___,local_128);
            local_cc = 1;
          }
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_110,0);
          if (local_cc != 0) goto LAB_0010ebac;
        }
        local_cc = 0;
      }
      else {
        local_cc = 1;
      }
    }
    else {
      local_cc = 1;
    }
  }
  else {
    local_cc = 1;
  }
LAB_0010ebac:
  _objc_storeStrong(&local_e8,0);
LAB_0010ebbc:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

