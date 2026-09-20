// _WCRChatToolbarResolvedTitle @ 00ef4d84

void _WCRChatToolbarResolvedTitle(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *local_c8;
  uint local_7c;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  ulong local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomTitle);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pcVar1 = local_30;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_00eee23c();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_00eeec64();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_40;
    pcVar1 = &cf_call;
    FUN_00ef5110();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isEqualToString__0269ccc8);
    pcVar3 = local_40;
    local_49 = 0;
    local_7c = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = &cf_video_call;
      FUN_00ef5110();
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8);
      local_7c = (uint)pcVar3;
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if ((local_7c & 1) == 0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_00eee23c();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_c8 = &cf__g_TT;
      }
      else {
        local_c8 = local_58;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_c8;
      local_34 = 1;
      _objc_storeStrong(&local_58,0);
    }
    else {
      uVar4 = local_28;
      FUN_00ef51a0();
      local_18 = &cf_format_s_;
      if ((uVar4 & 1) == 0) {
        local_18 = &cf_format_s_;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

