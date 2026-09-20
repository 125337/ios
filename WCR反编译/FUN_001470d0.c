// FUN_001470d0 @ 001470d0

byte FUN_001470d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_98;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  if ((DAT_028c87b8 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_MYMessageToolBarKey);
      if ((uVar2 & 1) != 0) {
        local_11 = 1;
        goto LAB_00147324;
      }
    }
  }
  uVar2 = local_30;
  if ((DAT_028c87b9 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_MYMessageToolBarKey);
      if ((uVar2 & 1) != 0) {
        local_11 = 0;
        goto LAB_00147324;
      }
    }
  }
  if (DAT_028c87b0 == (code *)0x0) {
    local_98 = 0;
  }
  else {
    uVar3 = local_20;
    (*DAT_028c87b0)(local_20,local_28,local_30);
    local_98 = (byte)uVar3;
  }
  local_11 = local_98 & 1;
LAB_00147324:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

