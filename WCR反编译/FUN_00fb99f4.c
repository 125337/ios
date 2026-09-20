// FUN_00fb99f4 @ 00fb99f4

byte FUN_00fb99f4(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_3;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar2 & 1) == 0) || (local_28 == 0x7fffffffffffffff)) || (local_20 == 0)) {
    local_11 = 0;
  }
  else {
    if (local_28 != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_characterAtIndex__0269fa18,local_28 + -1)
      ;
      uVar2 = uVar2 & 0xffff;
      FUN_00fcad38();
      if ((uVar2 & 1) != 0) {
        local_11 = 1;
        goto LAB_00fb9bac;
      }
    }
    uVar2 = local_28 + local_20;
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (uVar2 < uVar3) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_characterAtIndex__0269fa18,uVar2);
      uVar3 = uVar3 & 0xffff;
      FUN_00fcad38();
      if ((uVar3 & 1) != 0) {
        local_11 = 1;
        goto LAB_00fb9bac;
      }
    }
    local_11 = 0;
  }
LAB_00fb9bac:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

