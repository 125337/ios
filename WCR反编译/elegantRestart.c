// elegantRestart @ 014addc0

/* Function Stack Size: 0x10 bytes */

void WCRefineRestar::elegantRestart(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID local_40;
  uint local_34;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_canPerformElegantRestart_026af408);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_performSimpleRelaunch_026af410);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_keyWindowFromApplication__026af418,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar2;
    if (IVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_performSimpleRelaunch_026af410);
      local_34 = 1;
    }
    else {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_screenshotFromWindow__026af420,IVar2);
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar3;
      if (IVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_performElegantRestartAnimationOn_026af428,local_30,IVar3);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_performSimpleRelaunch_026af410);
      }
      local_34 = (uint)(IVar3 == 0);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

