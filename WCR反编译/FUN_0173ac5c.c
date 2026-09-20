// FUN_0173ac5c @ 0173ac5c

long FUN_0173ac5c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_50;
  long local_20;
  long local_18;
  
  local_18 = param_1;
  FUN_017444fc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_18;
  local_20 = param_1;
  FUN_0173835c();
  local_50 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,lVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_indexOfObject__0269e870);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_50 == 0x7fffffffffffffff) {
    local_50 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_50;
}

