// FUN_000e3de4 @ 000e3de4

bool FUN_000e3de4(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long local_40;
  long local_38 [3];
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  FUN_000e07e8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_18;
  local_20 = lVar2;
  FUN_000dc670();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_20;
  local_38[0] = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  bVar1 = true;
  if (lVar2 == 0) {
    lVar2 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_selectedSegmentIndex_0269e998);
    bVar1 = 0 < lVar2;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

