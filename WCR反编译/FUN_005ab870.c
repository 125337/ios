// FUN_005ab870 @ 005ab870

void FUN_005ab870(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  long local_e0;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  long local_80;
  byte local_71;
  long local_70;
  long local_68;
  long local_60 [3];
  undefined4 local_44;
  long local_40;
  int local_34;
  undefined8 local_30;
  long local_28;
  
  local_34 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*DAT_028cb670)(param_1,param_2,param_3);
  lVar1 = DAT_028cb640;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = lVar1;
  if (((local_34 == 0) || (lVar1 == 0)) || ((DAT_028cb730 & 1) == 0)) {
    local_44 = 1;
  }
  else {
    lVar1 = local_28;
    FUN_0059d260(local_28,&cf_type);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (lVar2 == 0x12) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFavItem__026a55c0,local_28);
      DAT_028cb730 = 0;
      _objc_storeStrong(&DAT_028cb640,0);
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hostViewController_026a5b30);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_40;
      local_60[0] = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_openedNoteViewController_026a58e8);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 0;
      local_e0 = lVar2;
      if (lVar2 == 0) {
        local_e0 = local_60[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_e0;
      }
      local_71 = lVar2 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_e0;
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(lVar2);
      FUN_005cd67c(local_68,local_28);
      _objc_storeStrong(&DAT_028cb648,local_28);
      dVar3 = _dispatch_time(0,250000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_68;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_005cd7ec;
      local_88 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = lVar1;
      _dispatch_after(dVar3,puVar4,&local_a0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(local_60,0);
      local_44 = 0;
    }
    else {
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40,0);
  return;
}

