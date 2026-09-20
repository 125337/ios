// FUN_0074d2d0 @ 0074d2d0

void FUN_0074d2d0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined1 local_55;
  undefined1 local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  undefined *local_50;
  undefined4 local_48;
  ulong local_38;
  uint local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  local_2c = param_2;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_48 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_smallSignalEnhanceEnabled_026a7ca0);
    local_51 = (byte)puVar3;
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_smallSignalNotify31Enabled_026a7cc0);
    local_52 = (byte)puVar3;
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_smallSignalAutoBounceEnabled_026a7ce8);
    uVar1 = (uint)puVar3;
    local_53 = (byte)puVar3;
    FUN_00966a44();
    local_54 = (undefined1)uVar1;
    if (((((local_51 & 1) == 0) || ((local_52 & 1) == 0)) || ((local_53 & 1) == 0)) ||
       ((uVar1 & 1) == 0)) {
      local_48 = 1;
    }
    else {
      uVar2 = local_38;
      FUN_0074b910();
      if ((uVar2 & 1) == 0) {
        uVar2 = local_38;
        FUN_0074d680();
        local_55 = (undefined1)uVar2;
        if ((uVar2 & 1) == 0) {
          uVar1 = local_2c;
          FUN_0074d8d4();
          if ((uVar1 & 1) == 0) {
            local_48 = 1;
          }
          else {
            uVar2 = local_38;
            FUN_0074da2c();
            if ((uVar2 & 1) == 0) {
              local_48 = 1;
            }
            else {
              FUN_0074dcf8();
              local_60 = uVar2;
              dVar4 = _dispatch_time(0,450000000);
              puVar3 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = local_38;
              local_90 = PTR___NSConcreteStackBlock_02578660;
              local_88 = 0xc2000000;
              local_84 = 0;
              local_80 = FUN_0074de34;
              local_78 = &DAT_025791c0;
              local_68 = local_60;
              (*(code *)PTR__objc_retain_02578638)();
              local_70 = uVar2;
              _dispatch_after(dVar4,puVar3,&local_90);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              _objc_storeStrong(&local_70,0);
              local_48 = 0;
            }
          }
        }
        else {
          local_48 = 1;
        }
      }
      else {
        local_48 = 1;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

