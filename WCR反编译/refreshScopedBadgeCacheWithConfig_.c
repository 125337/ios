// refreshScopedBadgeCacheWithConfig: @ 015f6da0

/* Function Stack Size: 0x18 bytes */

bool __thiscall
WCRQuickChatRuntime::refreshScopedBadgeCacheWithConfig_
          (WCRQuickChatRuntime *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  double in_d0;
  byte local_41;
  undefined4 local_40;
  undefined4 local_3c;
  double local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  _CFAbsoluteTimeGetCurrent();
  uVar2 = local_30;
  local_38 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_quickChatBallShowBadge_026b1338);
  uVar1 = local_30;
  if ((uVar2 & 1) == 0) {
    DAT_028e3be8 = 0;
    DAT_028e3bec = 0;
    DAT_028e3bf0 = local_38;
    DAT_028e3bf8 = 1;
    local_11 = 0;
  }
  else if (((DAT_028e3bf8 & 1) == 0) || (0.35 <= local_38 - DAT_028e3bf0)) {
    local_40 = 0;
    local_41 = 0;
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_temporarilyHiddenUsernames_026b1630);
    _objc_retainAutoreleasedReturnValue();
    FUN_015f6f64(uVar1,IVar3,&local_40,&local_41);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    DAT_028e3be8 = local_40;
    DAT_028e3bec = local_41 & 1;
    DAT_028e3bf0 = local_38;
    DAT_028e3bf8 = 1;
    local_11 = 0;
  }
  else {
    local_11 = 1;
  }
  local_3c = 1;
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

