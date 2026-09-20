// FUN_0089f82c @ 0089f82c

void FUN_0089f82c(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  uint local_6c;
  undefined *local_68;
  long local_60;
  uint local_58;
  byte local_51;
  undefined8 local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  puVar2 = &local_20;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_008a07a8(puVar2,&local_28,&local_30);
  if (((ulong)puVar2 & 1) == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    lStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    local_40 = 0;
    iVar1 = 0x89f82c;
    _dladdr(FUN_0089f82c,&local_50);
    if ((iVar1 == 0) || (lStack_48 == 0)) {
      local_18 = (undefined *)0x0;
    }
    else {
      FUN_0089bb90();
      local_51 = (byte)iVar1;
      local_58 = 0;
      lVar4 = local_30;
      _objc_copyClassNamesForImage(local_30,&local_58);
      puVar3 = PTR__OBJC_CLASS___NSMutableData_026ce660;
      local_60 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar3;
      for (local_6c = 0; local_6c < local_58; local_6c = local_6c + 1) {
        lVar4 = *(long *)(local_60 + (ulong)local_6c * 8);
        _objc_lookUpClass();
        if (lVar4 != 0) {
          FUN_008a09b4(lVar4,local_20,local_28,lStack_48,local_51 & 1,local_68);
          _object_getClass();
          FUN_008a09b4(lVar4,local_20,local_28,lStack_48,local_51 & 1,local_68);
        }
      }
      _free(local_6c - local_58,local_60);
      puVar3 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar3;
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

