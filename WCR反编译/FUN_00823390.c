// FUN_00823390 @ 00823390

uint FUN_00823390(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  uint local_80;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = "NewSettingViewController";
  _objc_getClass();
  pcVar2 = "ContactsViewController";
  _objc_getClass();
  pcVar3 = "FindFriendEntryViewController";
  _objc_getClass();
  pcVar4 = "ChatRoomInfoViewController";
  _objc_getClass();
  pcVar5 = "AddContactToChatRoomViewController";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    uVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar1);
    local_80 = 1;
    if ((uVar6 & 1) != 0) goto LAB_008235a8;
  }
  if (pcVar2 != (char *)0x0) {
    uVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar2);
    local_80 = 1;
    if ((uVar6 & 1) != 0) goto LAB_008235a8;
  }
  if (pcVar3 != (char *)0x0) {
    uVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar3);
    local_80 = 1;
    if ((uVar6 & 1) != 0) goto LAB_008235a8;
  }
  if (pcVar4 != (char *)0x0) {
    uVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar4);
    local_80 = 1;
    if ((uVar6 & 1) != 0) goto LAB_008235a8;
  }
  if (pcVar5 != (char *)0x0) {
    uVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar5);
    local_80 = 1;
    if ((uVar6 & 1) != 0) goto LAB_008235a8;
  }
  uVar6 = local_18;
  FUN_0082e450();
  local_80 = (uint)uVar6;
LAB_008235a8:
  _objc_storeStrong(&local_18,0);
  return local_80 & 1;
}

