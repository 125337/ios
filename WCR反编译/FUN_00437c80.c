// FUN_00437c80 @ 00437c80

void FUN_00437c80(undefined8 param_1,uint param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40 [3];
  undefined4 local_24;
  int local_20;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = param_3;
  local_1c = param_2;
  if ((local_18 == 0) || (param_3 != 0)) {
    local_24 = 1;
  }
  else if (param_2 < 3600000) {
    local_24 = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_isRecording_026a3a00);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isRecording_026a3a00)
       , (uVar1 & 1) != 0)) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_StopRecord_026a3a08);
      uVar1 = local_18;
      if ((uVar2 & 1) == 0) {
        local_24 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        puVar3 = PTR___dispatch_main_q_02578680;
        local_40[0] = uVar1;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_40[0];
        local_68 = PTR___NSConcreteStackBlock_02578660;
        local_60 = 0xc2000000;
        local_5c = 0;
        local_58 = FUN_00437ecc;
        local_50 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = uVar1;
        _dispatch_async(puVar3,&local_68);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_48);
        _objc_storeStrong(local_40,0);
        local_24 = 0;
      }
    }
    else {
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

