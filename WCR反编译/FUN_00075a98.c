// FUN_00075a98 @ 00075a98

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00075a98(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_1d8;
  undefined *local_1d0;
  byte local_139;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined4 local_c8;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar2 = DAT_028c7d70;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if (DAT_028c7d70 == (undefined *)0x0) {
    lVar1 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = lVar7;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar7 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
    if (lVar7 == 0) {
      _objc_storeStrong(&DAT_028c7d70,*(undefined8 *)PTR____NSArray0___02578280);
      puVar2 = DAT_028c7d70;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_c8 = 1;
    }
    else {
      lVar7 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_d0 = lVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_d0,0);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        _objc_storeStrong(&DAT_028c7d70,*(undefined8 *)PTR____NSArray0___02578280);
        puVar2 = DAT_028c7d70;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar2;
        local_c8 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = puVar2;
        _memset(auStack_130,0,0x40);
        puVar2 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        if (local_1d0 != (undefined *)0x0) {
          lVar7 = *local_120;
          local_1d8 = (undefined *)0x0;
          do {
            do {
              if (*local_120 - lVar7 != 0) {
                _objc_enumerationMutation(*local_120 - lVar7,puVar2);
              }
              local_f0 = *(ulong *)(local_128 + (long)local_1d8 * 8);
              lVar1 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,local_f0);
              _objc_retainAutoreleasedReturnValue();
              local_139 = 0;
              puVar3 = local_d8;
              local_138 = lVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_fileExistsAtPath_isDirectory__026ca638,lVar1,&local_139);
              if ((((ulong)puVar3 & 1) == 0) || ((local_139 & 1) != 0)) {
                local_c8 = 3;
              }
              else {
                uVar4 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_pathExtension_0269e090);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar4;
                FUN_0007627c();
                (*(code *)PTR__objc_release_02578630)(uVar4);
                puVar3 = local_e8;
                if ((uVar5 & 1) == 0) {
                  local_c8 = 3;
                }
                else {
                  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                             &cf_W);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  local_c8 = 0;
                }
              }
              _objc_storeStrong(&local_138,0);
              local_1d8 = local_1d8 + 1;
            } while (local_1d8 < local_1d0);
            local_1d0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8
                       ,0x10);
            local_1d8 = (undefined *)0x0;
          } while (local_1d0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_sortUsingSelector__0269e0a0,
                   PTR_s_localizedStandardCompare__0269e098);
        puVar3 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
        puVar2 = DAT_028c7d70;
        DAT_028c7d70 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = DAT_028c7d70;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar2;
        local_c8 = 1;
        _objc_storeStrong(&local_e8,0);
      }
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_d0,0);
    }
    _objc_storeStrong(&local_b8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

