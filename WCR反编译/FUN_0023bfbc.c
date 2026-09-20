// FUN_0023bfbc @ 0023bfbc

byte FUN_0023bfbc(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_68;
  cfstringStruct *local_38 [3];
  cfstringStruct *local_20;
  byte local_11;
  
  pcVar1 = "BrandTimelineViewController";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_11 = 1;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSBundle_026ce418;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_20 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKey__0269e048,&cf_CFBundleShortVersionString);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38[0] = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_11 = 0;
    }
    else {
      pcVar2 = local_38[0];
      FUN_0023c1f8(local_38[0],&cf_8_0_76);
      local_11 = ((byte)pcVar2 ^ 1) & 1;
    }
    _objc_storeStrong(local_38);
    _objc_storeStrong(&local_20,0);
  }
  return local_11 & 1;
}

