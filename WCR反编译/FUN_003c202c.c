// FUN_003c202c @ 003c202c

long FUN_003c202c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long local_40;
  undefined8 local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0),
      uVar2 == 0)) || (local_28 == 0)) {
    local_18 = 0x7fffffffffffffff;
  }
  else {
    for (local_40 = 0; uVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0), local_40 < (long)uVar2
        ; local_40 = local_40 + 1) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00394b10();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar3 & 1) != 0) {
        local_18 = local_40;
        goto LAB_003c21cc;
      }
    }
    local_18 = 0x7fffffffffffffff;
  }
LAB_003c21cc:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

