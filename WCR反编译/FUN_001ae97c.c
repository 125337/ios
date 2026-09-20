// FUN_001ae97c @ 001ae97c

byte FUN_001ae97c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_20;
  if (local_20 == local_28) {
    local_11 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_28;
    if ((uVar2 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar3 & 1) != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
        if (uVar2 == uVar3) {
          for (local_48 = 0; uVar2 = local_20,
              (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0), local_48 < uVar2
              ; local_48 = local_48 + 1) {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            (*(code *)PTR__objc_release_02578630)(uVar2);
            if (uVar2 != uVar3) {
              local_11 = 0;
              goto LAB_001aec7c;
            }
          }
          local_11 = 1;
        }
        else {
          local_11 = 0;
        }
        goto LAB_001aec7c;
      }
    }
    local_11 = 0;
  }
LAB_001aec7c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

