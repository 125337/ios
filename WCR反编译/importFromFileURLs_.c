// importFromFileURLs: @ 0183713c

/* Function Stack Size: 0x18 bytes */

long_long WCRefineAvatarFrameLibraryViewController::importFromFileURLs_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  ulong local_150;
  ulong local_148;
  ID local_128;
  undefined4 local_11c;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  long_long local_c8;
  ulong local_c0;
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
  _memset(auStack_110,0,0x40);
  uVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_148 != 0) {
    lVar4 = *local_100;
    local_150 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,uVar2);
        }
        lVar5 = *(long *)(local_108 + local_150 * 8);
        local_d0 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_path_0269d4d8);
        _objc_retainAutoreleasedReturnValue();
        local_118 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        if (lVar5 == 0) {
          local_11c = 3;
        }
        else {
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_recursiveImageFilePathsUnderPath_026b6558,local_118);
          _objc_retainAutoreleasedReturnValue();
          local_128 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_count_0269cfe0);
          if (IVar3 == 0) {
            local_11c = 3;
          }
          else {
            IVar3 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_importImageFilesAtPaths__026b6560,local_128);
            local_c8 = local_c8 + IVar3;
            local_11c = 0;
          }
          _objc_storeStrong(&local_128,0);
        }
        _objc_storeStrong(&local_118,0);
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar1 = local_c8;
  local_11c = 1;
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return lVar1;
}

