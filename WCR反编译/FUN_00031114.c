// FUN_00031114 @ 00031114

void FUN_00031114(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong local_138;
  ulong local_100;
  char *local_98 [2];
  char *local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  char *local_50;
  uint local_48;
  ulong local_38;
  ulong local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_28 = (char *)0x0;
    local_48 = 1;
    goto LAB_0003181c;
  }
  pcVar3 = "CMessageMgr";
  _objc_getClass();
  FUN_000323ec();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    local_61 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if ((uVar2 & 1) == 0) {
      local_100 = 0;
    }
    else {
      local_100 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_58 = local_100;
    local_79 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if ((uVar2 & 1) == 0) {
      local_138 = 0;
    }
    else {
      local_138 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_70 = local_138;
    if ((0 < (long)local_58) &&
       (pcVar3 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_GetMsg_LocalID__0269d5e8,local_38,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar3;
      if (pcVar3 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
      }
      local_48 = (uint)(pcVar3 != (char *)0x0);
      _objc_storeStrong(&local_88,0);
      if (local_48 != 0) goto LAB_000317fc;
    }
    if ((0 < (long)local_70) &&
       (pcVar3 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_n64SvrID__0269d5f0),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_GetMsg_n64SvrID__0269d5f0,local_38,local_70);
      _objc_retainAutoreleasedReturnValue();
      local_98[0] = pcVar3;
      if (pcVar3 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
      }
      local_48 = (uint)(pcVar3 != (char *)0x0);
      _objc_storeStrong(local_98,0);
      if (local_48 != 0) goto LAB_000317fc;
    }
    local_28 = (char *)0x0;
    local_48 = 1;
  }
LAB_000317fc:
  _objc_storeStrong(&local_50,0);
LAB_0003181c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

