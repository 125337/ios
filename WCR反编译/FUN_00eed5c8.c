// FUN_00eed5c8 @ 00eed5c8

void FUN_00eed5c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_b8;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  ulong local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == (cfstringStruct *)0x0) || (local_20 == 0)) {
    local_24 = 1;
    goto LAB_00eed9fc;
  }
  pcVar2 = &cf_tryLoadExtInfo;
  _NSSelectorFromString();
  uVar3 = local_20;
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
  }
  pcVar2 = local_18;
  FUN_00eec2c8(local_18,&cf_isExisted_,local_20);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = &cf_updateRightMakeSureButton;
    _NSSelectorFromString();
    pcVar4 = local_18;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_38);
    }
    local_24 = 1;
    goto LAB_00eed9fc;
  }
  pcVar2 = local_18;
  FUN_00eeb684(local_18,&cf_m_dicMultiSelect);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_24 = 1;
  }
  else {
    uVar3 = local_20;
    FUN_00ee8104();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      local_24 = 1;
    }
    else {
      pcVar2 = local_18;
      FUN_00eec2c8(local_18,&cf_isSelected_,local_20);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_18;
        FUN_00eec410();
        pcVar4 = local_18;
        local_50 = pcVar2;
        FUN_00ee4b18();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        local_58 = pcVar2;
        if (local_50 <= pcVar2) {
          pcVar2 = local_18;
          FUN_00eeb684(local_18,&cf_m_countExceedTipWord);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar2;
          FUN_00eeb5a8();
          _objc_retainAutoreleasedReturnValue();
          local_60 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          puVar1 = PTR_WCRefineHelper_026ce000;
          pcVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_b8 = &cf__0RSNP;
          }
          else {
            local_b8 = local_60;
          }
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_b8);
          local_24 = 1;
          _objc_storeStrong(&local_60,0);
          goto LAB_00eed9dc;
        }
        pcVar4 = &cf_setObjectAsLastObject_forKey_;
        _NSSelectorFromString((long)pcVar2 - (long)local_50);
        pcVar2 = local_40;
        local_68 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar4);
        if (((ulong)pcVar2 & 1) == 0) {
          FUN_00eec4f4(local_40,local_20,local_48);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,local_68,local_20,local_48);
        }
      }
      else {
        FUN_00eec654(local_40,local_48);
      }
      FUN_00eec780(local_18,local_40);
      pcVar4 = local_18;
      FUN_00eeb684(local_18,&cf_m_delegate);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = &cf_onSelectedOrCancelContact_isSelected_;
      local_70 = pcVar4;
      _NSSelectorFromString();
      if ((local_70 != (cfstringStruct *)0x0) &&
         (pcVar4 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar2),
         ((ulong)pcVar4 & 1) != 0)) {
        pcVar4 = local_18;
        FUN_00eec2c8(local_18,&cf_isSelected_,local_20);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,pcVar2,local_20,(byte)pcVar4 & 1);
      }
      FUN_00eecba0(local_18);
      FUN_00eecddc(local_18);
      _objc_storeStrong(&local_70,0);
      local_24 = 0;
    }
LAB_00eed9dc:
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_00eed9fc:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

