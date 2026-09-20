// applyAction:toUserNames:completion: @ 00ee1a1c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCRefineChatRoomMuteHelper::applyAction_toUserNames_completion_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  ID local_100;
  long local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  ID local_d8;
  long_long local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  ID local_50;
  long local_48;
  undefined8 local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_userNames_needingAction__026ab7d0,local_40,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
  if (IVar1 == 0) {
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x10))(local_48,0);
    }
    local_54 = 1;
  }
  else {
    local_f0 = &local_78;
    local_78 = 0;
    local_68 = 0x20000000;
    local_64 = 0x20;
    local_60 = 0;
    local_98 = 0;
    local_88 = 0x20000000;
    local_84 = 0x20;
    local_80 = 0;
    local_c8 = 0;
    local_b8 = 0x32000000;
    local_b4 = 0x30;
    local_b0 = FUN_00ee117c;
    local_a8 = FUN_00ee11b8;
    local_a0 = 0;
    ppuVar3 = &local_120;
    local_120 = PTR___NSConcreteStackBlock_02578660;
    local_118 = 0xc2000000;
    local_114 = 0;
    local_110 = FUN_00ee1d38;
    local_108 = &DAT_02581f20;
    IVar1 = local_50;
    local_c0 = &local_c8;
    local_90 = &local_98;
    local_70 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_48;
    local_100 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_28;
    local_d0 = local_38;
    local_f8 = lVar2;
    local_e8 = &local_c8;
    local_e0 = &local_98;
    _objc_retainBlock();
    uVar4 = local_c0[5];
    local_c0[5] = ppuVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (**(code **)(local_c0[5] + 0x10))();
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_100,0);
    __Block_object_dispose(&local_c8,8);
    _objc_storeStrong(&local_a0,0);
    __Block_object_dispose(&local_98,8);
    __Block_object_dispose(&local_78,8);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

