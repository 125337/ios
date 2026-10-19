// _WCMYBIBNormalWindow @0x831e0

void _WCMYBIBNormalWindow(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  ulong local_150;
  ulong local_148;
  undefined8 local_118;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_keyWindow(uVar2,local_118);
  local_b8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  dVar4 = (double)_objc_msgSend_windowLevel(local_b8,local_118);
  if (dVar4 != *(double *)PTR__UIWindowLevelNormal_00110148) {
    _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_118);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_windows(uVar2,local_118);
    local_c0 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _memset(auStack_108,0,0x40);
    uVar2 = (*(code *)PTR__objc_retain_00110460)(local_c0);
    local_148 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar2,local_118,auStack_108,auStack_a8,0x10);
    if (local_148 != 0) {
      lVar3 = *local_f8;
      local_150 = 0;
      do {
        do {
          if (*local_f8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar3,uVar2);
          }
          local_c8 = *(undefined8 *)(local_100 + local_150 * 8);
          dVar4 = (double)_objc_msgSend_windowLevel(local_c8,local_118);
          if (dVar4 == *(double *)PTR__UIWindowLevelNormal_00110148) {
            local_b0 = (*(code *)PTR__objc_retain_00110460)(local_c8);
            bVar1 = true;
            goto LAB_000833f4;
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar2,local_118,auStack_108,auStack_a8,0x10);
        local_150 = 0;
      } while (local_148 != 0);
    }
    bVar1 = false;
LAB_000833f4:
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if (!bVar1) {
      bVar1 = false;
    }
    _objc_storeStrong(&local_c0,0);
    if (bVar1) goto LAB_00083458;
  }
  local_b0 = (*(code *)PTR__objc_retain_00110460)(local_b8);
LAB_00083458:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

