// FUN_004e43b4 @ 004e43b4

byte FUN_004e43b4(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined *local_c0;
  byte local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_99;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  byte local_58;
  undefined4 local_44;
  undefined *local_40;
  byte local_31;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = PTR_s_onShowMsgReplyMenuItem__026a4380;
  local_31 = param_2;
  if (local_30 == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_onShowMsgReplyMenuItem__026a4380);
    puVar4 = PTR___dispatch_main_q_02578680;
    if ((uVar3 & 1) == 0) {
      local_90 = 0;
      local_98 = 0;
      local_99 = 0;
      local_a8 = 0;
      local_b0 = 0;
      uVar3 = local_30;
      FUN_004e67b4(local_30,local_40,&local_a8,&local_b0,&local_99);
      _objc_storeStrong(&local_90,local_a8);
      _objc_storeStrong(&local_98,local_b0);
      puVar4 = PTR___dispatch_main_q_02578680;
      if ((uVar3 & 1) == 0) {
        local_21 = 0;
        local_44 = 1;
      }
      else {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_90;
        local_f8 = PTR___NSConcreteStackBlock_02578660;
        local_f0 = 0xc2000000;
        local_ec = 0;
        local_e8 = FUN_004e7438;
        local_e0 = &DAT_0257d5b8;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_98;
        local_d8 = uVar2;
        local_c0 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        uVar3 = local_30;
        local_d0 = uVar1;
        local_b8 = local_31 & 1;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = uVar3;
        _dispatch_async(puVar4,&local_f8);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_21 = 1;
        local_44 = 1;
        _objc_storeStrong(&local_c8);
        _objc_storeStrong(&local_d0,0);
        _objc_storeStrong(&local_d8,0);
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_004e71ac;
      local_70 = &DAT_0257a120;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = uVar3;
      local_60 = local_40;
      local_58 = local_31 & 1;
      _dispatch_async(puVar4,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_21 = 1;
      local_44 = 1;
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

