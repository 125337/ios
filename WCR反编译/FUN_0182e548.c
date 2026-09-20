// FUN_0182e548 @ 0182e548

void FUN_0182e548(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  byte local_54;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) ||
     (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_0183a2b4();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_24 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_gif);
      local_54 = 1;
      if ((uVar1 & 1) == 0) {
        puVar3 = PTR_WCRefineEmoticonUtil_026ce1c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_isGifData__0269e0a8,local_30);
        local_54 = (byte)puVar3;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_setEmoticonOnView_imageData_isGi_0269e0b0,
                 local_18,local_30,local_54 & 1);
      _objc_storeStrong(&local_38,0);
      local_24 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

