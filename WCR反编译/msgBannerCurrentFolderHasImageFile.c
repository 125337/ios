// msgBannerCurrentFolderHasImageFile @ 01b957d8

/* Function Stack Size: 0x10 bytes */

bool WCRefineMessageBannerBeautifyViewController::msgBannerCurrentFolderHasImageFile
               (ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_178;
  undefined *local_170;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getCurrentMsgBannerImageFolderPa_026c0090);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = 0;
  local_e8 = 0;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c8,&local_e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_d8,local_e8);
  local_e0 = puVar2;
  if ((local_d8 == 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0), puVar2 != (undefined *)0x0
     )) {
    _memset(auStack_138,0,0x40);
    puVar2 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_170 != (undefined *)0x0) {
      lVar4 = *local_128;
      local_178 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar4 != 0) {
            _objc_enumerationMutation(*local_128 - lVar4,puVar2);
          }
          lVar5 = *(long *)(local_130 + (long)local_178 * 8);
          local_f8 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_140 = lVar3;
          (*(code *)PTR__objc_release_02578630)(lVar5);
          lVar3 = local_140;
          FUN_01b95ba0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar3);
          bVar1 = lVar5 != 0;
          if (bVar1) {
            local_a9 = 1;
          }
          local_ec = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_140,0);
          if (local_ec != 0) goto LAB_01b95af0;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_178 = (undefined *)0x0;
      } while (local_170 != (undefined *)0x0);
    }
    local_ec = 0;
LAB_01b95af0:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_ec == 0) {
      local_a9 = 0;
      local_ec = 1;
    }
  }
  else {
    local_a9 = 0;
    local_ec = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

