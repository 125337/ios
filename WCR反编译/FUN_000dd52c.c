// FUN_000dd52c @ 000dd52c

ulong FUN_000dd52c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_c0;
  ulong local_90;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028c8373);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = local_20;
    FUN_000d8d08(local_20,"m_arrMsg");
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_48 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    }
    local_18 = local_c0;
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    uVar1 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028c8374);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_38[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      local_90 = 0;
    }
    else {
      local_90 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_count_0269cfe0);
    }
    local_18 = local_90;
    local_3c = 1;
    _objc_storeStrong(local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

