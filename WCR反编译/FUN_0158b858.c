// FUN_0158b858 @ 0158b858

void FUN_0158b858(long param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar2 = param_1 + 0x30;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar2;
  if (uVar2 != 0) {
    pcVar1 = &cf_setMemberLogic_;
    _NSSelectorFromString();
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) == 0) {
      FUN_0158b6a4(local_28,"m_memberData",*(undefined8 *)(param_1 + 0x20));
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar1,*(undefined8 *)(param_1 + 0x20));
    }
    pcVar1 = &cf_reloadMemberList_;
    _NSSelectorFromString();
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),pcVar1,*(undefined8 *)(param_1 + 0x28));
    }
    pcVar1 = &cf_onCRGDataUpdated;
    _NSSelectorFromString();
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar1);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

