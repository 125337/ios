// FUN_0026e810 @ 0026e810

void FUN_0026e810(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_100;
  ulong local_f0;
  ulong local_c0;
  ulong local_a8;
  bool local_89;
  ulong local_88;
  ulong local_80;
  undefined4 local_78;
  bool local_71;
  ulong local_70;
  ulong local_68;
  bool local_59;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_a8 = local_30;
  FUN_0026f338(local_30,&cf_taskWrap);
  _objc_retainAutoreleasedReturnValue();
  local_59 = false;
  bVar1 = local_a8 == 0;
  local_38 = local_a8;
  if (bVar1) {
    local_a8 = 0;
  }
  else {
    FUN_0026fbfc(local_a8,PTR_s_task_026a1510);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a8;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_a8;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  local_71 = false;
  bVar1 = local_50[0] == 0;
  if (bVar1) {
    local_c0 = 0;
  }
  else {
    local_c0 = local_50[0];
    FUN_0026fbfc(local_50[0],PTR_s_messageWrap_0269d070);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_c0;
  }
  local_71 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_c0;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  uVar2 = local_68;
  FUN_0026ef1c();
  uVar3 = local_68;
  if ((uVar2 & 1) == 0) {
    local_f0 = local_30;
    FUN_0026f338(local_30,&cf_viewModel);
    _objc_retainAutoreleasedReturnValue();
    local_89 = local_f0 == 0;
    local_80 = local_f0;
    if (local_89) {
      local_f0 = 0;
    }
    else {
      FUN_0026fbfc(local_f0,PTR_s_messageWrap_0269d070);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_f0;
    }
    local_89 = !local_89;
    _objc_storeStrong(&local_68,local_f0);
    if (local_89) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    uVar3 = local_68;
    FUN_0026ef1c();
    if ((uVar3 & 1) == 0) {
      local_100 = 0;
    }
    else {
      local_100 = local_68;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_100;
    local_78 = 1;
    _objc_storeStrong(&local_80,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_78 = 1;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

