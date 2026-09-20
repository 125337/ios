// handleAddYuanbaoThen: @ 01cb924c

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendViewController::handleAddYuanbaoThen_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint local_cc;
  undefined8 *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  byte local_89;
  undefined8 *local_88;
  byte local_79;
  ID *local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4);
  puVar6 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_yuanbaoNeedsPrivacySheet_026c3390);
  IVar5 = local_28;
  puVar7 = local_40;
  puVar2 = PTR___NSConcreteStackBlock_02578660;
  local_79 = 0;
  local_89 = 0;
  local_cc = 0;
  bVar1 = ((ulong)puVar6 & 1) != 0;
  if (bVar1) {
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01cb9524;
    local_58 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_38;
    local_50 = IVar5;
    local_79 = 1;
    local_78 = &local_50;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_38;
    local_48 = uVar3;
    local_89 = 1;
    local_b8 = puVar2;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_01cb956c;
    local_a0 = &DAT_025814c8;
    local_c0 = &local_98;
    local_88 = &local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_presentYuanbaoPrivacySheetConfir_026c33a0,&local_70,&local_b8);
    local_cc = (uint)puVar7;
  }
  if (bVar1) {
    _objc_storeStrong(local_c0,0);
  }
  if ((local_89 & 1) != 0) {
    _objc_storeStrong(local_88,0);
  }
  if ((local_79 & 1) != 0) {
    _objc_storeStrong(local_78,0);
  }
  if ((local_cc & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finishAddYuanbaoThen__026c3398,local_38);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

