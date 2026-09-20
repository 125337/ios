// FUN_00043738 @ 00043738

void FUN_00043738(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_e0;
  uint local_a4;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_payerUser);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_isChatroom);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a4 = 0;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_isChatroom);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a4 = (uint)pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_40[0];
  if ((local_a4 & 1) == 0) {
    pcVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
    pcVar1 = local_40[0];
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      if (((ulong)pcVar1 & 1) == 0) {
        local_e0 = local_28;
      }
      else {
        local_e0 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_e0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

