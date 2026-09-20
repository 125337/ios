// FUN_002085e4 @ 002085e4

bool FUN_002085e4(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  pcVar1 = "DeviceInfo";
  _objc_getClass();
  pcVar2 = &cf_isiPhone;
  _NSSelectorFromString();
  if ((pcVar1 != (char *)0x0) &&
     (pcVar3 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar3 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2);
    return (bool)((byte)pcVar1 & 1);
  }
  puVar4 = PTR__OBJC_CLASS___UIDevice_026ce400;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIDevice_026ce400,PTR_s_currentDevice_026ca5d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  return puVar5 == (undefined *)0x0;
}

