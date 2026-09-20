// FUN_009d5804 @ 009d5804

void FUN_009d5804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_68;
  undefined8 local_28;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  puVar3 = PTR__OBJC_CLASS___NSURLRequest_026ce7e8;
  if (local_20 == (cfstringStruct *)0x0) {
    local_68 = &cf___;
  }
  else {
    local_68 = local_20;
  }
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_requestWithURL__026a16e0);
  _objc_retainAutoreleasedReturnValue();
  FUN_009d5ddc(uVar1,puVar3,local_28);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

