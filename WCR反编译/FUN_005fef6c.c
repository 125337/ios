// FUN_005fef6c @ 005fef6c

byte FUN_005fef6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  ulong local_60 [3];
  undefined8 local_48;
  ulong local_40;
  undefined4 local_38;
  byte local_31;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_31 = param_4;
  if (local_30 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    local_40 = 0;
    local_48 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_findCommonMessageCell_preferSend_026a5de0,local_30,param_4 & 1,
               &local_40,&local_48);
    uVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_60[0] = uVar2;
    if (uVar2 == 0) {
      local_11 = 0;
      local_38 = 1;
    }
    else {
      pcVar3 = &cf_onHeadImageClicked_;
      _NSSelectorFromString();
      uVar4 = local_60[0];
      local_68 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_respondsToSelector__026ca818,pcVar3);
      uVar2 = local_60[0];
      puVar1 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
      if ((uVar4 & 1) == 0) {
        local_11 = 0;
        local_38 = 1;
      }
      else {
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_00615ce0;
        local_80 = &DAT_025791c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = uVar2;
        local_70 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_performWithoutChatAvatarProfileC_026a5f80,&local_98);
        local_11 = 1;
        local_38 = 1;
        _objc_storeStrong(&local_78,0);
      }
    }
    _objc_storeStrong(local_60,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

