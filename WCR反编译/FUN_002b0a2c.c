// FUN_002b0a2c @ 002b0a2c

ulong FUN_002b0a2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_026ce4d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSProcessInfo_026ce4d0,PTR_s_processInfo_026a1a38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return (ulong)puVar2 & 0xffffffff;
}

