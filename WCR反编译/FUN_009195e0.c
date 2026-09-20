// FUN_009195e0 @ 009195e0

undefined * FUN_009195e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_026ce400;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIDevice_026ce400,PTR_s_currentDevice_026ca5d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (((ulong)puVar2 & 1) == 0) {
    local_38 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIDevice_026ce400;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIDevice_026ce400,PTR_s_currentDevice_026ca5d0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return local_38;
}

