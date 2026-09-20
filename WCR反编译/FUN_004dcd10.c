// FUN_004dcd10 @ 004dcd10

void FUN_004dcd10(double param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  ulong uVar6;
  byte local_104;
  uint local_e4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ulong local_80;
  undefined *local_78;
  double local_70;
  double local_68;
  undefined *local_60;
  byte local_53;
  byte local_52;
  byte local_51;
  undefined *local_50;
  undefined4 local_48;
  byte local_31;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_31 = param_4;
  if (((local_28 == 0) || (local_30 == 0)) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_state_026cab20),
     lVar2 != 3)) {
    local_48 = 1;
    goto LAB_004dd2e0;
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  if ((local_31 & 1) != 0) {
    FUN_004e1724(local_28);
  }
  uVar4 = local_28;
  FUN_004e074c();
  if ((uVar4 & 1) == 0) {
    if ((local_31 & 1) == 0) {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_messageDoubleTapTripleOnlyEnable_026a4308);
      local_104 = 0;
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_messageTripleTapEnabled_026a42f8);
        local_104 = (byte)puVar3 ^ 1;
      }
      local_53 = local_104 & 1;
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_messageDoubleTapEnabled_026a4300);
      if ((((ulong)puVar3 & 1) == 0) || ((local_53 & 1) != 0)) {
        local_48 = 1;
      }
      else {
        uVar4 = local_28;
        FUN_004e1974(local_28,0);
        FUN_004e1958();
        if ((uVar4 & 1) == 0) {
          local_48 = 1;
        }
        else {
          uVar4 = local_28;
          FUN_004e1ac8(local_28,local_50);
          if ((uVar4 & 1) == 0) goto LAB_004dd270;
          puVar3 = PTR__OBJC_CLASS___NSObject_026ce188;
          _objc_alloc_init();
          local_60 = puVar3;
          _objc_setAssociatedObject(local_28,&DAT_028cadf3,puVar3,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_messageTapMaxInterval_026a4310);
          local_68 = param_1;
          dVar5 = _dispatch_time(0,(long)(param_1 * 1000000000.0));
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_28;
          local_a0 = PTR___NSConcreteStackBlock_02578660;
          local_98 = 0xc2000000;
          local_94 = 0;
          local_90 = FUN_004e1d70;
          local_88 = &DAT_025796f0;
          (*(code *)PTR__objc_retain_02578638)();
          puVar1 = local_60;
          local_80 = uVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_78 = puVar1;
          local_70 = local_68;
          _dispatch_after(dVar5,puVar3,&local_a0);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_48 = 1;
          _objc_storeStrong(&local_78);
          _objc_storeStrong(&local_80,0);
          _objc_storeStrong(&local_60,0);
        }
      }
    }
    else {
      uVar4 = local_28;
      FUN_004e17b8();
      if ((uVar4 & 1) == 0) {
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_messageTripleTapEnabled_026a42f8);
        local_51 = (byte)puVar3;
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_messageDoubleTapEnabled_026a4300);
        local_e4 = 0;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_messageDoubleTapTripleOnlyEnable_026a4308);
          local_e4 = 0;
          if (((ulong)puVar3 & 1) != 0) {
            puVar3 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_messageTripleTapEnabled_026a42f8);
            local_e4 = (uint)puVar3 ^ 1;
          }
        }
        local_52 = (byte)local_e4 & 1;
        if (((local_51 & 1) == 0) && ((local_e4 & 1) == 0)) {
          local_48 = 1;
        }
        else {
          uVar4 = local_28;
          FUN_004e1974(local_28,1);
          FUN_004e1958();
          if ((uVar4 & 1) == 0) {
            local_48 = 1;
          }
          else {
LAB_004dd270:
            uVar4 = local_28;
            FUN_004e1974(local_28,local_31 & 1);
            uVar6 = uVar4;
            FUN_004e1958();
            if ((uVar6 & 1) == 0) {
              local_48 = 1;
            }
            else {
              FUN_004e20d0(local_28,uVar4);
              local_48 = 0;
            }
          }
        }
      }
      else {
        local_48 = 1;
      }
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_50,0);
LAB_004dd2e0:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

