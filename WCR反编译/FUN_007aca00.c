// FUN_007aca00 @ 007aca00

void FUN_007aca00(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_110;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  uint local_58;
  undefined *local_48;
  long local_40;
  long local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_40 = param_3;
  local_38 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  if (((local_30 == (undefined *)0x0) || (local_38 == 0)) ||
     (puVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,local_38),
     ((ulong)puVar2 & 1) == 0)) {
    puVar2 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_58 = 1;
    goto LAB_007acf20;
  }
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  puVar2 = local_60;
  if (((ulong)puVar3 & 1) == 0) {
    local_71 = 0;
    local_81 = 0;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_110 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_110;
    }
    else {
      local_110 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_mutableCopy_0269d8a0);
      local_71 = 1;
      local_70 = local_110;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_110;
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_40 == 0) ||
       (puVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,local_40),
       ((ulong)puVar2 & 1) == 0)) {
LAB_007aceb8:
      puVar2 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_58 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_40,local_68);
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_90;
      bVar1 = ((ulong)puVar3 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar2;
      }
      local_58 = (uint)bVar1;
      _objc_storeStrong(&local_90,0);
      if (local_58 == 0) goto LAB_007aceb8;
    }
    _objc_storeStrong(&local_68,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_58 = 1;
  }
  _objc_storeStrong(&local_60,0);
LAB_007acf20:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

