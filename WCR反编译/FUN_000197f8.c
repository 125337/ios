// FUN_000197f8 @ 000197f8

void FUN_000197f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong local_80;
  ulong local_50;
  uint local_48;
  byte local_31;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  local_31 = param_5;
  FUN_00021150(local_28,local_18);
  uVar4 = local_30;
  if ((uVar2 & 1) == 0) {
    pcVar3 = "CMessageWrap";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar3);
    if ((uVar4 & 1) == 0) {
      local_80 = 0;
    }
    else {
      local_80 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_80;
    uVar4 = local_28;
    FUN_000214d8(local_28,local_18,local_80);
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      (*DAT_028c7a20)(local_18,local_20,local_28,local_30,local_31 & 1);
    }
    local_48 = (uint)!bVar1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

