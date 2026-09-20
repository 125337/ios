// FUN_00eaf7c4 @ 00eaf7c4

long FUN_00eaf7c4(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_170;
  undefined *local_168;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  _memset(auStack_128,0,0x40);
  local_d0 = &cf_rawlength;
  local_c8 = &cf_hdlength;
  local_c0 = &cf_totallen;
  local_b8 = &cf_length;
  local_b0 = &cf_filesize;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0,5);
  _objc_retainAutoreleasedReturnValue();
  local_168 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_168 != (undefined *)0x0) {
    lVar5 = *local_118;
    local_170 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,puVar3);
        }
        local_e8 = *(undefined8 *)(local_120 + (long)local_170 * 8);
        lVar4 = local_e0;
        FUN_00eae82c(local_e0,local_e8);
        _objc_retainAutoreleasedReturnValue();
        local_130 = lVar4;
        FUN_00eb1660();
        bVar2 = lVar4 != 0;
        if (bVar2) {
          local_d8 = lVar4;
        }
        _objc_storeStrong(bVar2,&local_130,0);
        bVar1 = true;
        if (bVar2) goto LAB_00eaf9e0;
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_170 = (undefined *)0x0;
    } while (local_168 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_00eaf9e0:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    local_d8 = 0;
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

