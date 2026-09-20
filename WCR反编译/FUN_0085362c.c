// FUN_0085362c @ 0085362c

byte FUN_0085362c(double param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte local_84;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  FUN_008606fc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_00860a34();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    FUN_008571ec();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_40 = uVar1;
    _objc_getAssociatedObject(local_28,&DAT_028cd0d1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) == 0) {
      _objc_storeStrong(&local_48,DAT_028cd078);
    }
    uVar1 = local_40;
    FUN_0081f228();
    local_84 = 0;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_alpha_026ca4d8);
      local_84 = 0;
      if (DAT_02323ec0 <= param_1) {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        local_84 = 0;
        if (uVar1 != 0) {
          uVar4 = DAT_028cd0a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028cd0a0,PTR_s_isEqualToString__0269ccc8,local_48);
          local_84 = (byte)uVar4;
        }
      }
    }
    local_11 = local_84 & 1;
    local_38 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_11 = 1;
    local_38 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

