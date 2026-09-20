// FUN_00550e78 @ 00550e78

void FUN_00550e78(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long local_18;
  
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(&DAT_028cb370 + local_18 * 8);
    *(undefined **)(&DAT_028cb370 + local_18 * 8) = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(&DAT_028cb380 + local_18 * 8);
    *(undefined **)(&DAT_028cb380 + local_18 * 8) = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(&DAT_028cb390 + local_18 * 8);
    *(undefined **)(&DAT_028cb390 + local_18 * 8) = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (&DAT_028cb410)[local_18] = 0;
  }
  return;
}

