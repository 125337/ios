// FUN_008e74e8 @ 008e74e8

byte FUN_008e74e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_140;
  ulong local_f8;
  cfstringStruct *local_b8;
  cfstringStruct *local_70;
  ulong local_68;
  ulong local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  cfstringStruct *local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_30;
  FUN_008ed4f0();
  if ((uVar1 & 1) == 0) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_58;
    FUN_008ed910();
    if (((ulong)pcVar2 & 1) == 0) {
      uVar1 = local_30;
      FUN_008edb44(local_30,local_38,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_f8 = uVar4;
      if (uVar4 == 0) {
        local_f8 = 0;
      }
      FUN_008ed910();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((local_f8 & 1) == 0) {
        uVar1 = local_30;
        FUN_008ea6ac(local_30,local_38);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
        local_68 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,uVar1);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_140 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_140 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_140;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_70;
        FUN_008ed910();
        local_21 = (byte)pcVar2 & 1;
        local_50 = 1;
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
      }
      else {
        local_21 = 1;
        local_50 = 1;
      }
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_21 = 1;
      local_50 = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_21 = 1;
    local_50 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

