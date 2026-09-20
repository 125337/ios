// FUN_0076e620 @ 0076e620

void FUN_0076e620(ulong param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint local_70;
  
  (*DAT_028cc920)(param_1,param_2,param_3 & 1);
  uVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isMovingFromParentViewController_0269f458);
  if (((uVar2 & 1) != 0) ||
     (uVar2 = param_1,
     (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isBeingDismissed_0269f460),
     (uVar2 & 1) != 0)) {
    FUN_0076b520();
    local_70 = 1;
    uVar1 = local_70;
    if ((param_1 & 1) == 0) {
      uVar3 = DAT_028cc8b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_pluginSponsorFlowID);
      local_70 = (uint)uVar3;
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_70;
      FUN_0076f5d0();
      (*(code *)PTR__objc_release_02578630)();
    }
    if ((uVar1 & 1) != 0) {
      FUN_0076c7f8();
      if ((local_70 & 1) == 0) {
        FUN_0076bfd0();
      }
      else {
        FUN_0076c7cc();
      }
    }
  }
  return;
}

