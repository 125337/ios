// imageNamed: @0x8f444

/* Function Stack Size: 0x18 bytes */

ID WCMYYImage::imageNamed_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  ulong uVar8;
  float fVar9;
  ulong local_1c0;
  ulong local_1b8;
  undefined **local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined8 local_128;
  int local_11c;
  undefined8 local_118;
  bool local_109;
  undefined **local_108;
  undefined8 local_100;
  double local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d4;
  undefined8 local_d0;
  SEL local_c8;
  ID local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [128];
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_d0 = 0;
  local_c8 = param_2;
  local_c0 = param_1;
  _objc_storeStrong(&local_d0,param_3);
  lVar2 = _objc_msgSend_length(local_d0,local_180);
  if (lVar2 == 0) {
    local_b8 = 0;
    local_d4 = 1;
  }
  else {
    uVar3 = _objc_msgSend_hasSuffix_(local_d0,local_180,&cf__);
    if ((uVar3 & 1) == 0) {
      _objc_msgSend_stringByDeletingPathExtension(local_d0,local_180);
      local_e0 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_pathExtension(local_d0,local_180);
      local_e8 = _objc_retainAutoreleasedReturnValue();
      local_f0 = 0;
      local_f8 = 1.0;
      lVar2 = _objc_msgSend_length(local_e8,local_180);
      local_109 = false;
      if (lVar2 == 0) {
        local_188 = &PTR__OBJC_CLASS___NSConstantArray_0010fc38;
      }
      else {
        local_30 = local_e8;
        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_180,&local_30,1);
        local_188 = (undefined **)_objc_retainAutoreleasedReturnValue();
        local_108 = local_188;
      }
      local_109 = lVar2 != 0;
      local_100 = (*(code *)PTR__objc_retain_00110460)(local_188);
      if ((local_109 & 1U) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_108);
      }
      __NSBundlePreferredScales();
      local_118 = _objc_retainAutoreleasedReturnValue();
      local_11c = 0;
      while( true ) {
        uVar8 = (ulong)local_11c;
        uVar3 = _objc_msgSend_count(local_118,local_180);
        if (uVar3 <= uVar8) break;
        _objc_msgSend_objectAtIndexedSubscript_(uVar8 - uVar3,local_118,local_180,(long)local_11c);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        fVar9 = (float)_objc_msgSend_floatValue(uVar4,local_180);
        local_f8 = (double)fVar9;
        (*(code *)PTR__objc_release_00110458)(uVar4);
        __NSStringByAppendingNameScale(local_f8,local_e0);
        local_128 = _objc_retainAutoreleasedReturnValue();
        _memset(auStack_170,0,0x40);
        uVar4 = (*(code *)PTR__objc_retain_00110460)(local_100);
        local_1b8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar4,local_180,auStack_170,auStack_b0,0x10);
        if (local_1b8 != 0) {
          lVar2 = *local_160;
          local_1c0 = 0;
          do {
            do {
              if (*local_160 - lVar2 != 0) {
                _objc_enumerationMutation(*local_160 - lVar2,uVar4);
              }
              local_130 = *(undefined8 *)(local_168 + local_1c0 * 8);
              _objc_msgSend_mainBundle(&_OBJC_CLASS___NSBundle,local_180);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_pathForResource_ofType_(uVar5,local_180,local_128,local_130);
              lVar6 = _objc_retainAutoreleasedReturnValue();
              lVar1 = local_f0;
              local_f0 = lVar6;
              (*(code *)PTR__objc_release_00110458)(lVar1);
              (*(code *)PTR__objc_release_00110458)(uVar5);
              if (local_f0 != 0) {
                local_d4 = 5;
                goto LAB_0008f7cc;
              }
              local_1c0 = local_1c0 + 1;
            } while (local_1c0 < local_1b8);
            local_1b8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar4,local_180,auStack_170,auStack_b0,0x10);
            local_1c0 = 0;
          } while (local_1b8 != 0);
        }
        local_d4 = 0;
LAB_0008f7cc:
        (*(code *)PTR__objc_release_00110458)(uVar4);
        if (local_f0 == 0) {
          local_d4 = 0;
        }
        else {
          local_d4 = 2;
        }
        _objc_storeStrong(&local_128,0);
        if (local_d4 != 0) break;
        local_11c = local_11c + 1;
      }
      lVar2 = _objc_msgSend_length(local_f0,local_180);
      if (lVar2 == 0) {
        local_b8 = 0;
        local_d4 = 1;
      }
      else {
        _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_180,local_f0);
        local_178 = _objc_retainAutoreleasedReturnValue();
        lVar2 = _objc_msgSend_length(local_178,local_180);
        if (lVar2 == 0) {
          local_b8 = 0;
        }
        else {
          uVar4 = _objc_alloc(local_c0);
          local_b8 = _objc_msgSend_initWithData_scale_(local_f8,uVar4,local_180,local_178);
        }
        local_d4 = 1;
        _objc_storeStrong(&local_178,0);
      }
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_e0,0);
    }
    else {
      local_b8 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar7 = _objc_autoreleaseReturnValue(0,local_b8);
  return IVar7;
}

