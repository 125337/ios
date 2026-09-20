// FUN_0034477c @ 0034477c

void FUN_0034477c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  double dVar5;
  undefined8 uVar6;
  uint local_264;
  cfstringStruct *local_250;
  ulong local_1f8;
  ulong local_1f0;
  cfstringStruct *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  cfstringStruct *local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  undefined4 local_bc;
  cfstringStruct *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_3);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_4);
  if ((local_b0 == 0) || (local_b8 == (cfstringStruct *)0x0)) {
    local_bc = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_center_026ca560);
    local_d8 = param_1;
    local_d0 = param_2;
    local_c8 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_center_026ca560);
    local_100 = param_2;
    local_f8 = param_1;
    local_f0 = param_2;
    _memset(auStack_148,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1f0 != 0) {
      lVar3 = *local_138;
      local_1f8 = 0;
      do {
        do {
          if (*local_138 - lVar3 != 0) {
            _objc_enumerationMutation(*local_138 - lVar3,uVar1);
          }
          pcVar4 = *(cfstringStruct **)(local_140 + local_1f8 * 8);
          local_108 = pcVar4;
          if (((pcVar4 != local_b8) &&
              ((*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isHidden_026ca768),
              ((ulong)pcVar4 & 1) == 0)) &&
             ((*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_alpha_026ca4d8),
             pcVar4 = local_108, DAT_02323d38 <= param_2)) {
            puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            dVar5 = DAT_02323d38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((ulong)pcVar4 & 1) != 0) {
              pcVar4 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              local_250 = pcVar4;
              if (pcVar4 == (cfstringStruct *)0x0) {
                local_250 = &cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_150 = local_250;
              (*(code *)PTR__objc_release_02578630)(pcVar4);
              pcVar4 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsString__0269d0b0,&cf_MB)
              ;
              local_264 = 1;
              if (((ulong)pcVar4 & 1) == 0) {
                pcVar4 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_containsString__0269d0b0,&cf_KB);
                local_264 = 1;
                if (((ulong)pcVar4 & 1) == 0) {
                  pcVar4 = local_150;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_containsString__0269d0b0,&cf_GB);
                  local_264 = 1;
                  if (((ulong)pcVar4 & 1) == 0) {
                    pcVar4 = local_150;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_150,PTR_s_hasPrefix__0269d320,&cf_qQ);
                    local_264 = (uint)pcVar4;
                  }
                }
              }
              if ((local_264 & 1) == 0) {
                local_bc = 3;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_center_026ca560);
                param_2 = ABS(dVar5 - local_c8);
                uVar6 = 0x4042000000000000;
                if (param_2 <= 36.0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_center_026ca560);
                  param_2 = ABS(param_2 - local_f0);
                  if (0.5 <= param_2) {
                    param_2 = local_f0;
                    FUN_00344750();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (param_2,uVar6,local_108,PTR_s_setCenter__026ca8c0);
                    local_bc = 0;
                  }
                  else {
                    local_bc = 3;
                  }
                }
                else {
                  local_bc = 3;
                }
              }
              _objc_storeStrong(&local_150,0);
            }
          }
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1f8 = 0;
      } while (local_1f0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

