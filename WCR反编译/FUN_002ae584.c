// FUN_002ae584 @ 002ae584

ulong FUN_002ae584(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_b8;
  ulong local_98;
  ulong local_40;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_002ae960(local_18,&cf_MMTabBarItemView);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = uVar1;
  FUN_002ae960(local_18,&cf_UITabBarButton);
  _objc_retainAutoreleasedReturnValue();
  local_98 = local_20;
  local_38[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  uVar1 = local_38[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_count_0269cfe0);
  if (local_98 < uVar1) {
    local_98 = uVar1;
  }
  local_40 = local_98;
  if (local_98 == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_b8 < 4) {
      local_b8 = 4;
    }
    local_40 = local_b8;
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return local_40;
}

