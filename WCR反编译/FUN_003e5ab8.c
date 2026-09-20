// FUN_003e5ab8 @ 003e5ab8

byte FUN_003e5ab8(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte local_74;
  undefined *local_50;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  FUN_003e5a18();
  _objc_retainAutoreleasedReturnValue();
  local_28 = 0;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_28,uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_74 = 1;
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (bVar1) {
    local_50 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_74 = (byte)puVar3;
  }
  local_11 = local_74 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

