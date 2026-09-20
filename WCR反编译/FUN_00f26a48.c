// FUN_00f26a48 @ 00f26a48

void FUN_00f26a48(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  if ((local_18 != 0) &&
     (uVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_ringCoordinator_026abed0),
     (uVar2 & 1) != 0)) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ringCoordinator_026abed0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    local_20 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (local_20 != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setMute__026a0d20);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setMute__026a0d20,1);
    }
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_pause_0269f2d8);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pause_0269f2d8);
    }
    puVar1 = PTR_s_clear__026abed8;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_clear__026abed8);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,1);
    }
  }
  _objc_getClass();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

