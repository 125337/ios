// ___isPlatformVersionAtLeast @ 0179bc30

byte ___isPlatformVersionAtLeast(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_11;
  
  if (param_1 == 2) {
    puVar1 = PTR__OBJC_CLASS___NSProcessInfo_026ce4d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSProcessInfo_026ce4d0,PTR_s_processInfo_026a1a38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)puVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

