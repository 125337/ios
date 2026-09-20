// FUN_000dfb38 @ 000dfb38

void FUN_000dfb38(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if (local_38 == 0) {
    local_28 = (cfstringStruct *)0x0;
    local_3c = 1;
  }
  else {
    pcVar1 = &cf_MMSessionInfo;
    _NSClassFromString();
    pcVar2 = &cf_MainFrameCellData;
    local_48 = pcVar1;
    _NSClassFromString();
    local_60 = pcVar2;
    if ((local_48 == (cfstringStruct *)0x0) || (pcVar2 == (cfstringStruct *)0x0)) {
      local_28 = (cfstringStruct *)0x0;
      local_3c = 1;
    }
    else {
      pcVar1 = local_48;
      _objc_alloc_init();
      uVar3 = local_30;
      local_68 = pcVar1;
      FUN_000d8d08(local_30,"m_oMemContact");
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = &cf_setM_contact_;
      local_70 = uVar3;
      _NSSelectorFromString();
      pcVar2 = &cf_setM_msgWrap_;
      _NSSelectorFromString();
      pcVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar1);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,pcVar1,local_70);
      }
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar2);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,pcVar2,local_38);
      }
      pcVar1 = &cf_initWithSessionInfo_;
      _NSSelectorFromString();
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_instancesRespondToSelector__0269da90,pcVar1);
      if (((ulong)pcVar2 & 1) == 0) {
        local_28 = (cfstringStruct *)0x0;
      }
      else {
        pcVar2 = local_60;
        _objc_alloc();
        pcVar4 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar1,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      local_3c = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

