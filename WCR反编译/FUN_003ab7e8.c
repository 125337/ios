// FUN_003ab7e8 @ 003ab7e8

void FUN_003ab7e8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_48;
  ulong local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_48 = *(ulong *)(param_1 + 0x20);
  }
  else {
    local_48 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  FUN_003ab8cc(local_48);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

