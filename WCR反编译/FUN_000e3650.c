// FUN_000e3650 @ 000e3650

/* WARNING: Removing unreachable block (ram,0x000e3868) */
/* WARNING: Removing unreachable block (ram,0x000e3958) */
/* WARNING: Removing unreachable block (ram,0x000e397c) */
/* WARNING: Removing unreachable block (ram,0x000e39a0) */
/* WARNING: Removing unreachable block (ram,0x000e39b4) */
/* WARNING: Removing unreachable block (ram,0x000e3a1c) */
/* WARNING: Removing unreachable block (ram,0x000e3ab8) */
/* WARNING: Removing unreachable block (ram,0x000e3ad8) */
/* WARNING: Removing unreachable block (ram,0x000e3b20) */
/* WARNING: Removing unreachable block (ram,0x000e3b24) */
/* WARNING: Removing unreachable block (ram,0x000e3b2c) */
/* WARNING: Removing unreachable block (ram,0x000e3b4c) */
/* WARNING: Removing unreachable block (ram,0x000e3b44) */
/* WARNING: Removing unreachable block (ram,0x000e3b50) */

void FUN_000e3650(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  ulong local_b0 [17];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0[0] = 0;
  _objc_storeStrong(local_b0,param_1);
  uVar2 = local_b0[0];
  puVar1 = PTR__OBJC_CLASS___UISearchBar_026ce298;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UISearchBar_026ce298,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_c0 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_b0[0];
    local_c8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_searchTextField_0269e9f8);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_font_0269ea00);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setFont__026ca958,local_c8);
    }
    local_c0 = 1;
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

