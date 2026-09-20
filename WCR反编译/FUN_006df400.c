// FUN_006df400 @ 006df400

void FUN_006df400(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong local_60;
  byte local_51;
  ulong local_50;
  byte local_45;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0xfffffffffffffc19;
  uVar2 = local_28;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_cancelButtonIndex_026a6ca0);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cancelButtonIndex_026a6ca0);
    local_38 = uVar2;
  }
  local_45 = local_30 != 0xffffffffffffffff && local_30 != local_38;
  (*DAT_028cc2f8)(local_18,local_20,local_28,local_30);
  local_51 = 0;
  bVar1 = false;
  if ((local_45 & 1) != 0) {
    uVar2 = local_18;
    FUN_006e0078();
    bVar1 = false;
    if (uVar2 == 3) {
      uVar2 = local_18;
      FUN_006e129c();
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      bVar1 = uVar2 == 0;
      local_50 = uVar2;
    }
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar1) {
    uVar2 = local_18;
    FUN_006e134c();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_clearMsg_;
    local_60 = uVar2;
    _NSSelectorFromString();
    uVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar3);
    uVar2 = local_60;
    if ((uVar4 & 1) != 0) {
      uVar4 = local_18;
      FUN_006e0078();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,pcVar3,uVar4);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

