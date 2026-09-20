// FUN_005d5f88 @ 005d5f88

void FUN_005d5f88(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_onEditBlackList__026a5878);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,
               PTR_s_onClickComplainBtn_dataItem__026a5bd0);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_onClickComplainBtn_dataItem__026a5bd0,0,
                 *(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    DAT_028cb78a = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_onEditBlackList__026a5878,*(undefined8 *)(param_1 + 0x20));
    DAT_028cb78a = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

