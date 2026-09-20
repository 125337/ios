// FUN_01687600 @ 01687600

void FUN_01687600(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e3d38;
  DAT_028e3d38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

