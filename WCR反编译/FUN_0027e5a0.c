// FUN_0027e5a0 @ 0027e5a0

void FUN_0027e5a0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_60;
  char *local_58;
  char *local_50 [3];
  char *local_38;
  undefined4 local_2c;
  char *local_28;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (char *)0x0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == (char *)0x0) {
    local_18 = (char *)0x0;
    local_2c = 1;
  }
  else {
    pcVar1 = "WCFinderFeedMediaWrap";
    _objc_getClass();
    local_38 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_2c = 1;
    }
    else {
      pcVar1 = local_28;
      FUN_0027a1c0(local_28,&cf_codingFormat);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = local_20;
        FUN_0027a0e4();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50[0];
        local_50[0] = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar1 = local_28;
      FUN_0027a1c0(local_28,&cf_fileFormat);
      _objc_retainAutoreleasedReturnValue();
      local_60 = (char *)0x0;
      pcVar2 = local_50[0];
      local_58 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
      if (pcVar2 != (char *)0x0) {
        pcVar3 = local_38;
        FUN_0027fa38(pcVar2,local_38,local_20,local_50[0],local_58);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_60;
        local_60 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_60 == (char *)0x0) {
        pcVar2 = local_20;
        FUN_0027b0fc();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_60;
        local_60 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_60 != (char *)0x0) {
        pcVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (pcVar1 != (char *)0x0) {
          FUN_0027feb8(pcVar1,local_60,local_58);
        }
      }
      pcVar1 = local_60;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_2c = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(local_50,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

