// FUN_001a1034 @ 001a1034

byte FUN_001a1034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ulong local_98;
  undefined1 local_8a;
  byte local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  ulong local_70;
  byte local_62;
  byte local_61;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_40 == 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0 || bVar1) {
    local_21 = 0;
  }
  else {
    uVar4 = local_30;
    FUN_001a19d0();
    uVar5 = local_38;
    if ((uVar4 & 1) == 0) {
      uVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_section_0269e988);
      uVar4 = local_30;
      local_58 = uVar5;
      FUN_0018f6dc(local_30,uVar5,0);
      local_60 = uVar4;
      if ((((long)uVar4 < 1) ||
          (uVar5 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_row_0269e210),
          uVar5 != 0)) || (uVar5 = local_30, FUN_00190294(local_30,local_58), (uVar5 & 1) != 0)) {
        local_21 = 0;
      }
      else {
        local_61 = 0;
        uVar5 = local_30;
        FUN_00195f84(local_30,local_58,&local_61);
        local_62 = (byte)uVar5;
        if ((local_61 & 1) == 0) {
          uVar5 = local_30;
          FUN_00190028(local_30,local_58,local_60);
          local_62 = (byte)uVar5;
          FUN_0018fe24(local_30,local_58,(uint)uVar5 & 1);
        }
        if ((local_62 & 1) == 0) {
          local_21 = 0;
        }
        else {
          FUN_001a1aa8(local_30,local_58,1);
          uVar5 = local_38;
          puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar4 = local_38;
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_70 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_indexPathForSelectedRow_0269fd38);
            _objc_retainAutoreleasedReturnValue();
            local_78 = uVar4;
            if (((uVar4 != 0) &&
                ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_section_0269e988),
                uVar4 == local_58)) &&
               (uVar5 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_row_0269e210)
               , uVar5 == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_78,0);
            }
            FUN_001a1c5c(local_70,local_58);
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentOffset_0269dd18);
            local_89 = 1;
            uVar5 = local_70;
            local_88 = param_1;
            uStack_80 = param_2;
            FUN_001a1e68(local_70,local_58,local_60);
            local_8a = (undefined1)uVar5;
            if ((uVar5 & 1) == 0) {
              FUN_001a1aa8(local_30,local_58,0);
              uVar5 = local_70;
              puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
              local_b8 = PTR___NSConcreteGlobalBlock_02578658;
              local_b0 = 0xd0800000;
              local_ac = 0;
              local_a8 = FUN_001a2260;
              local_a0 = &DAT_0257a9d0;
              (*(code *)PTR__objc_retain_02578638)();
              local_98 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_performWithoutAnimation__0269e7e0,&local_b8);
              _objc_storeStrong(&local_98,0);
            }
            if ((local_89 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,uStack_80,local_70,PTR_s_setContentOffset_animated__0269ddd8,0);
            }
            _objc_storeStrong(&local_78);
            _objc_storeStrong(&local_70,0);
          }
          local_21 = 1;
        }
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_40,0);
      }
      local_21 = 1;
    }
  }
  local_50 = 1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

