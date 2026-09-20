// FUN_01564be4 @ 01564be4

byte FUN_01564be4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ulong local_70;
  byte local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  byte local_39;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 *local_28;
  undefined8 local_20;
  byte local_11;
  
  puVar3 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar3,param_1);
  FUN_015451e4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar4 = local_20;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_20;
    local_38 = uVar4;
    FUN_01565620();
    local_39 = (byte)uVar5;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    FUN_015657a8(local_28,local_38,local_39 & 1,&local_58,&local_60);
    _objc_storeStrong(&local_48,local_58);
    _objc_storeStrong(&local_50,local_60);
    uVar4 = local_20;
    FUN_01551a44();
    uVar2 = local_48;
    local_61 = (byte)uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar2;
    if ((uVar2 == 0) && ((local_61 & 1) != 0)) {
      _objc_storeStrong(&local_70,local_50);
    }
    if (local_70 == 0) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      pcVar6 = &cf_onHeadImageClicked_;
      _NSSelectorFromString();
      uVar7 = local_70;
      local_78 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar6);
      uVar2 = local_70;
      puVar1 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
      if ((uVar7 & 1) == 0) {
        local_11 = 0;
        local_2c = 1;
      }
      else {
        local_a8 = PTR___NSConcreteStackBlock_02578660;
        local_a0 = 0xc2000000;
        local_9c = 0;
        local_98 = FUN_01565b88;
        local_90 = &DAT_0257cc98;
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = uVar2;
        local_80 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_performWithoutChatAvatarProfileC_026a5f80,&local_a8);
        local_11 = 1;
        local_2c = 1;
        _objc_storeStrong(&local_88,0);
      }
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

