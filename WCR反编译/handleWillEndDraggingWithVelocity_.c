// handleWillEndDraggingWithVelocity: @ 00068078

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRAutoScrollDriver::handleWillEndDraggingWithVelocity_
          (WCRAutoScrollDriver *this,ID param_1,SEL param_2,CGPoint param_3)

{
  ID IVar1;
  undefined *puVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  double in_d1;
  byte bVar5;
  double local_f8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [8];
  double local_b8;
  undefined1 auStack_b0 [15];
  undefined1 local_a1;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  undefined *local_58;
  undefined4 local_4c;
  ID local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  local_28 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_scrollView_0269dcc0,param_3.field0_0x0,param_3.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_38;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_canTakeOver_0269dd80);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stop_0269dd58);
    local_4c = 1;
  }
  else if (ABS(local_28) < ABS(local_30) * 1.5) {
    local_4c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    dVar3 = ABS(local_28);
    dVar4 = dVar3;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_WCRefineAutoScrollMinVelocity_0269dd88);
    if (dVar4 <= dVar3) {
      dVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_WCRefineAutoScrollSpeedFactor_0269dd90);
      local_68 = 0x40a4500000000000;
      local_70 = ABS(-(local_28 * dVar4));
      local_f8 = local_70;
      if (2600.0 < local_70) {
        local_f8 = 2600.0;
      }
      local_78 = local_f8;
      bVar5 = (byte)((ulong)-(local_28 * dVar4) >> 0x38);
      dVar3 = (double)(((ulong)bVar5 & 0x80) << 0x38);
      dVar4 = (double)(((ulong)CONCAT11((byte)((ulong)local_f8 >> 0x38) & 0x7f | bVar5 & 0x80,
                                        (char)((ulong)local_f8 >> 0x30)) & 0xfff8) << 0x30);
      local_60 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_minimumOffsetY_0269dcd8);
      local_80 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_maximumOffsetY_0269dcf0);
      local_88 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentOffset_0269dd18);
      if (((local_60 <= 0.0) || (local_a1 = true, dVar3 < local_88 - 1.0)) &&
         (local_a1 = false, local_60 < 0.0)) {
        local_a1 = dVar3 <= local_80 + 1.0;
      }
      local_a0 = dVar4;
      local_98 = dVar3;
      local_90 = dVar3;
      if ((bool)local_a1 == false) {
        _objc_initWeak(auStack_b0,local_38);
        puVar2 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_e0 = PTR___NSConcreteStackBlock_02578660;
        local_d8 = 0xc2000000;
        local_d4 = 0;
        local_d0 = FUN_00068428;
        local_c8 = &DAT_025799c0;
        _objc_copyWeak(auStack_c0,auStack_b0);
        local_b8 = local_60;
        _dispatch_async(puVar2,&local_e0);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_destroyWeak(auStack_c0);
        _objc_destroyWeak(auStack_b0);
        local_4c = 0;
      }
      else {
        local_4c = 1;
      }
    }
    else {
      local_4c = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
  return;
}

