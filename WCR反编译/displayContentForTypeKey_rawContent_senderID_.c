// displayContentForTypeKey:rawContent:senderID: @ 010aec1c

/* Function Stack Size: 0x28 bytes */

ID WCRefineMessageSyncRule::displayContentForTypeKey_rawContent_senderID_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_c0;
  cfstringStruct *local_a8;
  uint local_8c;
  cfstringStruct *local_78;
  undefined4 local_6c;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  ulong local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  ulong local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  uVar1 = local_30;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_38;
  local_48 = uVar1;
  FUN_010aefd4(local_38,local_40);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_48;
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_text);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_refer);
    if ((uVar1 & 1) == 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_contentPlaceholderForTypeKey__026ae5d8,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_6c = 1;
      local_18 = pcVar2;
    }
    else {
      pcVar2 = local_50;
      FUN_010af220();
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_c0 = &::cf___;
      }
      else {
        local_c0 = local_78;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_c0;
      local_6c = 1;
      _objc_storeStrong(&local_78,0);
    }
  }
  else {
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_59 = 0;
    local_8c = 1;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_8c = 1;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_<);
        local_8c = (uint)pcVar3;
      }
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_18 = local_50;
    if ((local_8c & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_6c = 1;
    }
    else {
      pcVar2 = local_50;
      FUN_010af220();
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_a8 = &::cf___;
      }
      else {
        local_a8 = local_68;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a8;
      local_6c = 1;
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

