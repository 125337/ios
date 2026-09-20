// FUN_004f8c50 @ 004f8c50

uint FUN_004f8c50(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  uint local_5c;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  local_5c = 0;
  if (lVar2 != 0) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    local_5c = (uint)lVar2;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_5c & 1;
}

