// FUN_0163951c @ 0163951c

void FUN_0163951c(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  dispatch_time_t dVar4;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_b8;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  byte local_61;
  undefined8 local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  byte local_31;
  long local_30;
  long local_28;
  
  if ((DAT_028e3c90 & 1) != 0) {
    puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
    local_30 = param_2;
    local_28 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballAppearance_026b18a0);
    local_31 = puVar2 == (undefined *)0x0;
    if (((bool)local_31) || ((*(byte *)(param_2 + 0x40) & 1) != 0)) {
      FUN_01639914();
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_copy_0269d150);
      uVar1 = DAT_028e3c78;
      DAT_028e3c78 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      DAT_028e3ca8 = (long)(int)(uint)(*(long *)(param_2 + 0x28) == 1);
      if ((*(long *)(param_2 + 0x30) < 0) || (2 < *(long *)(param_2 + 0x30))) {
        local_b8 = 0;
      }
      else {
        local_b8 = *(undefined8 *)(param_2 + 0x30);
      }
      DAT_028e3cb0 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballSize_026b1b40);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      local_48 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_d0 = param_1;
      if (local_48 < param_1) {
        local_d0 = local_48;
      }
      local_58 = local_d0;
      local_40 = local_d0;
      DAT_028c6000 = local_d0;
      local_61 = 0;
      local_50 = param_1;
      if (((local_31 & 1) == 0) && ((*(byte *)(param_2 + 0x40) & 1) != 0)) {
        local_d8 = *(undefined8 *)(param_2 + 0x20);
        _WCRQuickChatHeadViewForUsername(local_d0);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = local_d8;
      }
      else {
        local_d8 = 0;
      }
      _objc_storeStrong(&DAT_028e3c80,local_d8);
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      FUN_01638e8c();
      if ((local_31 & 1) == 0) {
        local_78 = 0x3ff0000000000000;
        local_88 = 0x404e000000000000;
        local_90 = *(double *)(param_2 + 0x38);
        local_e0 = local_90;
        if (60.0 < local_90) {
          local_e0 = 60.0;
        }
        local_98 = local_e0;
        local_80 = local_e0;
        if (local_e0 <= 1.0) {
          local_e8 = 1.0;
        }
        else {
          local_e8 = local_e0;
        }
        local_a0 = local_e8;
        local_70 = local_e8;
        uVar3 = 0;
        _dispatch_block_create(0,&PTR___NSConcreteGlobalBlock_02587990);
        local_a8 = uVar3;
        _objc_retainBlock();
        uVar1 = DAT_028e3c88;
        DAT_028e3c88 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        dVar4 = _dispatch_time(0,(long)(local_70 * 1000000000.0));
        puVar2 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_after(dVar4,puVar2,local_a8);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&local_a8,0);
      }
    }
  }
  return;
}

