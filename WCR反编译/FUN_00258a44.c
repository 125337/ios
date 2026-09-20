// FUN_00258a44 @ 00258a44

byte FUN_00258a44(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  byte local_78;
  ulong local_40 [3];
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isCustomPid_026a0fb0);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_packageId_026a0fb8);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_packageId_026a0fb8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_40[0] = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_78 = 0;
        if ((uVar1 & 1) != 0) {
          uVar1 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40[0],PTR_s_isEqualToString__0269ccc8,_WCREmoticonCustomPid);
          local_78 = (byte)uVar1;
        }
        local_11 = local_78 & 1;
        local_24 = 1;
        _objc_storeStrong(local_40,0);
      }
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isCustomPid_026a0fb0);
      local_11 = (byte)uVar1 & 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

