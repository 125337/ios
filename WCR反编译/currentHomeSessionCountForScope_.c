// currentHomeSessionCountForScope: @ 01a975e0

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineGroupDataProvider::currentHomeSessionCountForScope_
          (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  unsigned_long_long uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ID IVar10;
  ID IVar11;
  long lVar12;
  ulong uVar13;
  ID local_208;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  unsigned_long_long local_100;
  unsigned_long_long local_f8;
  SEL local_f0;
  ID local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  local_f8 = param_3;
  local_f0 = param_2;
  local_e8 = param_1;
  _memset(auStack_148,0,0x40);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_c8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_c0 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0x20);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_b8 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0x40);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_b0 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e0,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_1c8 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
  if (local_1c8 != (undefined *)0x0) {
    lVar12 = *local_138;
    local_1d0 = (undefined *)0x0;
    do {
      do {
        if (*local_138 - lVar12 != 0) {
          _objc_enumerationMutation(*local_138 - lVar12,puVar9);
        }
        uVar1 = local_f8;
        uVar13 = *(ulong *)(local_140 + (long)local_1d0 * 8);
        local_108 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_unsignedIntegerValue_026cabb8);
        if ((uVar1 & uVar13) != 0) {
          IVar10 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_currentHomeSessionBuckets_026bda60);
          _objc_retainAutoreleasedReturnValue();
          IVar11 = IVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_208 = IVar11;
          if (IVar11 == 0) {
            local_208 = *(ID *)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
          local_100 = local_100 + local_208;
          (*(code *)PTR__objc_release_02578630)(IVar11);
          (*(code *)PTR__objc_release_02578630)(IVar10);
        }
        local_1d0 = local_1d0 + 1;
      } while (local_1d0 < local_1c8);
      local_1c8 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10)
      ;
      local_1d0 = (undefined *)0x0;
    } while (local_1c8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar9);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_100;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

