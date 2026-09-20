// FUN_0041b48c @ 0041b48c

void FUN_0041b48c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined1 *puVar5;
  cfstringStruct *local_e8;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  uint local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_0040bb14(local_30,&cf_messageType);
  local_34 = (uint)pcVar1;
  uVar2 = (ulong)pcVar1 & 0xffffffff;
  FUN_0040bce0();
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__;
    local_48 = 1;
    goto LAB_0041b904;
  }
  uVar2 = (ulong)local_34;
  FUN_0040bcfc();
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__;
    local_48 = 1;
    goto LAB_0041b904;
  }
  uVar2 = (ulong)local_34;
  FUN_0040bd18();
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__;
    local_48 = 1;
    goto LAB_0041b904;
  }
  if (local_34 == 0x22) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__;
    local_48 = 1;
    goto LAB_0041b904;
  }
  if (local_34 - 0x2b == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__;
    local_48 = 1;
    goto LAB_0041b904;
  }
  pcVar1 = local_30;
  FUN_004055cc(local_34 - 0x2b,local_30,&cf_content);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)(ulong)(local_34 - 0x31);
  local_50 = pcVar1;
  if (local_34 - 0x31 == 0) {
    FUN_0040ca7c(0);
    puVar5 = (undefined1 *)((long)&pcVar1[-2].field0_0x0 + 7);
    if (puVar5 != (undefined1 *)0x0) goto LAB_0041b75c;
    pcVar1 = local_30;
    FUN_004055cc(local_30,&cf_type57Title);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_30;
    FUN_004055cc(local_30,&cf_type57ReferDisplay);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    FUN_0041f424();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_48 = 1;
  }
  else {
LAB_0041b75c:
    pcVar1 = local_30;
    FUN_0040ae9c(puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_e8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e8;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
    }
    else {
      pcVar4 = local_30;
      FUN_0041f71c(pcVar1,local_30,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar4;
    }
    local_48 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_50,0);
LAB_0041b904:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

