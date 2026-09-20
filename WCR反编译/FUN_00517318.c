// FUN_00517318 @ 00517318

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00517318(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_230;
  undefined *local_228;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  ulong local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined **local_d8 [3];
  undefined *local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &local_100;
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_005179f8;
  local_e8 = &DAT_0257d9b8;
  local_c0 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = puVar2;
  _objc_retainBlock();
  uVar6 = local_b8;
  local_d8[0] = ppuVar3;
  FUN_0050e284(local_b8,&cf_tipsTitle);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar3[2])();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  ppuVar3 = local_d8[0];
  uVar6 = local_b8;
  FUN_0050e284(local_b8,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar3[2])();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  ppuVar3 = local_d8[0];
  uVar6 = local_b8;
  FUN_0050e284(local_b8,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar3[2])();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  ppuVar3 = local_d8[0];
  uVar6 = local_b8;
  FUN_0050e284(local_b8,&cf_message);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar3[2])();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  local_108 = 0;
  uVar6 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_m_tipsTitleLabel_026a47f0);
  if ((uVar6 & 1) != 0) {
    uVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_tipsTitleLabel_026a47f0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_108;
    local_108 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar6);
  }
  ppuVar3 = local_d8[0];
  uVar6 = local_108;
  FUN_0050e284(local_108,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar3[2])();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  _memset(auStack_150,0,0x40);
  puVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_228 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
  if (local_228 != (undefined *)0x0) {
    lVar5 = *local_140;
    local_230 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar5 != 0) {
          _objc_enumerationMutation(*local_140 - lVar5,puVar2);
        }
        uVar6 = *(ulong *)(local_148 + (long)local_230 * 8);
        local_110 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_containsString__0269d0b0,&cf_Q__Rd);
        if ((uVar6 & 1) != 0) {
          local_a9 = 1;
          bVar1 = true;
          goto LAB_005178e4;
        }
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      local_230 = (undefined *)0x0;
    } while (local_228 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_005178e4:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (!bVar1) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(local_d8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

