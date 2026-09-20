// FUN_016bc52c @ 016bc52c

byte FUN_016bc52c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  byte local_68;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_016b15dc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_68 = 0;
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    local_40 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = (byte)uVar2;
  }
  local_11 = local_68 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

