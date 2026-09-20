// menuIconPackRelativeDirectory @ 0160ea1c

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatProfileStore::menuIconPackRelativeDirectory(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_menuIconPackFolder_026b18c8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf_WCRefine_SuperFloat_Icons;
  (*(code *)PTR__objc_msgSend_02578628)
            (&cf_WCRefine_SuperFloat_Icons,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar1;
}

