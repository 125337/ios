// FUN_00165158 @ 00165158

void FUN_00165158(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if ((uVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_cancelTopOfMsgSvrId__0269f7a0),
     (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_cancelTopOfMsgSvrId__0269f7a0,*(undefined8 *)(param_1 + 0x28));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

