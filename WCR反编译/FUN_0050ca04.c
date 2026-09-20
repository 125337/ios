// FUN_0050ca04 @ 0050ca04

void FUN_0050ca04(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ulong local_38;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cb050)(param_1,param_2,param_3 & 1);
  FUN_0050ebd4();
  if ((param_1 & 1) != 0) {
    uVar1 = local_18;
    FUN_00517318();
    if ((uVar1 & 1) != 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_hideTips_026a47f8);
      local_30 = local_18;
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        local_58 = PTR___NSConcreteStackBlock_02578660;
        local_50 = 0xc2000000;
        local_4c = 0;
        local_48 = FUN_00517ab4;
        local_40 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = uVar1;
        _dispatch_async(puVar2,&local_58);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&local_38);
        _objc_storeStrong(&local_30,0);
      }
    }
  }
  return;
}

