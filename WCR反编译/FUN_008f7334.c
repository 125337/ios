// FUN_008f7334 @ 008f7334

byte FUN_008f7334(undefined8 param_1,void *param_2,void *param_3)

{
  int iVar1;
  undefined *puVar2;
  void *pvVar3;
  void *pvVar4;
  void *local_20;
  bool local_11;
  
  local_20 = (void *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pvVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pvVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((((ulong)pvVar3 & 1) == 0) ||
      (pvVar4 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
      pvVar3 = local_20, pvVar4 < param_3)) || (param_2 == (void *)0x0)) {
    local_11 = false;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pvVar3,PTR_s_bytes_026a9630);
    iVar1 = _memcmp(pvVar3,param_2,(size_t)param_3);
    local_11 = iVar1 == 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

