// FUN_006a4a14 @ 006a4a14

void FUN_006a4a14(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_188;
  undefined *local_140;
  undefined *local_138;
  undefined *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  long local_e8;
  long *local_e0;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  _memset(auStack_f0,0,0x40);
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_138 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f0,auStack_a8,0x10);
  if (local_138 != (undefined *)0x0) {
    lVar5 = *local_e0;
    local_140 = (undefined *)0x0;
    do {
      do {
        if (*local_e0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_e0 - lVar5,puVar3);
        }
        local_b0 = *(undefined8 *)(local_e8 + (long)local_140 * 8);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_b0);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = puVar2;
        while (puVar2 = local_f8,
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0),
              puVar2 != (undefined *)0x0) {
          puVar2 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          local_100 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_removeLastObject_0269e830);
          puVar2 = local_100;
          puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          bVar1 = false;
          if (((ulong)puVar2 & 1) != 0) {
            puVar2 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_window_026cabf0);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = puVar2 != (undefined *)0x0;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_reloadData_0269e400);
          }
          FUN_006a54c8(local_100);
          puVar2 = local_f8;
          puVar4 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_188 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            local_188 = *(undefined **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_addObjectsFromArray__0269d540,local_188);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_100,0);
        }
        _objc_storeStrong(&local_f8,0);
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f0,auStack_a8,0x10);
      local_140 = (undefined *)0x0;
    } while (local_138 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

