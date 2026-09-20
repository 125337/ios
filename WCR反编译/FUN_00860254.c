// FUN_00860254 @ 00860254

void FUN_00860254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_40 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasPrefix__0269d320,&cf_http___);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_https___),
       (uVar2 & 1) == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
      uVar2 = local_30;
      local_58 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_fileURLWithPath_isDirectory__026a8f30,uVar2,1);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_loadFileURL_allowingReadAccessTo_026a1cf8,local_58,local_60);
      _objc_unsafeClaimAutoreleasedReturnValue(uVar2);
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      local_40 = 0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_30);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_50 = puVar1;
      if (puVar1 != (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSURLRequest_026ce7e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURLRequest_026ce7e8,PTR_s_requestWithURL__026a16e0,puVar1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_loadRequest__026a1ce8);
        _objc_unsafeClaimAutoreleasedReturnValue(uVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_40 = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

