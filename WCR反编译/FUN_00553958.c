// FUN_00553958 @ 00553958

byte FUN_00553958(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  uVar3 = local_28;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0),
       uVar3 != 0)) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsObject__0269cbb8,local_20);
      local_11 = (byte)uVar3 & 1;
      goto LAB_00553ac8;
    }
  }
  local_11 = 0;
LAB_00553ac8:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

