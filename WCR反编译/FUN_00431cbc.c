// FUN_00431cbc @ 00431cbc

void FUN_00431cbc(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_34;
  undefined *local_20;
  double local_18;
  
  local_18 = param_1;
  FUN_004327b4();
  local_18 = (double)(long)(param_1 * 100.0) / 100.0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  while( true ) {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf__);
    local_34 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf_0);
      local_34 = (uint)puVar1;
    }
    puVar1 = local_20;
    if ((local_34 & 1) == 0) break;
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_substringToIndex__0269d6c0,puVar2 + -1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_20;
    local_20 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__);
  puVar1 = local_20;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_substringToIndex__0269d6c0,puVar2 + -1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_20;
    local_20 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

