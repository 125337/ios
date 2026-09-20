// FUN_004c0b44 @ 004c0b44

void FUN_004c0b44(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long local_50;
  undefined4 local_44;
  char *local_40 [3];
  char *local_28;
  undefined8 local_20;
  long local_18;
  
  pcVar1 = "MiYouViewController";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    pcVar1 = local_28;
    _objc_alloc_init();
    local_40[0] = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_44 = 1;
    }
    else {
      lVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar2;
      if (lVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar2,PTR_s_PushViewController_animated__0269cd40,local_40[0],1);
      }
      _objc_storeStrong(&local_50,0);
      local_44 = 0;
    }
    _objc_storeStrong(local_40,0);
  }
  return;
}

