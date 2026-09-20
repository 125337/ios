// FUN_002a725c @ 002a725c

void FUN_002a725c(double param_1,ulong param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ulong local_98;
  ulong local_90;
  uint local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  byte local_58;
  byte local_55;
  ulong local_48;
  ulong local_40;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_31 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_transitionCoordinator_026a1c10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_40 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isHidden_026ca768);
  local_55 = true;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_alpha_026ca4d8);
    local_55 = param_1 <= DAT_02323d38;
  }
  uVar2 = local_28;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_55);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar2,&DAT_028c983b,puVar4,1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar3 = local_40;
  uVar2 = local_48;
  if ((local_40 != 0) && ((local_55 & 1) != 0)) {
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_002daddc;
    local_68 = &DAT_0257bb38;
    local_58 = local_55 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_animateAlongsideTransition_compl_026a1c28,0,&local_80);
    _objc_storeStrong(&local_60,0);
  }
  (*DAT_028c96c0)(local_28,local_30,local_31 & 1);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  bVar1 = ((ulong)puVar5 & 1) != 0;
  if (bVar1) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_90;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_002dae98;
    local_a0 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = uVar2;
    _dispatch_async(puVar4,&local_b8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
  }
  local_84 = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

