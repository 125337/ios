// FUN_00552d34 @ 00552d34

byte FUN_00552d34(undefined8 param_1)

{
  ulong *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_48 [3];
  ulong *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_0054b198();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    if (puVar1 == (ulong *)0x0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      local_48[0] = 0;
      pcVar2 = &cf_username;
      _NSSelectorFromString();
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar3 & 1) != 0) {
        uVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_48[0];
        local_48[0] = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        pcVar2 = &cf_sourceUserName;
        _NSSelectorFromString();
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
        if ((uVar3 & 1) != 0) {
          uVar4 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_48[0];
          local_48[0] = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
      }
      uVar3 = local_48[0];
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = local_48[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0), uVar3 == 0)) {
        local_11 = 0;
      }
      else {
        uVar3 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isEqualToString__0269ccc8,local_30);
        local_11 = (byte)uVar3 & 1;
      }
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

