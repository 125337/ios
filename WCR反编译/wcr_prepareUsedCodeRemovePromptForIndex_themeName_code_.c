// wcr_prepareUsedCodeRemovePromptForIndex:themeName:code: @ 017352dc

/* Function Stack Size: 0x28 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_prepareUsedCodeRemovePromptForIndex_themeName_code_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined *puVar2;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_5);
  IVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar1,&DAT_028e3f87);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,local_28)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar1,&DAT_028e3f88,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_38 == (cfstringStruct *)0x0) {
    local_88 = &::cf___;
  }
  else {
    local_88 = local_38;
  }
  _objc_setAssociatedObject(local_18,&DAT_028e3f89,local_88,3);
  if (local_30 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  else {
    local_a0 = local_30;
  }
  _objc_setAssociatedObject(local_18,&DAT_028e3f8a,local_a0,3);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

