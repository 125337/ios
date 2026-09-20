// entriesFromPaths: @ 019ae4e8

/* Function Stack Size: 0x18 bytes */

ID WCRFilePathListViewController::entriesFromPaths_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_218;
  undefined *local_200;
  ulong local_1b8;
  ulong local_1b0;
  undefined *local_180;
  undefined *local_178;
  byte local_169;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  undefined *local_118;
  ulong local_110;
  SEL local_108;
  ID local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_110 = 0;
  local_108 = param_2;
  local_100 = param_1;
  _objc_storeStrong(&local_110,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_118 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar3;
  _memset(auStack_168,0,0x40);
  uVar1 = local_110;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10);
  if (local_1b0 != 0) {
    lVar8 = *local_158;
    local_1b8 = 0;
    do {
      do {
        if (*local_158 - lVar8 != 0) {
          _objc_enumerationMutation(*local_158 - lVar8,uVar1);
        }
        local_128 = *(undefined8 *)(local_160 + local_1b8 * 8);
        local_169 = 0;
        puVar2 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_128,&local_169);
        if (((ulong)puVar2 & 1) != 0) {
          puVar2 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_attributesOfItemAtPath_error__0269db08,local_128,0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_120;
          local_f8 = &cf_name;
          uVar4 = local_128;
          local_178 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = &cf_path;
          local_c8 = local_128;
          local_e8 = &cf_isDir;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_d0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                     local_169 & 1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_e0 = &cf_size;
          local_c0 = puVar5;
          if ((local_169 & 1) == 0) {
            local_200 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_fileSize_026a1640);
          }
          else {
            local_200 = (undefined *)0x0;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_numberWithUnsignedLongLong__0269d7f8,local_200);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = &cf_date;
          puVar6 = local_178;
          local_b8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_objectForKeyedSubscript__0269d098,
                     *(undefined8 *)PTR__NSFileModificationDate_02578020);
          _objc_retainAutoreleasedReturnValue();
          local_218 = puVar6;
          if (puVar6 == (undefined *)0x0) {
            local_180 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_distantPast_026a8e18);
            _objc_retainAutoreleasedReturnValue();
            local_218 = local_180;
          }
          local_b0 = local_218;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          if (puVar6 == (undefined *)0x0) {
            (*(code *)PTR__objc_release_02578630)(local_180);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          _objc_storeStrong(&local_178,0);
        }
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < local_1b0);
      local_1b0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10);
      local_1b8 = 0;
    } while (local_1b0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_120;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

