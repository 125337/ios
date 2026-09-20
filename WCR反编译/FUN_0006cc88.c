// FUN_0006cc88 @ 0006cc88

byte FUN_0006cc88(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
      local_11 = uVar2 == 0x24fb35;
      goto LAB_0006cd8c;
    }
  }
  local_11 = false;
LAB_0006cd8c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

