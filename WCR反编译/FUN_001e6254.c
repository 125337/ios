// FUN_001e6254 @ 001e6254

byte FUN_001e6254(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      FUN_001d1c14();
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,uVar2);
        if ((uVar3 & 1) != 0) {
          local_11 = 1;
          goto LAB_001e63fc;
        }
      }
      FUN_001d1ba0();
      if (uVar3 != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,uVar3);
        if ((uVar2 & 1) != 0) {
          local_11 = 1;
          goto LAB_001e63fc;
        }
      }
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
LAB_001e63fc:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

