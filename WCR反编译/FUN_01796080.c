// FUN_01796080 @ 01796080

undefined8 FUN_01796080(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = 0;
  if (puVar2 != (undefined *)0x0) {
    uVar3 = DAT_02324020;
  }
  return uVar3;
}

