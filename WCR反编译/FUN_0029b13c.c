// FUN_0029b13c @ 0029b13c

void FUN_0029b13c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined **local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  undefined **local_48;
  uint local_40;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_MOS_MRJ_Y);
    local_40 = 1;
  }
  else {
    FUN_0029b4c4(&cf_ck_WcS_);
    lVar1 = local_30;
    ppuVar2 = &local_70;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_0029b964;
    local_58 = &DAT_02579190;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar1;
    _objc_retainBlock();
    lVar1 = local_28;
    local_48 = ppuVar2;
    FUN_00286c50();
    _objc_retainAutoreleasedReturnValue();
    local_78 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      lVar1 = local_28;
      FUN_00276030(0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = local_48;
      local_80 = lVar1;
      if (lVar1 != 0) {
        local_a8 = PTR___NSConcreteStackBlock_02578660;
        local_a0 = 0xc2000000;
        local_9c = 0;
        local_98 = FUN_0029bd28;
        local_90 = &DAT_0257b238;
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = ppuVar2;
        FUN_00276974(lVar1,&local_a8);
        _objc_storeStrong(&local_88,0);
      }
      else {
        FUN_0028e9e4(&cf_S_MRQ_eScS);
      }
      local_40 = (uint)(lVar1 == 0);
      _objc_storeStrong(&local_80,0);
    }
    else {
      FUN_0027ebd0(local_78,&cf_m4a,local_48);
      local_40 = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

