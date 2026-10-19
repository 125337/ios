// imageNamed:decodeDecision: @0x685b8

/* Function Stack Size: 0x20 bytes */

ID WCMYBImage::imageNamed_decodeDecision_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

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
  ulong local_1e0;
  ulong local_1d8;
  undefined **local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  ID local_188;
  class_t *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  undefined8 local_130;
  int local_124;
  undefined8 local_120;
  bool local_111;
  undefined **local_110;
  undefined8 local_108;
  double local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  int local_dc;
  undefined8 local_d8;
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
  _objc_storeStrong(&local_d0,param_3,param_3,param_4,param_5);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_4);
  lVar2 = _objc_msgSend_length(local_d0,local_198);
  if (lVar2 == 0) {
    local_b8 = 0;
    local_dc = 1;
  }
  else {
    uVar3 = _objc_msgSend_hasSuffix_(local_d0,local_198,&cf__);
    if ((uVar3 & 1) == 0) {
      _objc_msgSend_stringByDeletingPathExtension(local_d0,local_198);
      local_e8 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_pathExtension(local_d0,local_198);
      local_f0 = _objc_retainAutoreleasedReturnValue();
      local_f8 = 0;
      local_100 = 1.0;
      lVar2 = _objc_msgSend_length(local_f0,local_198);
      local_111 = false;
      if (lVar2 == 0) {
        local_1a8 = &PTR__OBJC_CLASS___NSConstantArray_0010fb78;
      }
      else {
        local_30 = local_f0;
        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_198,&local_30,1);
        local_1a8 = (undefined **)_objc_retainAutoreleasedReturnValue();
        local_110 = local_1a8;
      }
      local_111 = lVar2 != 0;
      local_108 = (*(code *)PTR__objc_retain_00110460)(local_1a8);
      if ((local_111 & 1U) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_110);
      }
      __NSBundlePreferredScales();
      local_120 = _objc_retainAutoreleasedReturnValue();
      local_124 = 0;
      while( true ) {
        uVar8 = (ulong)local_124;
        uVar3 = _objc_msgSend_count(local_120,local_198);
        if (uVar3 <= uVar8) break;
        _objc_msgSend_objectAtIndexedSubscript_(uVar8 - uVar3,local_120,local_198,(long)local_124);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        fVar9 = (float)_objc_msgSend_floatValue(uVar4,local_198);
        local_100 = (double)fVar9;
        (*(code *)PTR__objc_release_00110458)(uVar4);
        __NSStringByAppendingNameScale(local_100,local_e8);
        local_130 = _objc_retainAutoreleasedReturnValue();
        _memset(auStack_178,0,0x40);
        uVar4 = (*(code *)PTR__objc_retain_00110460)(local_108);
        local_1d8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar4,local_198,auStack_178,auStack_b0,0x10);
        if (local_1d8 != 0) {
          lVar2 = *local_168;
          local_1e0 = 0;
          do {
            do {
              if (*local_168 - lVar2 != 0) {
                _objc_enumerationMutation(*local_168 - lVar2,uVar4);
              }
              local_138 = *(undefined8 *)(local_170 + local_1e0 * 8);
              _objc_msgSend_mainBundle(&_OBJC_CLASS___NSBundle,local_198);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_pathForResource_ofType_(uVar5,local_198,local_130,local_138);
              lVar6 = _objc_retainAutoreleasedReturnValue();
              lVar1 = local_f8;
              local_f8 = lVar6;
              (*(code *)PTR__objc_release_00110458)(lVar1);
              (*(code *)PTR__objc_release_00110458)(uVar5);
              if (local_f8 != 0) {
                local_dc = 5;
                goto LAB_00068954;
              }
              local_1e0 = local_1e0 + 1;
            } while (local_1e0 < local_1d8);
            local_1d8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar4,local_198,auStack_178,auStack_b0,0x10);
            local_1e0 = 0;
          } while (local_1d8 != 0);
        }
        local_dc = 0;
LAB_00068954:
        (*(code *)PTR__objc_release_00110458)(uVar4);
        if (local_f8 == 0) {
          local_dc = 0;
        }
        else {
          local_dc = 2;
        }
        _objc_storeStrong(&local_130,0);
        if (local_dc != 0) break;
        local_124 = local_124 + 1;
      }
      lVar2 = _objc_msgSend_length(local_f8,local_198);
      if (lVar2 == 0) {
        local_188 = local_c0;
        local_180 = &objc::class_t::WCMYBImage;
        _objc_msgSendSuper2(&local_188,"imageNamed:",local_d0);
        local_b8 = _objc_retainAutoreleasedReturnValue();
        local_dc = 1;
      }
      else {
        _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_198,local_f8);
        local_190 = _objc_retainAutoreleasedReturnValue();
        lVar2 = _objc_msgSend_length(local_190,local_198);
        if (lVar2 == 0) {
          local_b8 = 0;
        }
        else {
          uVar4 = _objc_alloc(local_c0);
          local_b8 = _objc_msgSend_initWithData_scale_decodeDecision_
                               (local_100,uVar4,local_198,local_190,local_d8);
        }
        local_dc = 1;
        _objc_storeStrong(&local_190,0);
      }
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_108,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
    }
    else {
      local_b8 = 0;
      local_dc = 1;
    }
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar7 = _objc_autoreleaseReturnValue(0,local_b8);
  return IVar7;
}

