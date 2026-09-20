// sendRepositoryItem:toChatName:completion: @ 015a97b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

bool WCRefineVoicePackSender::sendRepositoryItem_toChatName_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined8 local_50;
  long local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  uVar1 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar1 & 1) == 0) ||
     (lVar4 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    puVar2 = PTR_WCRefineMessageRepositoryStore_026ce120;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_messageItemsForItem__026ae578,
               local_40);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_21 = 0;
      local_54 = 1;
    }
    else {
      local_110 = &local_80;
      local_80 = 0;
      local_70 = 0x20000000;
      local_6c = 0x20;
      local_68 = 0;
      local_a0 = 0;
      local_90 = 0x20000000;
      local_8c = 0x20;
      local_88 = 0;
      local_c0 = 0;
      local_b0 = 0x20000000;
      local_ac = 0x20;
      local_a8 = 0;
      local_f0 = 0;
      local_e0 = 0x32000000;
      local_dc = 0x30;
      local_d8 = FUN_015a9c58;
      local_d0 = FUN_015a9c94;
      local_c8 = 0;
      ppuVar5 = &local_148;
      local_148 = PTR___NSConcreteStackBlock_02578660;
      local_140 = 0xc2000000;
      local_13c = 0;
      local_138 = FUN_015a9cc0;
      local_130 = &DAT_02586e98;
      puVar2 = local_60;
      local_e8 = &local_f0;
      local_b8 = &local_c0;
      local_98 = &local_a0;
      local_78 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_50;
      local_128 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      lVar4 = local_48;
      local_118 = uVar3;
      local_108 = &local_a0;
      local_100 = &local_c0;
      local_f8 = &local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = lVar4;
      _objc_retainBlock();
      uVar3 = local_e8[5];
      local_e8[5] = ppuVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar6 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      puVar2 = PTR___dispatch_main_q_02578680;
      if (((ulong)puVar6 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (**(code **)(local_e8[5] + 0x10))();
      }
      local_21 = 1;
      local_54 = 1;
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_128,0);
      __Block_object_dispose(&local_f0,8);
      _objc_storeStrong(&local_c8,0);
      __Block_object_dispose(&local_c0,8);
      __Block_object_dispose(&local_a0,8);
      __Block_object_dispose(&local_80,8);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

