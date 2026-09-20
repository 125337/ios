// FUN_01502c40 @ 01502c40

void FUN_01502c40(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_150;
  undefined *local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined4 local_a4;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  undefined *local_28;
  
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_1);
  lVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_98 = (undefined *)0x0;
    local_a4 = 1;
  }
  else {
    pcVar2 = &cf_<plist;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_<plist,PTR_s_dataUsingEncoding__026a12e8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_<_plist>;
    local_b0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_<_plist>,PTR_s_dataUsingEncoding__026a12e8,1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_a0;
    pcVar2 = local_b0;
    lVar4 = local_a0;
    local_b8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    local_48 = 0;
    local_40 = 0;
    local_d8 = 0;
    puVar5 = PTR_s_rangeOfData_options_range__026aff40;
    local_d0 = lVar4;
    local_50 = lVar4;
    local_38 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_rangeOfData_options_range__026aff40,pcVar2,0,0,lVar4);
    local_c8 = lVar1;
    local_c0 = puVar5;
    if (lVar1 == 0x7fffffffffffffff) {
      local_98 = (undefined *)0x0;
      local_a4 = 1;
    }
    else {
      lVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      local_e0 = lVar4 - local_c8;
      lVar4 = local_a0;
      puVar5 = PTR_s_rangeOfData_options_range__026aff40;
      local_e8 = lVar1;
      local_70 = local_e0;
      local_68 = lVar1;
      local_60 = lVar1;
      local_58 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_rangeOfData_options_range__026aff40,local_b8,0,lVar1,local_e0);
      local_f8 = lVar4;
      local_f0 = puVar5;
      if (lVar4 == 0x7fffffffffffffff) {
        local_98 = (undefined *)0x0;
        local_a4 = 1;
      }
      else {
        local_108 = puVar5 + (lVar4 - local_c8);
        local_88 = local_c8;
        local_80 = local_c8;
        local_110 = local_c8;
        lVar1 = local_a0;
        local_90 = local_108;
        local_78 = local_108;
        local_30 = lVar4;
        local_28 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_subdataWithRange__026a9e88,local_c8,local_108);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSPropertyListSerialization_026cece8;
        local_100 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSPropertyListSerialization_026cece8,
                   PTR_s_propertyListWithData_options_for_026aff48,lVar1,0,0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_118 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
        if (((ulong)puVar5 & 1) == 0) {
          local_150 = (undefined *)0x0;
        }
        else {
          local_150 = local_118;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_150;
        local_a4 = 1;
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_100,0);
      }
    }
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_b0,0);
  }
  _objc_storeStrong(&local_a0,0);
  _objc_autoreleaseReturnValue(local_98);
  return;
}

