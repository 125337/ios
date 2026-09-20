// _WCRSideloadShareFixWriteGroupMarker @ 01509b94

byte _WCRSideloadShareFixWriteGroupMarker(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  _WCRSideloadShareFixClearGroupMarker();
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_01509dd0();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_URLByDeletingLastPathComponent_026af050);
      _objc_retainAutoreleasedReturnValue();
      local_40 = 0;
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_38 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_40;
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_40,local_48);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        local_11 = 0;
      }
      else {
        local_58 = local_40;
        lVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_writeToURL_atomically_encoding_e_026aa200,local_30,1,4,&local_58);
        _objc_storeStrong(&local_40,local_58);
        local_49 = (byte)lVar1;
        local_11 = local_49 & 1;
      }
      local_24 = 1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

