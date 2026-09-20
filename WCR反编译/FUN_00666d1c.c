// FUN_00666d1c @ 00666d1c

byte FUN_00666d1c(undefined8 param_1)

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
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    FUN_00665300();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf___);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        FUN_006638c8();
        if ((uVar2 & 1) == 0) {
          uVar2 = local_20;
          FUN_006620c0();
          if ((uVar2 & 1) == 0) {
            uVar2 = local_20;
            FUN_006627f0();
            if ((uVar2 & 1) == 0) {
              local_11 = 1;
            }
            else {
              local_11 = 0;
            }
          }
          else {
            local_11 = 0;
          }
        }
        else {
          local_11 = 0;
        }
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

