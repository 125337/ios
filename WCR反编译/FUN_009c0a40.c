// FUN_009c0a40 @ 009c0a40

byte FUN_009c0a40(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 1;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_providerID_0269d480);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_providerID_0269d480);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_009c14c0();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseURL);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_009c3b08();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLWithString__026a16d8);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_baseURL_026aade8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_009c3b08();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLWithString__026a16d8);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_host_0269dc50);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_host_0269dc50);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if ((puVar3 == (undefined *)0x0) ||
         (puVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
         puVar3 == (undefined *)0x0)) {
        local_11 = 1;
      }
      else {
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_50);
        local_11 = (byte)puVar3 & 1;
      }
      local_24 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      _objc_storeStrong(&local_38,0);
      _objc_storeStrong(&local_30,0);
    }
    else {
      local_11 = 0;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

