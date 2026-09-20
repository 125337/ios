// FUN_001a0588 @ 001a0588

void FUN_001a0588(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_30;
  uint local_24;
  undefined8 local_20;
  ulong local_18;
  
  puVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar3,param_2);
  local_20 = param_1;
  if ((local_18 == 0) || (FUN_001a0538(param_1), ((ulong)puVar3 & 1) == 0)) {
    local_24 = 1;
  }
  else {
    uVar4 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c8972);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_30 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    uVar2 = local_18;
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_028c8972,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_24 = (uint)!bVar1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

