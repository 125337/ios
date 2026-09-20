// FUN_0067aa78 @ 0067aa78

void FUN_0067aa78(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  dispatch_time_t dVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  long local_58;
  ulong local_50;
  undefined4 local_48;
  long local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = true;
  if ((((ulong)puVar3 & 1) != 0) && (bVar1 = true, local_28 != 0)) {
    bVar1 = local_30 == 0;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (bVar1) {
    local_48 = 1;
  }
  else {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_revokeSendPat__026a63f8);
    if ((uVar4 & 1) == 0) {
      local_48 = 1;
    }
    else {
      uVar4 = local_30;
      FUN_0067ae84();
      local_50 = uVar4;
      if (uVar4 - 4 == 0) {
        local_48 = 1;
      }
      else {
        uVar5 = local_30;
        FUN_0067afc8(uVar4 - 4);
        if ((uVar5 & 1) == 0) {
          local_48 = 1;
        }
        else if ((local_50 == 1) && (0 < local_38)) {
          dVar6 = _dispatch_time(0,250000000);
          puVar2 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_28;
          local_88 = PTR___NSConcreteStackBlock_02578660;
          local_80 = 0xc2000000;
          local_7c = 0;
          local_78 = FUN_0067b1d8;
          local_70 = &DAT_025796f0;
          (*(code *)PTR__objc_retain_02578638)();
          uVar4 = local_30;
          local_68 = uVar5;
          (*(code *)PTR__objc_retain_02578638)();
          local_60 = uVar4;
          local_58 = local_38;
          _dispatch_after(dVar6,puVar2,&local_88);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_48 = 1;
          _objc_storeStrong(&local_60);
          _objc_storeStrong(&local_68,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_revokeSendPat__026a63f8,local_30);
          local_48 = 0;
        }
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

