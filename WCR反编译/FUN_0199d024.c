// FUN_0199d024 @ 0199d024

void FUN_0199d024(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_50;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringByDeletingLastPathComponen_0269fb90);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  pcVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_50 = &cf_item;
  }
  else {
    local_50 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  lVar2 = local_28;
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = local_50;
  puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_stringWithFormat__0269cca8,&cf__WCRReplace______);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByStandardizingPath_026cab38);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar2);
  return;
}

