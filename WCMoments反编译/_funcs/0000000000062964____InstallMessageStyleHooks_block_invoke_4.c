// ___InstallMessageStyleHooks_block_invoke_4 @0x62964

void ___InstallMessageStyleHooks_block_invoke_4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_50;
  undefined8 local_48;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28));
  uVar2 = _MessageStyleEnabled(local_20);
  lVar1 = local_20;
  if ((uVar2 & 1) != 0) {
    _objc_msgSend_superview(local_20,local_48);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    if (lVar3 == 0) {
      local_50 = local_20;
    }
    _StyleMessageContent(lVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(lVar3);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

