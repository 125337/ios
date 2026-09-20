// FUN_01744b38 @ 01744b38

void FUN_01744b38(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar2 = *(long *)(lVar3 + 0x18) + 1;
    *(long *)(lVar3 + 0x18) = lVar2;
  }
  _objc_storeStrong(lVar2,&local_20,0);
  return;
}

