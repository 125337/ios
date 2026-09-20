// FUN_003c0d90 @ 003c0d90

long FUN_003c0d90(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long local_38;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0),
      uVar2 == 0)) || (param_2 == (code *)0x0)) {
    local_18 = 0x7fffffffffffffff;
  }
  else {
    for (local_38 = 0; uVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0), local_38 < (long)uVar2
        ; local_38 = local_38 + 1) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*param_2)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar4 & 1) != 0) {
        local_18 = local_38;
        goto LAB_003c0f38;
      }
    }
    local_18 = 0x7fffffffffffffff;
  }
LAB_003c0f38:
  _objc_storeStrong(&local_20,0);
  return local_18;
}

