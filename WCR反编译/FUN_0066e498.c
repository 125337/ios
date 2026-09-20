// FUN_0066e498 @ 0066e498

void FUN_0066e498(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar1 = local_18;
  FUN_0066db9c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  FUN_00670348();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  FUN_0067080c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf____);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar4);
  return;
}

