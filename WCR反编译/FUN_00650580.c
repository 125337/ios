// FUN_00650580 @ 00650580

void FUN_00650580(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_88;
  cfstringStruct *local_50 [3];
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == (cfstringStruct *)0x0) {
    local_2c = 1;
  }
  else {
    pcVar1 = local_28;
    FUN_0064f9ac();
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_88 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cbc1e);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)pcVar1 & 1) == 0) ||
       (pcVar1 = local_50[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_isEqualToString__0269ccc8,local_38),
       ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = local_28;
      FUN_0064fac4(local_28,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_28;
      FUN_0064fac4(local_28,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_28;
      FUN_0064f7f4(local_28,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_28;
      FUN_0064f7f4(local_28,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _objc_setAssociatedObject(local_28,&DAT_028cbc1e,local_38,3);
      pcVar1 = local_28;
      FUN_0064fac4(local_28,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_28;
      FUN_0064fac4(local_28,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_28;
      FUN_0064f7f4(local_28,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_28;
      FUN_0064f7f4(local_28,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _objc_setAssociatedObject(local_28,&DAT_028cbc1f,0,1);
      _objc_setAssociatedObject(local_28,&DAT_028cbc20,0,1);
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

