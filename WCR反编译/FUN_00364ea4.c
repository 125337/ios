// FUN_00364ea4 @ 00364ea4

void FUN_00364ea4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [15];
  byte local_41;
  undefined *local_40;
  byte local_31;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &DAT_028ca0d8;
  _objc_loadWeakRetained();
  local_20 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_24 = 1;
  }
  else {
    FUN_003b4224();
    if (((ulong)puVar2 & 1) == 0) {
      local_24 = 1;
    }
    else {
      local_31 = 0;
      local_41 = 0;
      bVar1 = false;
      if (local_18 != (undefined *)0x0) {
        puVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mainFrame_026a2610);
        _objc_retainAutoreleasedReturnValue();
        local_31 = 1;
        bVar1 = false;
        local_30 = puVar2;
        if (puVar2 != (undefined *)0x0) {
          puVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mainFrame_026a2610);
          _objc_retainAutoreleasedReturnValue();
          local_41 = 1;
          bVar1 = puVar2 != local_18;
          local_40 = puVar2;
        }
      }
      if ((local_41 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      if ((local_31 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_30);
      }
      if (bVar1) {
        local_24 = 1;
      }
      else {
        puVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_liveRefreshScheduled_026a2e80);
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setLiveRefreshScheduled__026a2e88,1);
          _objc_initWeak(auStack_50,local_20);
          dVar3 = _dispatch_time(0,200000000);
          puVar2 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_78 = PTR___NSConcreteStackBlock_02578660;
          local_70 = 0xc2000000;
          local_6c = 0;
          local_68 = FUN_003b4484;
          local_60 = &DAT_0257be28;
          _objc_copyWeak(auStack_58,auStack_50);
          _dispatch_after(dVar3,puVar2,&local_78);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_destroyWeak(auStack_58);
          _objc_destroyWeak(auStack_50);
          local_24 = 0;
        }
        else {
          local_24 = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

