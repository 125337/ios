// FUN_01eec144 @ 01eec144

void FUN_01eec144(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_70;
  uint local_44;
  undefined8 local_30;
  byte local_21;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  local_21 = param_3;
  FUN_01f0fad8();
  _objc_retainAutoreleasedReturnValue();
  local_44 = 0;
  local_30 = uVar1;
  if ((local_21 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_44 = (uint)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_44 & 1) == 0) {
    if (local_20 == (cfstringStruct *)0x0) {
      local_70 = &cf___;
    }
    else {
      local_70 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_writeToFile_atomically_encoding__026a33a8,local_30,1,4,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

