// FUN_009c9ac8 @ 009c9ac8

void FUN_009c9ac8(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *local_70;
  undefined *local_38;
  cfstringStruct *local_30;
  ulong local_28;
  cfstringStruct *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_baseURL_026aade8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  pcVar4 = local_20;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_30 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__);
  uVar2 = local_28;
  if ((uVar3 & 1) != 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringToIndex__0269d6c0,uVar3 - 1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  pcVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar4 = &cf__;
      (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stringByAppendingString__0269d398,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_URLWithString__026a16d8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar5;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar5 = local_38;
  FUN_009c907c();
  if (((ulong)puVar5 & 1) == 0) {
    local_70 = (undefined *)0x0;
  }
  else {
    local_70 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_70);
  return;
}

