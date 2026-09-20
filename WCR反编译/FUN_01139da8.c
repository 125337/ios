// FUN_01139da8 @ 01139da8

byte FUN_01139da8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar2 & 1) == 0) ||
      (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
      uVar2 = local_20, uVar3 != 0x48)) || (param_2 == 0)) {
    local_11 = false;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_bytes_026a9630);
    ___memcpy_chk(param_2,uVar2,0x48,0xffffffffffffffff);
    local_11 = *(char *)(param_2 + 0x38) != '\0';
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

