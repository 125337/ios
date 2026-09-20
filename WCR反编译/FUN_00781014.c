// FUN_00781014 @ 00781014

void FUN_00781014(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  uint local_3c;
  ulong local_38 [3];
  undefined8 local_20;
  ulong local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((((ulong)puVar2 & 1) != 0) &&
     (uVar3 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrefine_isMyMessage_026a42e0),
     (uVar3 & 1) == 0)) {
    uVar3 = local_18;
    FUN_00788488();
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = uVar3;
    if (uVar3 == 0) {
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_m_nsRealChatUsr_0269d190);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        uVar4 = local_38[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_48;
        local_48 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (uVar3 != 0) {
        uVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
        puVar1 = PTR___dispatch_main_q_02578680;
        local_50 = uVar4;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_50;
        local_80 = PTR___NSConcreteStackBlock_02578660;
        local_78 = 0xc2000000;
        local_74 = 0;
        local_70 = FUN_0078f224;
        local_68 = &DAT_02579ee0;
        local_58 = local_18;
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = uVar4;
        _dispatch_async(puVar1,&local_80);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_50,0);
      }
      local_3c = (uint)(uVar3 == 0);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(local_38,0);
  }
  return;
}

