// FUN_01564e94 @ 01564e94

byte FUN_01564e94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  ulong local_f0;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  cfstringStruct *local_70;
  long local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if (((local_30 == 0) || (uVar3 = local_30, FUN_01564574(), (uVar3 & 1) != 0)) ||
     (uVar3 = local_30, FUN_01551a44(), (uVar3 & 1) == 0)) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    pcVar4 = &cf_openChatInfo_;
    _NSSelectorFromString();
    local_48 = pcVar4;
    if ((local_38 == 0) ||
       (uVar3 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar4),
       (uVar3 & 1) == 0)) {
      local_21 = 0;
      local_3c = 1;
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 0;
      local_f0 = uVar3;
      if (uVar3 == 0) {
        FUN_015611fc();
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_f0;
      }
      local_59 = uVar3 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_f0;
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_50 == 0) {
        local_21 = 0;
        local_3c = 1;
      }
      else {
        DAT_028e3a00 = DAT_028e3a00 + 1;
        local_68 = DAT_028e3a00;
        FUN_01566148(local_50);
        FUN_01566548(local_68);
        uVar3 = local_38;
        puVar1 = PTR___NSConcreteStackBlock_02578660;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_015666c4;
        local_80 = &DAT_0257cc98;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = uVar3;
        local_70 = local_48;
        FUN_015665f0(&local_98);
        dVar5 = _dispatch_time(0,120000000);
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_30;
        local_d0 = puVar1;
        local_c8 = 0xc2000000;
        local_c4 = 0;
        local_c0 = FUN_015667d0;
        local_b8 = &DAT_0257a740;
        (*(code *)PTR__objc_retain_02578638)();
        uVar3 = local_50;
        local_b0 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = uVar3;
        local_a0 = local_68;
        _dispatch_after(dVar5,puVar6,&local_d0);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_21 = 1;
        local_3c = 1;
        _objc_storeStrong(&local_a8);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

