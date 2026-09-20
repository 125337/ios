// FUN_0091f28c @ 0091f28c

void FUN_0091f28c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_28 = PTR_s_initWithViewController__026aa4f8;
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _objc_alloc();
  local_30 = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,local_28);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_28,0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = DAT_028ce370;
      DAT_028ce370 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      goto LAB_0091f3ac;
    }
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = DAT_028ce370;
  DAT_028ce370 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
LAB_0091f3ac:
  _objc_storeStrong(&local_30,0);
  return;
}

