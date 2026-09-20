// FUN_001c81a8 @ 001c81a8

void FUN_001c81a8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_68;
  ulong local_60;
  undefined1 local_51;
  ulong local_50 [4];
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_delegate);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_30 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_viewControllerForKey__026a0800,
             *(undefined8 *)PTR__UITransitionContextToViewControllerKey_02578228);
  _objc_retainAutoreleasedReturnValue();
  local_51 = local_30 != 0 && local_30 != uVar2;
  local_50[0] = uVar2;
  if (((bool)local_51) && (uVar2 = local_30, FUN_00219d50(), (uVar2 & 1) != 0)) {
    uVar2 = local_30;
    FUN_0021a0b4();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar2;
    if (uVar2 != 0) {
      FUN_001d031c(uVar2);
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_viewForKey__026a0808,
               *(undefined8 *)PTR__UITransitionContextFromViewKey_02578220);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    FUN_00215cb0(0x3ff0000000000000,0x3ff3333333333333,uVar2);
    FUN_00219988(local_68);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_flush_026a0810);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  (*DAT_028c8d20)(local_18,local_20,local_28);
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

