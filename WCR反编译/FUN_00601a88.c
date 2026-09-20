// FUN_00601a88 @ 00601a88

/* WARNING: Removing unreachable block (ram,0x00601b70) */

void FUN_00601a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  long local_60;
  char *local_58;
  int local_4c;
  char *local_48;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithStyle__026ca710,0);
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_impactOccurred_026ca6a0);
  _objc_storeStrong(&local_30,0);
  pcVar2 = "WCRefineNavigationAvatarViewController";
  _objc_getClass();
  local_48 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_4c = 1;
  }
  else {
    _objc_alloc_init();
    local_58 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_4c = 1;
    }
    else {
      lVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_performSelector__026ca7b8,PTR_s_currentNavigationController_026a5e00
                );
      _objc_retainAutoreleasedReturnValue();
      local_60 = lVar3;
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar3,PTR_s_PushViewController_animated__0269cd40,local_58,1);
      }
      _objc_storeStrong(&local_60,0);
      local_4c = 0;
    }
    _objc_storeStrong(&local_58,0);
    if (local_4c == 0) {
      local_4c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

