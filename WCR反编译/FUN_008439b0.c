// FUN_008439b0 @ 008439b0

uint FUN_008439b0(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  uint local_54;
  uint local_50;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  pcVar2 = "WCTimeLineViewController";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar1);
    local_50 = 1;
    if ((uVar3 & 1) != 0) goto LAB_00843a98;
  }
  local_54 = 0;
  if (pcVar2 != (char *)0x0) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar2);
    local_54 = (uint)uVar3;
  }
  local_50 = local_54;
LAB_00843a98:
  _objc_storeStrong(&local_18,0);
  return local_50 & 1;
}

