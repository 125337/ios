// FUN_016b0498 @ 016b0498

byte FUN_016b0498(undefined8 param_1,byte param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  dispatch_time_t dVar8;
  undefined *local_170;
  uint local_10c;
  cfstringStruct *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  bool local_b1;
  undefined *local_b0;
  undefined *local_a8 [2];
  ulong local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  ulong local_80;
  ulong local_78;
  undefined4 local_70;
  byte local_69;
  undefined *local_68;
  ulong local_50;
  byte local_41;
  ulong local_40;
  byte local_31;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar3 = local_40;
  local_41 = param_2;
  FUN_016af464();
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  local_10c = 0;
  if (uVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_10c = (uint)puVar4;
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_10c & 1) == 0) {
    uVar3 = local_40;
    FUN_016aa360();
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar3;
    if (uVar3 == 0) {
      if ((local_41 & 1) != 0) {
        FUN_016abf68(&cf_elSeNOo_);
      }
      local_31 = 0;
      local_70 = 1;
    }
    else {
      uVar5 = local_40;
      FUN_016b1170(local_40,uVar3);
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
      if (uVar5 == 0) {
        if ((local_41 & 1) != 0) {
          FUN_016abf68(&cf_elSOOo_);
        }
        local_31 = 0;
        local_70 = 1;
      }
      else {
        pcVar6 = &cf_MsgFileDetailLogicController;
        _NSClassFromString();
        pcVar7 = &cf_initWithMsgWrap_userName_;
        local_88 = pcVar6;
        _NSSelectorFromString();
        local_90 = pcVar7;
        if ((local_88 == (cfstringStruct *)0x0) ||
           (pcVar6 = local_88,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_88,PTR_s_instancesRespondToSelector__0269da90,pcVar7),
           ((ulong)pcVar6 & 1) == 0)) {
          if ((local_41 & 1) != 0) {
            FUN_016abf68(&cf_N_1Y___N_ec);
          }
          local_31 = 0;
          local_70 = 1;
        }
        else {
          local_28 = &DAT_028e3ea0;
          local_30 = 0;
          _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02588070);
          if (*local_28 + 1 != 0) {
            _dispatch_once(*local_28 + 1,local_28,local_30);
          }
          _objc_storeStrong(&local_30,0);
          local_98 = 0;
          uVar3 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMesLocalID_0269d238);
          if ((uVar3 & 1) != 0) {
            uVar3 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_m_uiMesLocalID_0269d238);
            local_98 = uVar3;
          }
          local_b1 = false;
          bVar1 = local_98 == 0;
          if (bVar1) {
            local_170 = (undefined *)0x0;
          }
          else {
            local_170 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,local_98);
            _objc_retainAutoreleasedReturnValue();
            local_b0 = local_170;
          }
          local_b1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_a8[0] = local_170;
          if ((local_b1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b0);
          }
          if ((local_a8[0] == (undefined *)0x0) ||
             (uVar3 = DAT_028e3e98,
             (*(code *)PTR__objc_msgSend_02578628)
                       (DAT_028e3e98,PTR_s_containsObject__0269cbb8,local_a8[0]), (uVar3 & 1) == 0))
          {
            if (local_a8[0] != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_028e3e98,PTR_s_addObject__0269d180,local_a8[0]);
              dVar8 = _dispatch_time(0,90000000000);
              puVar4 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = local_a8[0];
              local_e0 = PTR___NSConcreteStackBlock_02578660;
              local_d8 = 0xc2000000;
              local_d4 = 0;
              local_d0 = FUN_016b1590;
              local_c8 = &DAT_02578c20;
              (*(code *)PTR__objc_retain_02578638)();
              local_c0 = puVar2;
              _dispatch_after(dVar8,puVar4,&local_e0);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              _objc_storeStrong(&local_c0,0);
            }
            pcVar6 = local_88;
            _objc_alloc();
            pcVar7 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,local_90,local_78,local_80);
            _objc_retainAutoreleasedReturnValue();
            local_e8 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            if (local_e8 == (cfstringStruct *)0x0) {
              if (local_a8[0] != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (DAT_028e3e98,PTR_s_removeObject__0269d678,local_a8[0]);
              }
              if ((local_41 & 1) != 0) {
                FUN_016abf68(&cf_N_1Y_);
              }
            }
            else {
              _objc_setAssociatedObject(local_40,&DAT_028e3ea8,local_e8,1);
              pcVar6 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_respondsToSelector__026ca818,
                         PTR_s_startDownloadAppMsgUploading_0269dab8);
              if (((ulong)pcVar6 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_startDownloadAppMsgUploading_0269dab8);
              }
              pcVar6 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_startDownload_0269dac0);
              if (((ulong)pcVar6 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_startDownload_0269dac0);
              }
            }
            local_31 = 0;
            local_70 = 1;
            _objc_storeStrong(&local_e8,0);
          }
          else {
            local_31 = 0;
            local_70 = 1;
          }
          _objc_storeStrong(local_a8,0);
        }
      }
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78,0);
  }
  else {
    local_31 = 1;
    local_70 = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

