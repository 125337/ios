// preferredWidthForTitles:spacing: @ 0177dc60

/* Function Stack Size: 0x20 bytes */

double WCRefinePluginGroupPillControl::preferredWidthForTitles_spacing_
                 (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double local_278;
  double local_270;
  ulong local_260;
  double local_250;
  double local_248;
  double local_240;
  ulong local_208;
  ulong local_200;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  double local_e0;
  double local_d8;
  ulong local_d0;
  SEL local_c8;
  ID local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_2;
  local_c0 = param_1;
  _objc_storeStrong(&local_d0,param_3);
  local_e0 = 0.0;
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_d8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar2;
  _memset(auStack_130,0,0x40);
  uVar1 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_200 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_200 != 0) {
    lVar3 = *local_120;
    local_208 = 0;
    do {
      do {
        if (*local_120 - lVar3 != 0) {
          _objc_enumerationMutation(*local_120 - lVar3,uVar1);
        }
        dVar6 = local_e0;
        uVar4 = *(undefined8 *)(local_128 + local_208 * 8);
        local_b8 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
        local_b0 = local_e8;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        dVar5 = local_e0;
        local_f0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_sizeWithAttributes__026cab08);
        local_240 = (double)(long)dVar5;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_240 <= dVar6) {
          local_240 = dVar6;
        }
        local_e0 = local_240;
        local_208 = local_208 + 1;
      } while (local_208 < local_200);
      local_200 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_208 = 0;
    } while (local_200 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (0.0 <= local_d8) {
    local_248 = local_d8;
  }
  else {
    local_248 = 0.0;
  }
  local_270 = local_248 * 2.0;
  local_250 = local_e0 + 32.0;
  if (local_250 <= 72.0) {
    local_250 = 72.0;
  }
  local_260 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (local_260 == 0) {
    local_260 = 1;
  }
  dVar6 = (double)NEON_ucvtf(local_260);
  if (local_270 < 4.0) {
    local_270 = 4.0;
  }
  local_278 = local_270 + dVar6 * local_250;
  if (local_278 <= 76.0) {
    local_278 = 76.0;
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_278;
}

