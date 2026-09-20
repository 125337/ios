// FUN_002739d4 @ 002739d4

void FUN_002739d4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  dispatch_time_t dVar6;
  undefined *puVar7;
  long lVar8;
  uint local_114;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  long local_38;
  long local_30;
  long local_28;
  
  uVar1 = param_1 + 0x28;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_40 = uVar1;
  if ((uVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_finished_026a15b0), (uVar1 & 1) != 0)) {
    local_50 = 1;
  }
  else {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mediaInfo_026a15e0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mediaWrap_026a15e8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_requiredFileFormat_026a15f0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    FUN_00273fec(uVar1,uVar2,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      if (local_30 < 1) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mediaInfo_026a15e0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        FUN_00274abc();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_69 = 0;
        uVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        local_114 = 0;
        if (uVar1 != 0) {
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mediaInfo_026a15e0);
          _objc_retainAutoreleasedReturnValue();
          local_69 = 1;
          local_68 = uVar1;
          FUN_00274fd4();
          local_114 = (uint)uVar1;
        }
        if ((local_69 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_68);
        }
        uVar1 = local_40;
        if ((local_114 & 1) == 0) {
          lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
          uVar5 = *(undefined8 *)(lVar8 + 0x28);
          *(undefined8 *)(lVar8 + 0x28) = 0;
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        else {
          uVar5 = 0xfffffffffffffff8;
          FUN_00272848(0xfffffffffffffff8,&cf__eN__bFON_f);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_finishWithPath_error__026a15f8,0);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
          uVar5 = *(undefined8 *)(lVar8 + 0x28);
          *(undefined8 *)(lVar8 + 0x28) = 0;
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        local_50 = 1;
        _objc_storeStrong(&local_60,0);
      }
      else {
        dVar6 = _dispatch_time(0,200000000);
        puVar7 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = PTR___NSConcreteStackBlock_02578660;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_002754d8;
        local_88 = &DAT_0257b178;
        local_80 = *(undefined8 *)(param_1 + 0x20);
        local_78 = local_30;
        _dispatch_after(dVar6,puVar7,&local_a0);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        local_50 = 0;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_finishWithPath_error__026a15f8,local_58,0);
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar5 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x28) = 0;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_50 = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

