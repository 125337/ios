// FUN_00889204 @ 00889204

void FUN_00889204(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_90;
  ulong local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar1 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar2;
  }
  else {
    uVar1 = local_40;
    FUN_008890bc();
    local_90 = 1;
    if ((uVar1 & 1) != 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = (uint)puVar3 ^ 1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if ((local_90 & 1) == 0) {
      local_30 = &cf_xiaowei_filled;
      local_28 = local_40;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar2;
    }
    else {
      local_20 = local_40;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar2;
    }
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_38);
  return;
}

