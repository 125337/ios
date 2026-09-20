// FUN_0033a1ec @ 0033a1ec

byte FUN_0033a1ec(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = "WCTimeLineViewController";
  _objc_getClass();
  pcVar2 = "WCTimelineActionSheet";
  _objc_getClass();
  if ((((pcVar1 == (char *)0x0) || (pcVar2 == (char *)0x0)) ||
      (uVar3 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1),
      (uVar3 & 1) == 0)) ||
     (uVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,pcVar2),
     (uVar3 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    uVar3 = local_28;
    FUN_0033d0d0();
    _objc_retainAutoreleasedReturnValue();
    local_11 = uVar3 == local_20;
    (*(code *)PTR__objc_release_02578630)();
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

