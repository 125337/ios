// FUN_004ccd9c @ 004ccd9c

void FUN_004ccd9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar2,&DAT_028cac49,puVar1,1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

