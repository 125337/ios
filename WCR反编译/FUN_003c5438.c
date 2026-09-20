// FUN_003c5438 @ 003c5438

byte FUN_003c5438(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (FUN_003c5414(), (uVar1 & 1) == 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_003c57ac();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsObject__0269cbb8,local_20);
    local_11 = (byte)uVar2 & 1;
    local_24 = 1;
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

