// ___InstallMessageStyleHooks_block_invoke @0x623ac

void ___InstallMessageStyleHooks_block_invoke(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28));
  _StyleMessageController(local_20);
  _objc_storeStrong(&local_20,0);
  return;
}

