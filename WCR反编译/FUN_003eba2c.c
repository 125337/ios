// FUN_003eba2c @ 003eba2c

void FUN_003eba2c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_78;
  ulong local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  undefined8 local_20;
  ulong local_18;
  ulong uVar2;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  (*DAT_028ca4b8)(local_18,local_20,local_28);
  uVar1 = (uint)uVar2;
  FUN_003ebe00();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar2 = local_18;
    FUN_003ebed4();
    if ((uVar2 & 1) == 0) {
      local_38 = 1;
    }
    else {
      uVar2 = local_18;
      _objc_getAssociatedObject(local_18,DAT_026e02e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar2 == 0) {
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_78 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = local_78;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_48 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar2 & 1) != 0) {
            _objc_storeStrong(&local_40,local_48);
          }
          _objc_storeStrong(&local_48,0);
        }
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasSuffix__0269d018,&cf__);
        if ((((ulong)pcVar3 & 1) == 0) &&
           (pcVar3 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasSuffix__0269d018,&cf_format_s_),
           ((ulong)pcVar3 & 1) == 0)) {
          pcVar3 = local_40;
          FUN_003eca9c();
          if (((ulong)pcVar3 & 1) == 0) {
            FUN_003eca04(local_18);
          }
          local_38 = 1;
        }
        else {
          pcVar3 = local_40;
          FUN_003eca9c();
          if (((ulong)pcVar3 & 1) == 0) {
            uVar2 = local_18;
            FUN_003efe34(local_18,local_40);
            if ((uVar2 & 1) == 0) {
              FUN_003eff70(local_18,local_28);
              local_38 = 0;
            }
            else {
              local_38 = 1;
            }
          }
          else {
            local_38 = 1;
          }
        }
        _objc_storeStrong(&local_40,0);
      }
      else {
        local_38 = 1;
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

