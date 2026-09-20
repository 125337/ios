// FUN_00310d90 @ 00310d90

void FUN_00310d90(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long local_90 [3];
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ulong local_58;
  undefined8 local_50;
  undefined **local_48;
  ulong local_40;
  undefined4 local_38;
  byte local_32;
  byte local_31;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_32 = param_4;
  local_31 = param_3;
  local_30 = param_1;
  if (local_28 == 0) {
    local_38 = 1;
  }
  else {
    local_40 = 0;
    if ((param_3 & 1) != 0) {
      local_40 = 3;
    }
    if ((param_4 & 1) != 0) {
      local_40 = local_40 | 0xc;
    }
    ppuVar2 = &local_78;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc0000000;
    local_6c = 0;
    local_68 = FUN_003194c0;
    local_60 = &DAT_0257bf18;
    local_58 = local_40;
    local_50 = param_1;
    _objc_retainBlock();
    local_48 = ppuVar2;
    (*(code *)ppuVar2[2])(ppuVar2,local_28);
    ppuVar2 = local_48;
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar2[2])();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_90[0] = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_90[0];
    bVar1 = false;
    if (local_90[0] != 0) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar3 != lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    if (bVar1) {
      (*(code *)local_48[2])(local_48,local_90[0]);
    }
    _objc_storeStrong(local_90);
    _objc_storeStrong(&local_48,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

