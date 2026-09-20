// sendItems:toChatName:completion: @ 015ac81c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCRefineVoicePackSender::sendItems_toChatName_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  ID local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if ((lVar1 == 0) ||
     (lVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x10))(local_48,0);
    }
    local_4c = 1;
  }
  else {
    local_108 = &local_70;
    local_70 = 0;
    local_60 = 0x20000000;
    local_5c = 0x20;
    local_58 = 0;
    local_90 = 0;
    local_80 = 0x20000000;
    local_7c = 0x20;
    local_78 = 0;
    local_b0 = 0;
    local_a0 = 0x20000000;
    local_9c = 0x20;
    local_98 = 0;
    local_e0 = 0;
    local_d0 = 0x32000000;
    local_cc = 0x30;
    local_c8 = FUN_015a9c58;
    local_c0 = FUN_015a9c94;
    local_b8 = 0;
    ppuVar3 = &local_140;
    local_140 = PTR___NSConcreteStackBlock_02578660;
    local_138 = 0xc2000000;
    local_134 = 0;
    local_130 = FUN_015acbac;
    local_128 = &DAT_02587018;
    lVar1 = local_38;
    local_d8 = &local_e0;
    local_a8 = &local_b0;
    local_88 = &local_90;
    local_68 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_48;
    local_120 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_28;
    lVar1 = local_40;
    local_110 = lVar2;
    local_100 = &local_90;
    local_f8 = &local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = lVar1;
    local_f0 = &local_e0;
    _objc_retainBlock();
    uVar4 = local_d8[5];
    local_d8[5] = ppuVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (**(code **)(local_d8[5] + 0x10))();
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_120,0);
    __Block_object_dispose(&local_e0,8);
    _objc_storeStrong(&local_b8,0);
    __Block_object_dispose(&local_b0,8);
    __Block_object_dispose(&local_90,8);
    __Block_object_dispose(&local_70,8);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

