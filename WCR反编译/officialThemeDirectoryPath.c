// officialThemeDirectoryPath @ 010ee240

/* Function Stack Size: 0x10 bytes */

ID WCRefineOfficialTheme::officialThemeDirectoryPath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

