// FUN_015ef5d4 @ 015ef5d4

void FUN_015ef5d4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if (uVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setAvatarRestoreBlock__026b12f0,0);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_followAvatarUsername_026b1430);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFollowAvatarUsername__026b1440,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

