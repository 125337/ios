// FUN_003192a4 @ 003192a4

byte FUN_003192a4(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0030fd54();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 != 0) {
    pcVar2 = &cf_MainFrameTableView;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
    if ((uVar1 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_indexPathForCell__0269e208,local_20);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      local_40 = uVar3;
      if (uVar3 == 0) {
        local_11 = false;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_section_0269e988);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_numberOfRowsInSection__026a2008,uVar3);
        local_11 = 1 < (long)uVar1;
      }
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
      goto LAB_00319468;
    }
  }
  local_11 = false;
  local_38 = 1;
LAB_00319468:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

