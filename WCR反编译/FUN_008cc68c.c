// FUN_008cc68c @ 008cc68c

ulong FUN_008cc68c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  _objc_getAssociatedObject(param_1,DAT_026f4a98);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_38 = local_20;
    (*DAT_028ce1f8)(local_20,local_28);
    uVar3 = local_20;
    uVar1 = DAT_026f4a98;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
               local_38);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,uVar1,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_unsignedLongLongValue_0269d6b8);
    local_38 = param_1;
  }
  uVar3 = local_20;
  FUN_008ced34();
  if ((uVar3 & 1) == 0) {
    local_18 = local_38;
  }
  else {
    local_18 = local_38 + 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

