// FUN_003d3eac @ 003d3eac

byte FUN_003d3eac(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = false;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf__UC);
    local_11 = true;
    if (uVar2 == 0x7fffffffffffffff) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf__QC);
      local_11 = true;
      if (uVar2 == 0x7fffffffffffffff) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf__);
        local_11 = uVar2 != 0x7fffffffffffffff;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

