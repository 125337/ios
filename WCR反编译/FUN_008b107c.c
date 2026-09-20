// FUN_008b107c @ 008b107c

/* WARNING: Removing unreachable block (ram,0x008b119c) */

void FUN_008b107c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  uint local_194;
  ulong local_138;
  ulong local_128;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ulong local_b0 [2];
  byte local_99;
  undefined *local_98;
  ulong local_90;
  ulong local_88 [2];
  undefined1 local_71;
  ulong local_70;
  byte local_61;
  ulong local_60;
  byte local_51;
  int local_50;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = &local_40;
  local_40 = 0;
  _objc_storeStrong(puVar2,param_4);
  FUN_008b4e10();
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028cdfa8)(local_28,local_30,local_38,local_40);
    local_50 = 1;
    goto LAB_008b19f4;
  }
  FUN_008c0c98();
  if (((ulong)puVar2 & 1) != 0) {
    local_51 = 0;
    (*DAT_028cdfa8)(local_28,local_30,local_38,local_40);
    local_50 = 0;
    FUN_008c0ca8(0x4008000000000000);
    if ((local_51 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x8b118c);
      (*pcVar1)();
    }
    local_50 = 1;
    goto LAB_008b19f4;
  }
  uVar3 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028ce013);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  local_60 = uVar3;
  _objc_getAssociatedObject(local_28,&DAT_028ce014);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_61 = (byte)uVar3;
  uVar3 = local_38;
  FUN_008b50d8();
  if ((((uVar3 & 1) == 0) || ((local_61 & 1) == 0)) || (local_60 != 0)) {
    uVar3 = local_38;
    FUN_008b50d8();
    if ((uVar3 & 1) == 0) {
      uVar3 = local_38;
      FUN_008c32a0();
      if ((uVar3 & 1) == 0) {
        local_138 = 0;
      }
      else {
        local_138 = local_60;
      }
      local_128 = local_138;
    }
    else {
      local_128 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_128;
    if ((local_128 == 0) || (FUN_008b50d8(), (local_128 & 1) == 0)) {
LAB_008b19a8:
      (*DAT_028cdfa8)(local_28,local_30,local_38,local_40);
      local_50 = 0;
    }
    else {
      uVar3 = local_70;
      FUN_008c38d0(local_70,local_40);
      local_71 = (undefined1)uVar3;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_70;
        _objc_getAssociatedObject(local_70,&DAT_028ce039);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 0;
        local_90 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
        local_194 = 0;
        if (uVar3 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          local_98 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_194 = (uint)puVar5;
        }
        if ((local_99 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        if ((local_194 & 1) == 0) {
          local_50 = 0;
        }
        else {
          _objc_setAssociatedObject(local_28,&DAT_028ce013,0,1);
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_onForwardMessageSend_026a9b58
                    );
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onForwardMessageSend_026a9b58);
          }
          FUN_008b6b2c(&cf_S1Y__9e_ueNlS);
          dVar6 = _dispatch_time(0,450000000);
          puVar5 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_90;
          local_d0 = PTR___NSConcreteStackBlock_02578660;
          local_c8 = 0xc2000000;
          local_c4 = 0;
          local_c0 = FUN_008c4360;
          local_b8 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0[0] = uVar3;
          _dispatch_after(dVar6,puVar5,&local_d0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_50 = 1;
          _objc_storeStrong(local_b0,0);
        }
        _objc_storeStrong(&local_90,0);
        if (local_50 == 0) goto LAB_008b19a8;
      }
      else {
        _objc_setAssociatedObject(local_28,&DAT_028ce013,0,1);
        uVar3 = local_28;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,&DAT_028ce014,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_onForwardMessageSend_026a9b58);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onForwardMessageSend_026a9b58);
        }
        uVar3 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028ce012);
        _objc_retainAutoreleasedReturnValue();
        local_88[0] = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_wcr_closeFavoritePage_026a99c8);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_wcr_closeFavoritePage_026a99c8);
        }
        local_50 = 1;
        _objc_storeStrong(local_88,0);
      }
    }
    _objc_storeStrong(&local_70,0);
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_onForwardMessageSend_026a9b58);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onForwardMessageSend_026a9b58);
    }
    local_50 = 1;
  }
  _objc_storeStrong(&local_60,0);
LAB_008b19f4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

