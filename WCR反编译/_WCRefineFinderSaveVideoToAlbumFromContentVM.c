// _WCRefineFinderSaveVideoToAlbumFromContentVM @ 00275bdc

void _WCRefineFinderSaveVideoToAlbumFromContentVM(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined **local_70;
  long local_68;
  uint local_60;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined **local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  ppuVar3 = &local_50;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_00275e90;
  local_38 = &DAT_0257b208;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar2;
  _objc_retainBlock();
  local_28 = ppuVar3;
  if (local_18 == 0) {
    (*(code *)ppuVar3[2])(ppuVar3,0,&cf__gS0RSQ_);
    local_60 = 1;
  }
  else {
    lVar4 = local_18;
    FUN_00276030();
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar4;
    if (lVar4 != 0) {
      FUN_002762e0(0x40ac200000000000);
      FUN_00276920();
      ppuVar3 = local_28;
      lVar1 = local_68;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_00276a20;
      local_78 = &DAT_0257b238;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = ppuVar3;
      FUN_00276974(lVar1,&local_90);
      _objc_storeStrong(&local_70,0);
    }
    else {
      (*(code *)local_28[2])(local_28,0,&cf_S_MRQ_eSN_);
    }
    local_60 = (uint)(lVar4 == 0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

