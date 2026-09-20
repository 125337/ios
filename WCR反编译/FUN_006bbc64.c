// FUN_006bbc64 @ 006bbc64

byte FUN_006bbc64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *local_88;
  ulong local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) || (local_28 == 0)) {
    local_11 = false;
    local_38 = 1;
  }
  else {
    if (DAT_028cc158 == (cfstringStruct *)0x0) {
      local_88 = &cf___;
    }
    else {
      local_88 = DAT_028cc158;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_88;
    uVar2 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028cc1b9);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((((uVar2 & 1) == 0) ||
        (uVar2 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_40),
        (uVar2 & 1) == 0)) ||
       (uVar2 = local_20, FUN_006be1fc(local_20,local_28,local_40), (uVar2 & 1) != 0)) {
      uVar2 = local_20;
      FUN_006be7cc(local_20,local_28,local_40);
      _objc_setAssociatedObject(local_20,&DAT_028cc1b9,local_40,3);
      local_11 = 0 < (long)uVar2;
    }
    else {
      local_11 = false;
    }
    local_38 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

