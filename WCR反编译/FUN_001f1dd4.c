// FUN_001f1dd4 @ 001f1dd4

byte FUN_001f1dd4(undefined8 param_1)

{
  ulong *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_60;
  long local_58;
  ulong local_50 [3];
  cfstringStruct *local_38;
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
    FUN_001f0120();
    local_30 = puVar1;
    if (puVar1 == (ulong *)0x0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      pcVar2 = &cf_AttachmentButton;
      _NSClassFromString();
      local_38 = pcVar2;
      if ((pcVar2 == (cfstringStruct *)0x0) ||
         (uVar3 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar2),
         (uVar3 & 1) == 0)) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_50[0] = uVar3;
        for (local_58 = 0; local_50[0] != 0 && local_58 < 0x10; local_58 = local_58 + 1) {
          uVar3 = local_50[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_isKindOfClass__0269cd68,local_30);
          if ((uVar3 & 1) != 0) {
            uVar3 = local_50[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50[0],PTR_s_respondsToSelector__026ca818,PTR_s_recordButton_026a0330);
            if ((uVar3 & 1) == 0) {
              local_11 = 0;
              local_24 = 1;
            }
            else {
              uVar3 = local_50[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_recordButton_026a0330);
              _objc_retainAutoreleasedReturnValue();
              local_11 = uVar3 == local_20;
              local_24 = 1;
              local_60 = uVar3;
              _objc_storeStrong(&local_60,0);
            }
            goto LAB_001f20ac;
          }
          uVar4 = local_50[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_50[0];
          local_50[0] = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_11 = 0;
        local_24 = 1;
LAB_001f20ac:
        _objc_storeStrong(local_50,0);
      }
      else {
        local_11 = 0;
        local_24 = 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

