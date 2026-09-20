// FUN_0065eda8 @ 0065eda8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0065eda8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *local_270;
  undefined *local_238;
  undefined *local_1e0;
  undefined *local_1a8;
  undefined *local_160;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140 [2];
  undefined *local_130;
  long local_128;
  undefined *local_118;
  int local_110;
  byte local_109;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  undefined *local_f0 [3];
  undefined *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  long local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  puVar3 = local_b8;
  local_d0 = param_1;
  local_c8 = param_4;
  local_c0 = param_3;
  FUN_00655814();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  FUN_00655b28();
  _objc_retainAutoreleasedReturnValue();
  local_f0[0] = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_numberOfRowsInSection_026a62e8);
    uVar7 = (ulong)puVar3 & 0xffffffff;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_cellDataForRow__026a62b0);
      uVar7 = (ulong)puVar3 & 0xffffffff;
      if (((ulong)puVar3 & 1) != 0) {
        local_118 = (undefined *)0x0;
        puVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_numberOfRowsInSection_026a62e8);
        local_118 = puVar3;
        for (local_128 = 0; uVar7 = local_128 - (long)local_118, local_128 < (long)local_118;
            local_128 = local_128 + 1) {
          local_130 = (undefined *)0x0;
          puVar4 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cellDataForRow__026a62b0,local_128);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_130;
          local_130 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_130;
          FUN_00655814();
          _objc_retainAutoreleasedReturnValue();
          local_140[0] = puVar3;
          FUN_00655b28();
          _objc_retainAutoreleasedReturnValue();
          local_148 = puVar3;
          if (puVar3 != (undefined *)0x0) {
            local_a8 = &cf_msg;
            bVar1 = local_140[0] == (undefined *)0x0;
            if (bVar1) {
              local_238 = PTR__OBJC_CLASS___NSNull_026ce0e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
              _objc_retainAutoreleasedReturnValue();
              local_150 = local_238;
            }
            else {
              local_238 = local_140[0];
            }
            local_88 = local_238;
            local_a0 = &cf_section;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,local_c0);
            _objc_retainAutoreleasedReturnValue();
            local_98 = &cf_row;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_80 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,
                       local_128);
            _objc_retainAutoreleasedReturnValue();
            local_90 = &cf_node;
            local_270 = local_b8;
            bVar2 = local_b8 == (undefined *)0x0;
            local_78 = puVar4;
            if (bVar2) {
              local_270 = PTR__OBJC_CLASS___NSNull_026ce0e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
              _objc_retainAutoreleasedReturnValue();
              local_160 = local_270;
            }
            local_70 = local_270;
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_88,&local_a8,4);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,
                       puVar6,local_148);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (bVar2) {
              (*(code *)PTR__objc_release_02578630)(local_160);
            }
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_150);
            }
          }
          _objc_storeStrong(&local_148);
          _objc_storeStrong(local_140,0);
          _objc_storeStrong(&local_130,0);
        }
      }
    }
    local_110 = 0;
  }
  else {
    local_68 = &cf_msg;
    local_1a8 = local_d8;
    local_f9 = 0;
    bVar1 = local_d8 == (undefined *)0x0;
    if (bVar1) {
      local_1a8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = local_1a8;
    }
    local_48 = local_1a8;
    local_60 = &cf_section;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_f9 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_c0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = &cf_row;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = &cf_node;
    local_1e0 = local_b8;
    local_109 = 0;
    bVar1 = local_b8 == (undefined *)0x0;
    local_38 = puVar4;
    if (bVar1) {
      local_1e0 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_1e0;
    }
    local_30 = local_1e0;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_109 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,
               local_f0[0]);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    uVar7 = 1;
    local_110 = 1;
  }
  _objc_storeStrong(uVar7,local_f0);
  _objc_storeStrong(&local_d8,0);
  if (local_110 == 0) {
    local_110 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

