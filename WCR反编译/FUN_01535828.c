// FUN_01535828 @ 01535828

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01535828(undefined8 param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined8 *local_88;
  long local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  code *local_50;
  ulong local_48;
  ulong local_40;
  uint local_34;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = param_2;
  if (param_2 == DAT_028e3958) {
    if (local_28 == 0) {
      FUN_015681f8(param_2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_1ZPN_SelQYT_N);
      local_34 = 1;
    }
    else {
      uVar2 = local_28;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasSuffix__0269d018,&cf__chatroom_);
      if ((uVar2 & 1) == 0) {
        FUN_015681f8(local_30);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_1ZPN_SO<h_eHe);
        local_34 = 1;
      }
      else {
        FUN_0156823c(local_40);
        local_70 = 0;
        local_60 = 0x32000000;
        local_5c = 0x30;
        local_58 = FUN_01560d04;
        local_50 = FUN_01560d58;
        uVar3 = local_28;
        local_68 = &local_70;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_40;
        ppuVar4 = &local_b0;
        local_b0 = PTR___NSConcreteStackBlock_02578660;
        local_a8 = 0xc2000000;
        local_a4 = 0;
        local_a0 = FUN_01568390;
        local_98 = &DAT_02586760;
        local_80 = local_30;
        local_48 = uVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = uVar2;
        local_88 = &local_70;
        _objc_retainBlock();
        uVar2 = local_28;
        local_78 = ppuVar4;
        FUN_01568eb0(local_28,ppuVar4);
        bVar1 = (uVar2 & 1) == 0;
        if (bVar1) {
          FUN_015681f8(local_30);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_1ZPN_S_UwS_S1Y_
                    );
        }
        local_34 = (uint)!bVar1;
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_90,0);
        __Block_object_dispose(&local_70,8);
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  else {
    local_34 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

