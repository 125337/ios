// FUN_002d8d78 @ 002d8d78

void FUN_002d8d78(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint local_6c;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_2 + 0x20;
  local_20 = param_2;
  local_18 = param_2;
  _objc_loadWeakRetained();
  uVar2 = param_2 + 0x28;
  local_28 = uVar1;
  _objc_loadWeakRetained();
  local_30 = uVar2;
  if ((local_28 == 0) || (uVar2 == 0)) {
    local_34 = 1;
  }
  else {
    uVar1 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c9805);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == local_30) {
      uVar1 = local_28;
      FUN_002d47d8(0);
      if (((uVar1 & 1) == 0) && (*(ulong *)(param_2 + 0x30) < 8)) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isHidden_026ca768);
        local_6c = 1;
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
          local_6c = 1;
          if (DAT_02323d38 < param_1) {
            uVar1 = local_28;
            FUN_002b83f8();
            local_6c = 1;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_28;
              FUN_002c73bc();
              local_6c = (uint)uVar1;
            }
          }
        }
        if ((local_6c & 1) == 0) {
          FUN_002b6e10(local_28,&cf_transitionOverlay_autoExpire,1);
          local_34 = 0;
        }
        else {
          FUN_002c3da8(local_28,&cf_transitionOverlay_autoExpire_hold);
          FUN_002d8bb4(local_28,local_30,*(long *)(param_2 + 0x30) + 1);
          local_34 = 1;
        }
      }
      else {
        FUN_002b6e10(local_28,&cf_transitionOverlay_autoExpire_pushedPage,0);
        FUN_002b6bb8(local_28,&cf_transitionOverlay_autoExpire_pushedPage,0);
        local_34 = 1;
      }
    }
    else {
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

