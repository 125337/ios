// FUN_0036b910 @ 0036b910

byte FUN_0036b910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_40 = 0;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  pcVar1 = &cf_updateContentView_tableViewFrame_;
  _NSSelectorFromString();
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) == 0) {
    pcVar1 = &cf_updateContentView_tableViewFrame_isSearching_isSearchTableView_searchBarText_;
    _NSSelectorFromString();
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,local_30,local_28,local_20,local_40,pcVar1,local_48,0,0,0);
      local_11 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,local_30,local_28,local_20,local_40,pcVar1,local_48);
    local_11 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_11 & 1;
}

