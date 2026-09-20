// FUN_0175de6c @ 0175de6c

void FUN_0175de6c(undefined8 param_1)

{
  CCCryptorStatus CVar1;
  undefined *puVar2;
  void *pvVar3;
  void *keyLength;
  void *dataIn;
  void *dataInLength;
  undefined *dataOutAvailable;
  size_t local_48;
  undefined *local_40;
  long local_38;
  void *local_30;
  undefined4 local_24;
  void *local_20;
  undefined *local_18;
  
  local_20 = (void *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pvVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pvVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pvVar3 & 1) == 0) ||
     (pvVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     pvVar3 == (void *)0x0)) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    FUN_0175fea4();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pvVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pvVar3,PTR_s_length_0269cca0);
    if (pvVar3 == (void *)0x0) {
      local_18 = (undefined *)0x0;
      local_24 = 1;
    }
    else {
      pvVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      local_38 = (long)pvVar3 + 0x10;
      puVar2 = PTR__OBJC_CLASS___NSMutableData_026ce660;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithLength__026a3368,local_38);
      _objc_retainAutoreleasedReturnValue();
      pvVar3 = local_30;
      local_48 = 0;
      local_40 = puVar2;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pvVar3,PTR_s_bytes_026a9630);
      keyLength = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      dataIn = local_20;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(dataIn,PTR_s_bytes_026a9630);
      dataInLength = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      puVar2 = local_40;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_mutableBytes_026a3370);
      dataOutAvailable = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      CVar1 = _CCCrypt(0,0,3,pvVar3,(size_t)keyLength,(void *)0x0,dataIn,(size_t)dataInLength,puVar2
                       ,(size_t)dataOutAvailable,&local_48);
      if (CVar1 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setLength__026b4318,local_48);
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
        local_18 = puVar2;
      }
      else {
        local_18 = (undefined *)0x0;
      }
      local_24 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

