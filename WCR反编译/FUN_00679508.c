// FUN_00679508 @ 00679508

byte FUN_00679508(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_00678300();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    FUN_00677084();
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    if (DAT_028cbcb0 == (undefined1 *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = DAT_028cbcb0;
      DAT_028cbcb0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = DAT_028cbcb0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbcb0,PTR_s_containsObject__0269cbb8,local_28);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbcb0,PTR_s_addObject__0269d180,local_28);
      puVar3 = DAT_028cbcb0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbcb0,PTR_s_count_0269cfe0);
      if (section_00000068.segname + 8 < puVar3) {
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbcb0,PTR_s_removeAllObjects_0269d508);
      }
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

