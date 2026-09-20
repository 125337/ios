// FUN_0073fdc0 @ 0073fdc0

byte FUN_0073fdc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_bc;
  ulong local_58 [2];
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0),
     uVar3 = local_20, lVar1 == 0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = local_20;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_model_026a7bf8);
      if ((uVar4 & 1) != 0) {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_model);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar3;
        if (uVar3 != 0) {
          _objc_storeStrong(&local_40,uVar3);
        }
        _objc_storeStrong(&local_48,0);
      }
      uVar3 = local_40;
      FUN_00740154();
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      local_bc = 0;
      if (uVar3 != 0) {
        lVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsObject__0269cbb8,local_58[0]);
        local_bc = (byte)lVar1;
      }
      local_11 = local_bc & 1;
      local_38 = 1;
      _objc_storeStrong(local_58);
      _objc_storeStrong(&local_40,0);
    }
    else {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsObject__0269cbb8,local_20);
      local_11 = (byte)lVar1 & 1;
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

