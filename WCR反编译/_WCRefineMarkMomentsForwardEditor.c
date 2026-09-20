// _WCRefineMarkMomentsForwardEditor @ 005a5ee4

void _WCRefineMarkMomentsForwardEditor(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_1f0;
  undefined *local_1e8;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined4 local_e0;
  byte local_c9;
  ulong local_c8;
  long local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_1);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  uVar2 = local_c8;
  _objc_getAssociatedObject(local_c8,&DAT_028cb638);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_c9 = (byte)uVar6;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = 0;
  if (((ulong)puVar4 & 1) == 0) {
    bVar1 = local_c9 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((bVar1 & 1) != 0) {
    local_e0 = 1;
    goto LAB_005a6520;
  }
  if (local_c0 == 0) {
    local_e0 = 1;
    goto LAB_005a6520;
  }
  uVar2 = local_c8;
  FUN_005a65b4();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_e0 = 1;
  }
  else {
    FUN_005a6698();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    uVar6 = 0;
    if (uVar2 == 0) {
LAB_005a61a0:
      _objc_setAssociatedObject(uVar6,local_c0,&DAT_028cb650,local_e8,3);
      lVar7 = local_c0;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_c9 & 1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar7,&DAT_028cb651,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if ((local_c9 & 1) != 0) {
        _memset(auStack_138,0,0x40);
        local_b8 = &cf_dataItem;
        local_b0 = &cf_m_dataItem;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_b8,2);
        _objc_retainAutoreleasedReturnValue();
        local_1e8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1e8 != (undefined *)0x0) {
          lVar7 = *local_128;
          local_1f0 = (undefined *)0x0;
          do {
            do {
              if (*local_128 - lVar7 != 0) {
                _objc_enumerationMutation(*local_128 - lVar7,puVar3);
              }
              local_f8 = *(undefined8 *)(local_130 + (long)local_1f0 * 8);
              lVar5 = local_c0;
              FUN_0059d260(local_c0,local_f8);
              _objc_retainAutoreleasedReturnValue();
              local_140 = lVar5;
              if (lVar5 != 0) {
                puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                _objc_setAssociatedObject(lVar5,&DAT_028cb638,puVar4,1);
                (*(code *)PTR__objc_release_02578630)(puVar4);
              }
              _objc_storeStrong(&local_140,0);
              local_1f0 = local_1f0 + 1;
            } while (local_1f0 < local_1e8);
            local_1e8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8
                       ,0x10);
            local_1f0 = (undefined *)0x0;
          } while (local_1e8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_e0 = 0;
    }
    else {
      uVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isEqualToString__0269ccc8,local_f0);
      uVar6 = uVar2 & 0xffffffff;
      if ((uVar2 & 1) == 0) goto LAB_005a61a0;
      local_e0 = 1;
    }
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e8,0);
LAB_005a6520:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

