// FUN_002410a4 @ 002410a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002410a4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_210;
  undefined *local_1d8;
  undefined *local_1d0;
  ulong local_170;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  cfstringStruct *local_100;
  int local_f8;
  byte local_f1;
  ulong local_f0;
  ulong local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  uVar3 = local_d8;
  local_f1 = 0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = true;
  if ((uVar3 & 1) != 0) {
    uVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 1;
    bVar1 = uVar3 == 0;
    local_f0 = uVar3;
  }
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  if (bVar1) {
    local_f8 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = &cf___;
    _memset(auStack_148,0,0x40);
    local_d0 = &cf_m_contact;
    local_c8 = &cf_contact;
    local_c0 = &cf_info;
    local_b8 = &cf_m_nsUserName;
    local_b0 = &cf_username;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1d0 != (undefined *)0x0) {
      lVar5 = *local_138;
      local_1d8 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar5 != 0) {
            _objc_enumerationMutation(*local_138 - lVar5,puVar2);
          }
          local_108 = *(ulong *)(local_140 + (long)local_1d8 * 8);
          uVar3 = local_d8;
          FUN_00240240(local_d8,local_108);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_108;
          local_150 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_isEqualToString__0269ccc8,&cf_info);
          bVar1 = (uVar4 & 1) == 0;
          local_210 = local_150;
          if (bVar1) {
            FUN_0023fa84();
            _objc_retainAutoreleasedReturnValue();
            local_170 = local_210;
          }
          else {
            FUN_00240420();
            _objc_retainAutoreleasedReturnValue();
            local_160 = local_210;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_158 = local_210;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_170);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_160);
          }
          uVar3 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
          if (uVar3 == 0) {
            local_f8 = 0;
            uVar6 = 0;
          }
          else {
            _objc_storeStrong(uVar3,&local_100,local_158);
            uVar6 = 2;
            local_f8 = 2;
          }
          _objc_storeStrong(uVar6,&local_158);
          _objc_storeStrong(&local_150,0);
          if (local_f8 != 0) goto LAB_0024161c;
          local_1d8 = local_1d8 + 1;
        } while (local_1d8 < local_1d0);
        local_1d0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_1d8 = (undefined *)0x0;
      } while (local_1d0 != (undefined *)0x0);
    }
    local_f8 = 0;
LAB_0024161c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_002406e8(0,local_100,&cf_invite_view,local_d8);
    _objc_storeStrong(&local_100,0);
    local_f8 = 0;
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

