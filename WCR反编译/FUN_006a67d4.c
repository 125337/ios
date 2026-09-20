// FUN_006a67d4 @ 006a67d4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006a67d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 *local_80;
  byte local_78;
  byte local_77;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined **local_50;
  byte local_46;
  byte local_45;
  undefined4 local_44;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined **local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (undefined **)0x0;
  _objc_storeStrong(&local_40,param_3);
  ppuVar5 = local_40;
  if (local_40 == (undefined **)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = ppuVar5;
    local_44 = 1;
  }
  else {
    puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,
               PTR_s_isNotificationDisguiseSnapshotEn_026a6658);
    local_45 = (byte)puVar1;
    puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,
               PTR_s_isNotificationSuppressSnapshotEn_026a6660);
    ppuVar5 = local_40;
    local_46 = (byte)puVar1;
    if (((local_45 & 1) == 0) && (((ulong)puVar1 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = ppuVar5;
      local_44 = 1;
    }
    else {
      ppuVar2 = local_40;
      _objc_retainBlock();
      local_80 = &local_70;
      local_70 = 0;
      local_60 = 0x20000000;
      local_5c = 0x20;
      local_58 = 0;
      ppuVar5 = &local_b8;
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_006a6ae4;
      local_a0 = &DAT_0257eba8;
      local_78 = local_46 & 1;
      uVar3 = local_30;
      local_68 = local_80;
      local_50 = ppuVar2;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_38;
      local_98 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      ppuVar2 = local_50;
      local_90 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = ppuVar2;
      local_77 = local_45 & 1;
      (*(code *)PTR__objc_msgSend_02578628)(ppuVar5,PTR_s_copy_0269d150);
      local_28 = ppuVar5;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_98,0);
      local_44 = 1;
      __Block_object_dispose(&local_70,8);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

