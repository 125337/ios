// FUN_00348088 @ 00348088

void FUN_00348088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_a8;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if (local_30 == 0) {
    local_34 = 1;
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_homeAvatarStripRowIndexForUserna_026a24b8,local_28);
    local_48 = puVar4;
    if ((long)puVar4 < 0) {
      local_48 = (undefined *)0x0;
    }
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_homeAvatarStripUsernamesForRow__026a24c0,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_a8 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_a8;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar2 = local_30;
    puVar1 = local_50;
    puVar4 = PTR_WCRefineGroupManagementViewController_026ce580;
    uVar5 = *(undefined8 *)PTR____NSArray0___02578280;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00350eb4;
    local_70 = &DAT_0257c4e8;
    local_58 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_28;
    local_68 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_presentSessionSelectPickerFromVi_026a24d0,lVar2,&cf_fbcT_N,uVar5,
               &local_88);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

