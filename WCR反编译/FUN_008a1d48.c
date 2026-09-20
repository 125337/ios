// FUN_008a1d48 @ 008a1d48

void FUN_008a1d48(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong local_18;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (DAT_028cdda8 != (code *)0x0) {
    uVar3 = local_18;
    (*DAT_028cdda8)(local_18,param_2);
    uVar1 = (uint)uVar3;
  }
  FUN_008a1ebc();
  if ((uVar1 & 1) != 0) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setUseVoIPLCK__026a9680);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUseVoIPLCK__026a9680,1);
    }
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_sendOpenLCKExpt_026a9690);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendOpenLCKExpt_026a9690);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

