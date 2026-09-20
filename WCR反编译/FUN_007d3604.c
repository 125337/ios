// FUN_007d3604 @ 007d3604

ulong FUN_007d3604(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_007cdf10();
  if ((uVar1 & 1) == 0) {
    local_18 = 0xffffffffffffffff;
  }
  else {
    local_38 = 0xffffffffffffffff;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_countLabel);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      FUN_007cd890();
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    _objc_storeStrong(&local_40,0);
    if (-1 < (long)local_38) {
      DAT_026f46c0 = local_38;
    }
    local_18 = local_38;
  }
  local_30 = 1;
  _objc_storeStrong(&local_20,0);
  return local_18;
}

