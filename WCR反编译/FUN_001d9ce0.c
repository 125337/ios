// FUN_001d9ce0 @ 001d9ce0

byte FUN_001d9ce0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_70;
  ulong local_68;
  byte local_5a;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = &cf_WCListViewController;
    _NSClassFromString();
    pcVar2 = &cf_WCListView;
    local_30 = pcVar1;
    _NSClassFromString();
    pcVar1 = &cf_WCTimeLineViewController;
    local_48 = pcVar2;
    _NSClassFromString();
    pcVar2 = &cf_WCTimeLineTableView;
    local_50 = pcVar1;
    _NSClassFromString();
    uVar3 = local_20;
    local_59 = 0;
    local_5a = 0;
    local_58 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar3;
    for (local_70 = 0; local_68 != 0 && local_70 < 0x18; local_70 = local_70 + 1) {
      if ((local_30 != (cfstringStruct *)0x0) &&
         (uVar3 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isKindOfClass__0269cd68,local_30),
         (uVar3 & 1) != 0)) {
        local_59 = 1;
      }
      if ((local_48 != (cfstringStruct *)0x0) &&
         (uVar3 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isKindOfClass__0269cd68,local_48),
         (uVar3 & 1) != 0)) {
        local_59 = 1;
      }
      if ((local_50 != (cfstringStruct *)0x0) &&
         (uVar3 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isKindOfClass__0269cd68,local_50),
         (uVar3 & 1) != 0)) {
        local_5a = 1;
      }
      if ((local_58 != (cfstringStruct *)0x0) &&
         (uVar3 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isKindOfClass__0269cd68,local_58),
         (uVar3 & 1) != 0)) {
        local_5a = 1;
      }
      uVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_68;
      local_68 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_11 = 0;
    if ((local_59 & 1) != 0) {
      local_11 = local_5a ^ 1;
    }
    local_11 = local_11 & 1;
    local_24 = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

