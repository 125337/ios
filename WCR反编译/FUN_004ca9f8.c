// FUN_004ca9f8 @ 004ca9f8

void FUN_004ca9f8(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_28;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_19 = param_2;
  FUN_004cd230();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_setSearchBtnAlpha_animated_completion_;
  local_28 = uVar1;
  _NSSelectorFromString();
  if ((local_28 != 0) &&
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2),
     (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(0,local_28,pcVar2,local_19 & 1,0);
    FUN_004cd470(local_18,"m_searchBarButtonShown",0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

