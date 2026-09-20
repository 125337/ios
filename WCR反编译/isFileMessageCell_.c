// isFileMessageCell: @ 00f3fa58

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonToolsHelper::isFileMessageCell_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  uint local_40;
  uint local_3c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = "AppFileMessageCellView";
  _objc_getClass();
  pcVar2 = "AppFileMessageCellViewV2";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,pcVar1);
    local_3c = 1;
    if ((uVar3 & 1) != 0) goto LAB_00f3fb1c;
  }
  local_40 = 0;
  if (pcVar2 != (char *)0x0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,pcVar2);
    local_40 = (uint)uVar3;
  }
  local_3c = local_40;
LAB_00f3fb1c:
  _objc_storeStrong(&local_28,0);
  return local_3c & 1;
}

