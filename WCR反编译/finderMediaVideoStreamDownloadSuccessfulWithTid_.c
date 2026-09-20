// finderMediaVideoStreamDownloadSuccessfulWithTid: @ 002735b4

/* Function Stack Size: 0x18 bytes */

void WCRFinderDLWaiter::finderMediaVideoStreamDownloadSuccessfulWithTid_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  uint local_e4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [15];
  byte local_51;
  ID local_50;
  undefined4 local_48;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finished_026a15b0);
  if ((IVar1 & 1) == 0) {
    local_51 = 0;
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tid_026a15d8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e4 = 0;
    if (IVar2 != 0) {
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      local_e4 = 0;
      if (lVar3 != 0) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tid_026a15d8);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_e4 = (uint)IVar2 ^ 1;
      }
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((local_e4 & 1) == 0) {
      _objc_initWeak(auStack_60,local_28);
      local_90 = 0;
      local_80 = 0x32000000;
      local_7c = 0x30;
      local_78 = FUN_0027396c;
      local_70 = FUN_002739a8;
      local_68 = 0;
      ppuVar4 = &local_c0;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_002739d4;
      local_a8 = &DAT_0257b1a8;
      local_88 = &local_90;
      _objc_copyWeak(auStack_98,auStack_60);
      local_a0 = &local_90;
      _objc_retainBlock();
      uVar5 = local_88[5];
      local_88[5] = ppuVar4;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (**(code **)(local_88[5] + 0x10))(local_88[5],10);
      __Block_object_dispose(&local_90,8);
      _objc_storeStrong(&local_68,0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_60);
      local_48 = 0;
    }
    else {
      local_48 = 1;
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

