// FUN_01ce851c @ 01ce851c

byte FUN_01ce851c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  byte local_9c;
  ulong local_90;
  undefined *local_80;
  undefined *local_78;
  bool local_69;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     uVar2 < 6)) {
    local_31 = 0;
    local_44 = 1;
  }
  else {
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_69 = false;
    if (uVar2 < 0x101) {
      local_90 = local_40;
    }
    else {
      local_28 = 0;
      local_30 = 0x100;
      local_20 = 0;
      local_18 = 0x100;
      local_60 = 0;
      local_58 = 0x100;
      local_90 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_subdataWithRange__026a9e88,0,0x100);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_90;
    }
    local_69 = uVar2 >= 0x101;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_90;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar1 = local_78;
      local_78 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsString__0269d0b0,&cf_<html);
    local_9c = 1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_containsString__0269d0b0,&cf_<_doctypehtml);
      local_9c = (byte)puVar1;
    }
    local_31 = local_9c & 1;
    local_44 = 1;
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

