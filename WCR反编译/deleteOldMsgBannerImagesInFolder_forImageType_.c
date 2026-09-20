// deleteOldMsgBannerImagesInFolder:forImageType: @ 01b99ea8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineMessageBannerBeautifyViewController::deleteOldMsgBannerImagesInFolder_forImageType_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_1a0;
  undefined *local_198;
  ulong local_150;
  byte local_141;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  ulong local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = 0;
  local_e8 = 0;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c0,&local_e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_d8,local_e8);
  local_e0 = puVar2;
  if ((local_d8 == 0) && (puVar2 != (undefined *)0x0)) {
    _memset(auStack_138,0,0x40);
    puVar2 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_198 != (undefined *)0x0) {
      lVar7 = *local_128;
      local_1a0 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar7 != 0) {
            _objc_enumerationMutation(*local_128 - lVar7,puVar2);
          }
          local_f8 = *(ulong *)(local_130 + (long)local_1a0 * 8);
          uVar3 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_f8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_d0;
          local_140 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar3,&local_141);
          if ((((ulong)puVar4 & 1) == 0) || ((local_141 & 1) != 0)) {
            local_ec = 3;
          }
          else {
            uVar5 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_150 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar5 = local_150;
            FUN_01b95ba0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if (uVar6 == 0) {
              local_ec = 3;
            }
            else {
              bVar1 = false;
              uVar5 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_day);
              if ((uVar5 & 1) == 0) {
                uVar5 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_night);
                if ((uVar5 & 1) != 0) {
                  uVar5 = local_f8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f8,PTR_s_containsString__0269d0b0,&cf__dark);
                  bVar1 = (uVar5 & 1) != 0;
                }
              }
              else {
                uVar5 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f8,PTR_s_containsString__0269d0b0,&cf__dark);
                bVar1 = (uVar5 & 1) == 0;
              }
              if (bVar1) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0,PTR_s_removeItemAtPath_error__0269f910,local_140,0);
              }
              local_ec = 0;
            }
            _objc_storeStrong(&local_150,0);
          }
          _objc_storeStrong(&local_140,0);
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1a0 = (undefined *)0x0;
      } while (local_198 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_ec = 0;
  }
  else {
    local_ec = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

