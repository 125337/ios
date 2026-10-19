// ___WCMInstall_block_invoke @0x5c3c0

void ___WCMInstall_block_invoke(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_e8;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = &local_40;
  local_40 = 0;
  local_30 = 0x20000000;
  local_2c = 0x20;
  local_20 = param_1;
  local_18 = param_1;
  local_28 = _Install();
  local_58 = &local_60;
  local_60 = 0;
  local_50 = 0x20000000;
  local_4c = 0x20;
  local_48 = _RegisterPlugin();
  if (((*(byte *)(local_38 + 3) & 1) == 0) || ((*(byte *)(local_58 + 3) & 1) == 0)) {
    local_98 = &local_90;
    local_90 = 0;
    local_80 = 0x20000000;
    local_7c = 0x20;
    local_78 = 0;
    local_c8 = PTR___NSConcreteStackBlock_001104f0;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = ___WCMInstall_block_invoke_2;
    local_b0 = &___block_descriptor_56_e8_32r40r48r_e17_v16__0__NSTimer_8l;
    local_a8 = &local_40;
    local_a0 = &local_60;
    local_88 = local_98;
    uVar1 = _objc_msgSend_scheduledTimerWithTimeInterval_repeats_block_
                      (0x4000000000000000,&_OBJC_CLASS___NSTimer,local_e8,1,&local_c8);
    _objc_unsafeClaimAutoreleasedReturnValue(uVar1);
    __Block_object_dispose(&local_90,8);
    local_70 = 0;
  }
  else {
    local_70 = 1;
  }
  __Block_object_dispose(&local_60,8);
  __Block_object_dispose(&local_40,8);
  return;
}

