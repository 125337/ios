// FUN_0064a498 @ 0064a498

byte FUN_0064a498(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_38;
  byte local_29;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_006620a0();
  if ((param_1 & 1) == 0) {
    (*DAT_028cbb60)(local_20,local_28);
    local_11 = (byte)local_20 & 1;
  }
  else {
    uVar1 = local_20;
    (*DAT_028cbb60)(local_20,local_28);
    local_29 = (byte)uVar1;
    uVar1 = local_20;
    FUN_00655d64(local_20,"_m_textForGreenLabel");
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_38;
      FUN_00665300();
      if ((uVar1 & 1) == 0) {
        uVar1 = local_38;
        FUN_00666cb0();
        if ((uVar1 & 1) != 0) {
          FUN_0066426c(local_20,local_38,&cf_updateRedTips);
        }
      }
    }
    FUN_0066b2cc(local_20);
    local_11 = local_29 & 1;
    _objc_storeStrong(&local_38,0);
  }
  return local_11 & 1;
}

