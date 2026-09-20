// firstImagePathInDirectoryForPreview: @ 018187e8

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarCornerBeautifyViewController::firstImagePathInDirectoryForPreview_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  int local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c8,0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_b0 = 0;
      local_cc = 1;
    }
    else {
      puVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_sortedArrayUsingSelector__0269efb8,
                 PTR_s_localizedStandardCompare__0269e098);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar2;
      _memset(auStack_130,0,0x40);
      puVar2 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10)
      ;
      if (local_150 != (undefined *)0x0) {
        lVar3 = *local_120;
        local_158 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar3 != 0) {
              _objc_enumerationMutation(*local_120 - lVar3,puVar2);
            }
            IVar1 = local_b8;
            uVar4 = *(undefined8 *)(local_128 + (long)local_158 * 8);
            local_f0 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar1,PTR_s_isSupportedAvatarFrameImageExt__026b60e8);
            (*(code *)PTR__objc_release_02578630)(uVar4);
            if ((IVar1 & 1) != 0) {
              IVar1 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_f0);
              _objc_retainAutoreleasedReturnValue();
              local_cc = 1;
              local_b0 = IVar1;
              goto LAB_01818ac8;
            }
            local_158 = local_158 + 1;
          } while (local_158 < local_150);
          local_150 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_158 = (undefined *)0x0;
        } while (local_150 != (undefined *)0x0);
      }
      local_cc = 0;
LAB_01818ac8:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_cc == 0) {
        local_b0 = 0;
        local_cc = 1;
      }
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

