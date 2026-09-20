// FUN_015c1474 @ 015c1474

void FUN_015c1474(uint param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar1 = (ulong)param_1;
  FUN_015c540c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = (ulong)param_2;
  FUN_015c540c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf______);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

