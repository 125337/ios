// availableQRCodeBeautifyFileNames @ 01f33a90

/* Function Stack Size: 0x10 bytes */

ID WCRefineUIBeautifyViewController::availableQRCodeBeautifyFileNames(ID param_1,SEL param_2)

{
  byte bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_180;
  undefined8 local_168;
  undefined4 local_160;
  byte local_159;
  ID local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  ID local_f0;
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
  local_e8 = param_2;
  local_e0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureQRCodeBeautifyBasePathExis_026c88e8);
  IVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_qrCodeBeautifyBasePath_026c88e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_f0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_180 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_180 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_180;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_58 = &cf_png;
  local_50 = &cf_jpg;
  local_48 = &cf_jpeg;
  local_40 = &cf_gif;
  local_38 = &cf_webp;
  local_30 = &cf_heic;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar3;
  _memset(auStack_150,0,0x40);
  puVar3 = local_f8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d8,0x10);
  if (local_1b8 != (undefined *)0x0) {
    lVar8 = *local_140;
    local_1c0 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar8 != 0) {
          _objc_enumerationMutation(*local_140 - lVar8,puVar3);
        }
        local_110 = *(undefined8 *)(local_148 + (long)local_1c0 * 8);
        IVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,local_110);
        _objc_retainAutoreleasedReturnValue();
        local_159 = 0;
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_158 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = 1;
        if (((ulong)puVar5 & 1) != 0) {
          bVar1 = local_159;
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if ((bVar1 & 1) == 0) {
          uVar6 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_168 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          puVar4 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_containsObject__0269cbb8,local_168);
          if (((ulong)puVar4 & 1) == 0) {
            local_160 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,local_110);
            local_160 = 0;
          }
          _objc_storeStrong(&local_168,0);
        }
        else {
          local_160 = 3;
        }
        _objc_storeStrong(&local_158,0);
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d8,0x10)
      ;
      local_1c0 = (undefined *)0x0;
    } while (local_1b8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_108,PTR_s_sortUsingSelector__0269e0a0,PTR_s_localizedStandardCompare__0269e098);
  puVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_copy_0269d150);
  local_160 = 1;
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar3;
}

