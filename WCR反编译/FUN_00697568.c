// FUN_00697568 @ 00697568

byte FUN_00697568(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  long local_38;
  ulong local_30;
  byte local_21;
  ulong *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  local_38 = param_2;
  FUN_0069569c();
  if ((uVar1 & 1) == 0) {
    local_21 = 0;
    local_48 = 1;
  }
  else if ((local_38 < 0) || (uVar3 = local_30, FUN_0069579c(), (uVar3 & 1) == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    local_50 = 0;
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_buttonTitleAtIndex__026a1248);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_buttonTitleAtIndex__026a1248,local_38);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_50 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_Kb_gSmR_YS);
    if ((uVar3 & 1) == 0) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      local_58 = 0;
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
      if ((uVar3 & 1) != 0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_delegate_0269e808);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_58;
        local_58 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_58;
      FUN_00695d60();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar3;
      dVar5 = _dispatch_time(0,350000000);
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_60;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_00697918;
      local_70 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = uVar3;
      _dispatch_after(dVar5,puVar6,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_21 = 1;
      local_48 = 1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

