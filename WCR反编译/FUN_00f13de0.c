// FUN_00f13de0 @ 00f13de0

undefined8 FUN_00f13de0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_18 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf__7bYO);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_bv);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_format_s_)
        ;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_20;
          FUN_00f1cc0c();
          if ((uVar2 & 1) == 0) {
            local_18 = 0;
          }
          else {
            local_18 = 1;
          }
        }
        else {
          local_18 = 2;
        }
      }
      else {
        local_18 = 1;
      }
    }
    else {
      local_18 = 2;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

