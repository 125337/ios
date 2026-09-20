// FUN_0028ae94 @ 0028ae94

void FUN_0028ae94(undefined8 param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined **local_50;
  long local_48;
  uint local_3c;
  undefined **local_38 [3];
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_00286c50();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  FUN_00276920();
  ppuVar2 = &PTR___NSConcreteGlobalBlock_0257b688;
  _objc_retainBlock();
  lVar1 = local_20;
  local_38[0] = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar1 = local_18;
    FUN_00276030(0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = local_38[0];
    local_48 = lVar1;
    if (lVar1 != 0) {
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_00293894;
      local_58 = &DAT_0257b238;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = ppuVar2;
      FUN_00276974(lVar1,&local_70);
      _objc_storeStrong(&local_50,0);
    }
    else {
      FUN_0028e9e4(&cf_S_MRQ_eScS);
    }
    local_3c = (uint)(lVar1 == 0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    FUN_0027ebd0(local_20,&cf_m4a,local_38[0]);
    local_3c = 1;
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

