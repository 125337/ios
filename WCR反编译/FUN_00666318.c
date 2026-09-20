// FUN_00666318 @ 00666318

void FUN_00666318(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithObjects__0269fb00,&cf_brandsessionholder)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028cbc70;
  DAT_028cbc70 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

