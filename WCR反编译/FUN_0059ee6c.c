// FUN_0059ee6c @ 0059ee6c

void FUN_0059ee6c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  dispatch_time_t dVar7;
  long lVar8;
  double dVar9;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  long local_138;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  ulong local_e0;
  undefined4 local_d8;
  ulong local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_1);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  uVar3 = local_c8;
  if (local_c0 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      local_e0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (uVar4 == 0) {
        local_d8 = 1;
      }
      else {
        FUN_005bca78(local_c0,local_e0);
        _memset(auStack_128,0,0x40);
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fc3333333333333,PTR__OBJC_CLASS___NSNumber_026ce038,
                   PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        dVar9 = 0.5;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_b0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_b8,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_1f8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        if (local_1f8 != (undefined *)0x0) {
          lVar8 = *local_118;
          local_200 = (undefined *)0x0;
          do {
            do {
              if (*local_118 - lVar8 != 0) {
                _objc_enumerationMutation(*local_118 - lVar8,puVar6);
              }
              local_e8 = *(undefined8 *)(local_120 + (long)local_200 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_doubleValue_026ca608);
              dVar9 = dVar9 * 1000000000.0;
              dVar7 = _dispatch_time(0,(long)dVar9);
              puVar2 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              lVar1 = local_c0;
              local_158 = PTR___NSConcreteStackBlock_02578660;
              local_150 = 0xc2000000;
              local_14c = 0;
              local_148 = FUN_005bce8c;
              local_140 = &DAT_02578e60;
              (*(code *)PTR__objc_retain_02578638)();
              uVar3 = local_e0;
              local_138 = lVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = uVar3;
              _dispatch_after(dVar7,puVar2,&local_158);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              _objc_storeStrong(&local_130);
              _objc_storeStrong(&local_138,0);
              local_200 = local_200 + 1;
            } while (local_200 < local_1f8);
            local_1f8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8
                       ,0x10);
            local_200 = (undefined *)0x0;
          } while (local_1f8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_d8 = 0;
      }
      _objc_storeStrong(&local_e0,0);
      goto LAB_0059f3dc;
    }
  }
  local_d8 = 1;
LAB_0059f3dc:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

