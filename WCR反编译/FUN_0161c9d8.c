// FUN_0161c9d8 @ 0161c9d8

void FUN_0161c9d8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  undefined *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomPayload);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_chat_);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_48;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rangeOfString__0269d838,&cf_chat_);
    if (uVar1 == 0x7fffffffffffffff) {
      local_28 = 0;
    }
    else {
      uVar2 = local_48;
      local_20 = uVar1;
      local_18 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_substringFromIndex__0269d120,puVar3 + uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_28 = uVar2;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringFromIndex__0269d120,5);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_28 = uVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

