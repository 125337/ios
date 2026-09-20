// FUN_008344a0 @ 008344a0

void FUN_008344a0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_110;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  long local_80;
  cfstringStruct *local_78;
  long local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  long local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  long local_30;
  cfstringStruct *local_28;
  cfstringStruct **ppcVar4;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  ppcVar4 = &local_38;
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar4,param_2);
  uVar3 = (uint)ppcVar4;
  FUN_0082d7bc();
  if (((uVar3 & 1) == 0) || (local_30 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    lVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_visibleCells_0269fc48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_count_0269cfe0);
    if (lVar5 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_48 = 1;
    }
    else {
      local_61 = false;
      bVar1 = local_38 == (cfstringStruct *)0x0;
      if (bVar1) {
        local_110 = &cf_none;
      }
      else {
        local_110 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_110;
      }
      local_61 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_110;
      if ((local_61 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      lVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_70 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_30;
      lVar2 = local_50;
      local_b8 = PTR___NSConcreteGlobalBlock_02578658;
      local_b0 = 0xd0800000;
      local_ac = 0;
      local_a8 = FUN_00835164;
      local_a0 = &DAT_02580790;
      local_78 = pcVar6;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar6 = local_78;
      local_98 = lVar5;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar7 = local_58;
      local_90 = pcVar6;
      (*(code *)PTR__objc_retain_02578638)();
      lVar5 = local_70;
      local_88 = pcVar7;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar2,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_b8);
      pcVar7 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_componentsJoinedByString__0269d140,&cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_30;
      local_c0 = pcVar7;
      _objc_getAssociatedObject(local_30,&DAT_028cd1fd);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isEqualToString__0269ccc8);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      pcVar6 = local_c0;
      if (((ulong)pcVar7 & 1) == 0) {
        _objc_setAssociatedObject(local_30,&DAT_028cd1fd,local_c0,3);
        pcVar6 = local_c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar6;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar6;
      }
      local_48 = 1;
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

