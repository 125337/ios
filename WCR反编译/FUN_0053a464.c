// FUN_0053a464 @ 0053a464

void FUN_0053a464(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined8 *local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  ulong local_68;
  undefined4 local_60;
  undefined8 *local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  undefined8 *puVar2;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar2 = &local_48;
  local_48 = 0;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  local_50 = param_5;
  FUN_0053a8c8();
  uVar4 = local_40;
  if ((uVar1 & 1) == 0) {
    puVar3 = local_30;
    (*DAT_028cb2a0)(local_30,local_38,local_40,local_48,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_60 = 1;
    local_28 = puVar3;
  }
  else {
    local_68 = 0;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) == 0) {
      if ((local_40 != 0) &&
         (uVar4 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_stringValue_0269ef08),
         (uVar4 & 1) != 0)) {
        uVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_stringValue_0269ef08);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_68;
        local_68 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
    }
    else {
      _objc_storeStrong(&local_68,local_40);
    }
    uVar4 = local_68;
    local_88 = 0;
    local_78 = 0x20000000;
    local_74 = 0x20;
    local_70 = 0;
    ppuVar6 = &local_c0;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_0053a964;
    local_a8 = &DAT_0257dd38;
    local_80 = &local_88;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = uVar4;
    local_98 = &local_88;
    _objc_retainBlock();
    puVar7 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_90 = ppuVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar3 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar7 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_sync();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      (*(code *)local_90[2])();
    }
    if ((*(byte *)(local_80 + 3) & 1) == 0) {
      puVar3 = local_30;
      (*DAT_028cb2a0)(local_30,local_38,local_40,local_48,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar3;
    }
    else {
      if (local_50 != (undefined8 *)0x0) {
        *local_50 = 0;
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar3;
    }
    local_60 = 1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_a0,0);
    __Block_object_dispose(&local_88,8);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

