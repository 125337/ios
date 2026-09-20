// reloadImagePaths @ 01a9fef8

/* Function Stack Size: 0x10 bytes */

void WCRGroupAvatarDirectoryPickerViewController::reloadImagePaths(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_198;
  undefined *local_190;
  undefined *local_168;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  SEL local_e8;
  ID local_e0;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineGroup_026ce630;
  local_e8 = param_2;
  local_e0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroup_026ce630,PTR_s_avatarDirectoryPath_026bdad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_f0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_168 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_168 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_168;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_58 = &cf_png;
  local_50 = &cf_jpg;
  local_48 = &cf_jpeg;
  local_40 = &cf_heic;
  local_38 = &cf_gif;
  local_30 = &cf_webp;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_100 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar2;
  _memset(auStack_150,0,0x40);
  puVar1 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f8,PTR_s_sortedArrayUsingSelector__0269efb8,
             PTR_s_localizedStandardCompare__0269e098);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_190 != (undefined *)0x0) {
    lVar5 = *local_140;
    local_198 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar5 != 0) {
          _objc_enumerationMutation(*local_140 - lVar5,puVar1);
        }
        puVar4 = local_100;
        uVar6 = *(undefined8 *)(local_148 + (long)local_198 * 8);
        local_110 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        puVar2 = local_108;
        if (((ulong)puVar4 & 1) != 0) {
          puVar4 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,local_110);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d8,0x10)
      ;
      local_198 = (undefined *)0x0;
    } while (local_190 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setImagePaths__026bdad8,local_108);
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

