// FUN_00025d4c @ 00025d4c

ulong FUN_00025d4c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  ulong local_110;
  ulong local_108;
  ulong local_e8;
  ulong local_e0;
  ulong local_88;
  undefined4 local_7c;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  int local_5c;
  ulong local_58;
  int local_50;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionReplyStyle);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if (uVar1 == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionQuoteReplyEnabled);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar1;
    if (uVar1 == 0) {
      local_108 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_chatAgentReplyStyle_0269d3b0);
      if (2 < (long)local_108) {
        local_108 = 2;
      }
      if ((long)local_108 < 1) {
        local_110 = 0;
      }
      else {
        local_110 = local_108;
      }
      local_28 = local_110;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
      iVar2 = 0;
      if ((uVar1 & 1) == 0) {
        iVar2 = 2;
      }
      local_28 = (ulong)iVar2;
    }
    local_7c = 1;
    _objc_storeStrong(&local_88,0);
  }
  else {
    local_50 = 0;
    local_5c = 2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_integerValue_026ca750);
    local_e0 = uVar1;
    if ((long)local_5c < (long)uVar1) {
      local_e0 = (long)local_5c;
    }
    local_70 = local_e0;
    local_58 = local_e0;
    if ((long)local_50 < (long)local_e0) {
      local_e8 = local_e0;
    }
    else {
      local_e8 = (ulong)local_50;
    }
    local_78 = local_e8;
    local_28 = local_e8;
    local_7c = 1;
    local_68 = uVar1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

