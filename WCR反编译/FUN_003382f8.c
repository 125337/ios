// FUN_003382f8 @ 003382f8

byte FUN_003382f8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf__g__YS);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      if (4 < uVar2) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf__YS_);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__);
          if ((uVar2 & 1) != 0) {
            local_11 = 1;
            goto LAB_003384c0;
          }
        }
      }
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
LAB_003384c0:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

