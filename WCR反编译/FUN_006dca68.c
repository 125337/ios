// FUN_006dca68 @ 006dca68

void FUN_006dca68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = 0 < DAT_028cc290;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) == 0 || bVar1) {
    (*DAT_028cc2a0)(local_28,local_30,local_38,local_40);
    local_50 = 1;
  }
  else {
    uVar5 = local_38;
    FUN_006dd574();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar5;
    FUN_006dd734();
    uVar2 = (uint)uVar5;
    if ((uVar5 & 1) == 0) {
      (*DAT_028cc2a0)(local_28,local_30,local_38,local_40);
      local_50 = 1;
    }
    else {
      FUN_006dd8d0();
      if (((uVar2 & 1) == 0) && (uVar5 = local_58, FUN_006dd8e4(), (uVar5 & 1) == 0)) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        uVar5 = local_58;
        if (puVar4 == (undefined *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          puVar3 = PTR___dispatch_main_q_02578680;
          local_60 = uVar5;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_60;
          local_88 = PTR___NSConcreteStackBlock_02578660;
          local_80 = 0xc2000000;
          local_7c = 0;
          local_78 = FUN_006ddadc;
          local_70 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = uVar5;
          _dispatch_async(puVar3,&local_88);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_68);
          _objc_storeStrong(&local_60,0);
        }
        else {
          FUN_006ddb0c(local_58,local_28,local_40);
        }
        local_50 = 0;
      }
      else {
        (*DAT_028cc2a0)(local_28,local_30,local_38,local_40);
        local_50 = 1;
      }
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

