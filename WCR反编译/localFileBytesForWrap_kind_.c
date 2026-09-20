// localFileBytesForWrap:kind: @ 00eaed40

/* Function Stack Size: 0x20 bytes */

unsigned_long_long
WCRefineAutoDownloadQuotaHelper::localFileBytesForWrap_kind_
          (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_1f8;
  undefined *local_1d0;
  undefined *local_1c8;
  ulong local_188;
  undefined8 local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  ulong local_130;
  undefined *local_128;
  undefined4 local_11c;
  unsigned_long_long local_118;
  ulong local_110;
  SEL local_108;
  ID local_100;
  ulong local_f8;
  undefined1 auStack_f0 [128];
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_110 = 0;
  local_108 = param_2;
  local_100 = param_1;
  _objc_storeStrong(&local_110,param_3);
  local_118 = param_4;
  if (local_110 == 0) {
    local_f8 = 0;
    local_11c = 1;
  }
  else {
    local_128 = (undefined *)0x0;
    if ((param_4 & 1) == 0) {
      if (((uint)param_4 >> 1 & 1) == 0) {
        if (((uint)param_4 >> 2 & 1) != 0) {
          local_70 = &cf_GetAppAttachmentPath;
          local_68 = &cf_getFilePath;
          puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_70,2);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_128;
          local_128 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
      }
      else {
        local_60 = &cf_getFormatVideoPath;
        local_58 = &cf_getTempVideoPath;
        local_50 = &cf_GetCdnDownloadPathOfVideo;
        local_48 = &cf_getRawFormatPath;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_60,4);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_128;
        local_128 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
    }
    else {
      local_40 = &cf_GetImagePath;
      local_38 = &cf_getImgPath;
      local_30 = &cf_getMiddleImgPath;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_128;
      local_128 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_f8 = 0;
    }
    else {
      local_130 = 0;
      _memset(auStack_178,0,0x40);
      puVar2 = local_128;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_f0,0x10)
      ;
      if (local_1c8 != (undefined *)0x0) {
        lVar5 = *local_168;
        local_1d0 = (undefined *)0x0;
        do {
          do {
            if (*local_168 - lVar5 != 0) {
              _objc_enumerationMutation(*local_168 - lVar5,puVar2);
            }
            uVar6 = *(undefined8 *)(local_170 + (long)local_1d0 * 8);
            local_138 = uVar6;
            _NSSelectorFromString();
            uVar3 = local_110;
            local_180 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_respondsToSelector__026ca818,uVar6);
            if ((uVar3 & 1) != 0) {
              uVar3 = local_110;
              (*(code *)PTR__objc_msgSend_02578628)(local_110,local_180);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              FUN_00eae708();
              _objc_retainAutoreleasedReturnValue();
              local_188 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar3);
              uVar3 = local_130;
              local_1f8 = local_188;
              FUN_00eaf1bc();
              if (local_1f8 <= uVar3) {
                local_1f8 = uVar3;
              }
              local_130 = local_1f8;
              _objc_storeStrong(&local_188,0);
            }
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_f0,
                     0x10);
          local_1d0 = (undefined *)0x0;
        } while (local_1c8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_f8 = local_130;
    }
    local_11c = 1;
    _objc_storeStrong(&local_128,0);
  }
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_f8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

