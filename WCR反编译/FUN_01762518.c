// FUN_01762518 @ 01762518

void FUN_01762518(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_ThemeStyleManager_026ceef8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_ThemeStyleManager_026ceef8,PTR_s_sharedManager_0269db78)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

