// FUN_0157b188 @ 0157b188

byte FUN_0157b188(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_80;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  byte local_39;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  FUN_01562e38();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  FUN_0157b838();
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  bVar1 = param_1 == 0;
  local_80 = param_1;
  local_28 = param_1;
  if (bVar1) {
    FUN_0157b998();
    _objc_retainAutoreleasedReturnValue();
    local_80 = param_1;
    local_38 = param_1;
  }
  local_39 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_80;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_30 == 0) ||
     (uVar3 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108),
     puVar4 = PTR___dispatch_main_q_02578680, (uVar3 & 1) == 0)) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_0157bc74;
    local_58 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_20;
    local_50 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar2;
    _dispatch_async(puVar4,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_11 = 1;
    local_40 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

