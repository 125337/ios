// localVideoPath: @0x1cb8c

/* Function Stack Size: 0x18 bytes */

ID WCMVideoController::localVideoPath_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  long lVar9;
  ulong local_178;
  ulong local_170;
  undefined8 local_168;
  undefined8 local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  _memset(auStack_110,0,0x40);
  uVar3 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010f938);
  local_170 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_168,auStack_110,auStack_a8,0x10);
  if (local_170 != 0) {
    lVar9 = *local_100;
    local_178 = 0;
    do {
      do {
        if (*local_100 - lVar9 != 0) {
          _objc_enumerationMutation(*local_100 - lVar9,uVar3);
        }
        local_d0 = *(undefined8 *)(local_108 + local_178 * 8);
        _Call(local_c8,local_d0,PTR____NSArray0__struct_00110718);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _Text();
        local_118 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)(uVar4);
        lVar5 = _objc_msgSend_length(local_118,local_168);
        bVar1 = false;
        if (lVar5 != 0) {
          _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_168);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_attributesOfItemAtPath_error_(uVar4,local_168,local_118,0);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_objectForKeyedSubscript_
                    (uVar6,local_168,*(undefined8 *)PTR__NSFileSize_00110178);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          lVar5 = _objc_msgSend_unsignedLongLongValue(uVar7,local_168);
          bVar1 = lVar5 != 0;
          (*(code *)PTR__objc_release_00110458)(uVar7);
          (*(code *)PTR__objc_release_00110458)(uVar6);
          (*(code *)PTR__objc_release_00110458)(uVar4);
        }
        if (bVar1) {
          local_b0 = (*(code *)PTR__objc_retain_00110460)(local_118);
        }
        _objc_storeStrong(&local_118,0);
        bVar2 = true;
        if (bVar1) goto LAB_0001cec4;
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_168,auStack_110,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
  bVar2 = false;
LAB_0001cec4:
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if (!bVar2) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar8 = _objc_autoreleaseReturnValue(0,local_b0);
  return IVar8;
}

