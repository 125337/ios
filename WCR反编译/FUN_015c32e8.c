// FUN_015c32e8 @ 015c32e8

void FUN_015c32e8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e3b2a);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar3 = local_18;
  FUN_015c4660(local_18,uVar2 & 0xffffffff);
  uVar1 = local_18;
  if ((int)uVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
               uVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028e3b2c,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

