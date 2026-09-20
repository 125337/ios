// deleteOldMenuImagesInFolder:forImageType: @ 01b87510

/* Function Stack Size: 0x20 bytes */

void WCRefineMenuBeautifyViewController::deleteOldMenuImagesInFolder_forImageType_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_190;
  undefined *local_188;
  ulong local_150;
  byte local_142;
  byte local_141;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  int local_ec;
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
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = 0;
  local_e8 = 0;
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c0,&local_e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_d8,local_e8);
  local_e0 = puVar1;
  if ((local_d8 == 0) && (puVar1 != (undefined *)0x0)) {
    _memset(auStack_138,0,0x40);
    puVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_188 != (undefined *)0x0) {
      lVar6 = *local_128;
      local_190 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,puVar1);
          }
          local_f8 = *(ulong *)(local_130 + (long)local_190 * 8);
          uVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_f8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_d0;
          local_140 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar2,&local_141);
          if ((((ulong)puVar3 & 1) == 0) || ((local_141 & 1) != 0)) {
LAB_01b878e8:
            local_ec = 0;
          }
          else {
            local_142 = 0;
            uVar4 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_150 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar4 = local_150;
            FUN_01b872bc();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
            if (uVar5 == 0) {
              local_ec = 3;
            }
            else {
              uVar4 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_day);
              if ((uVar4 & 1) == 0) {
                uVar4 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_night);
                if (((uVar4 & 1) != 0) &&
                   (uVar4 = local_f8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_f8,PTR_s_containsString__0269d0b0,&cf__dark), (uVar4 & 1) != 0))
                {
                  local_142 = 1;
                }
              }
              else {
                uVar4 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f8,PTR_s_containsString__0269d0b0,&cf__dark);
                if ((uVar4 & 1) == 0) {
                  local_142 = 1;
                }
              }
              if ((local_142 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0,PTR_s_removeItemAtPath_error__0269f910,local_140,0);
              }
              local_ec = 0;
            }
            _objc_storeStrong(&local_150,0);
            if (local_ec == 0) goto LAB_01b878e8;
          }
          _objc_storeStrong(&local_140,0);
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_190 = (undefined *)0x0;
      } while (local_188 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
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

