// FUN_004c5a18 @ 004c5a18

void FUN_004c5a18(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_190;
  undefined *local_188;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  ulong local_e8;
  char *local_e0;
  ulong local_d8;
  uint local_cc;
  ulong local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  uVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_c0 = 0;
    local_cc = 1;
    goto LAB_004c5e7c;
  }
  uVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "MainFrameTableView";
  local_d8 = uVar3;
  _objc_getClass();
  local_e0 = pcVar4;
  if ((pcVar4 == (char *)0x0) || (local_d8 == 0)) {
LAB_004c5b9c:
    _memset(auStack_130,0,0x40);
    local_b8 = &cf_m_tableView;
    local_b0 = &cf_tableView;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != (undefined *)0x0) {
      lVar7 = *local_120;
      local_190 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar7 != 0) {
            _objc_enumerationMutation(*local_120 - lVar7,puVar2);
          }
          local_f0 = *(undefined8 *)(local_128 + (long)local_190 * 8);
          local_138 = 0;
          uVar5 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_valueForKey__0269d128,local_f0);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_138;
          local_138 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_138;
          puVar6 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
          uVar5 = local_138;
          bVar1 = (uVar3 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = uVar5;
          }
          local_cc = (uint)bVar1;
          _objc_storeStrong(&local_138,0);
          if (local_cc != 0) goto LAB_004c5e3c;
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_190 = (undefined *)0x0;
      } while (local_188 != (undefined *)0x0);
    }
    local_cc = 0;
LAB_004c5e3c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_cc == 0) {
      local_c0 = 0;
      local_cc = 1;
    }
  }
  else {
    uVar5 = local_d8;
    FUN_004c63c4(local_d8,pcVar4,6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
    local_e8 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_e8;
    bVar1 = (uVar5 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = uVar3;
    }
    local_cc = (uint)bVar1;
    _objc_storeStrong(&local_e8,0);
    if (local_cc == 0) goto LAB_004c5b9c;
  }
  _objc_storeStrong(&local_d8,0);
LAB_004c5e7c:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

