// FUN_001581fc @ 001581fc

void FUN_001581fc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  uint uVar2;
  ulong uVar4;
  long lVar5;
  ulong local_118;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  ulong local_b8;
  undefined1 auStack_b0 [8];
  long local_a8;
  byte local_a0;
  byte local_99;
  long local_98;
  ulong local_90;
  undefined1 auStack_88 [14];
  undefined1 local_7a;
  byte local_79;
  ulong local_78;
  ulong local_70;
  byte local_61;
  long local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  long *plVar3;
  
  plVar3 = &local_38;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(plVar3,param_3);
  uVar2 = (uint)plVar3;
  FUN_0015ab30();
  uVar4 = local_28;
  if ((uVar2 & 1) == 0) {
    (*DAT_028c8808)(local_28,local_30,local_38);
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar4;
    FUN_0015abcc();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_38;
    local_58 = uVar4;
    FUN_00162a30();
    uVar4 = local_58;
    local_60 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if ((uVar4 == 0) || (local_60 == 0)) {
      (*DAT_028c8808)(local_28,local_30,local_38);
      local_48 = 1;
    }
    else {
      uVar4 = local_58;
      FUN_001631c8(local_58,local_60);
      local_61 = (byte)uVar4;
      local_79 = 0;
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getGroupContact_0269f648);
      if ((uVar4 & 1) == 0) {
        local_118 = 0;
      }
      else {
        local_118 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getGroupContact_0269f648);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = local_118;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_118;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      uVar4 = local_70;
      FUN_00160d4c();
      local_7a = (undefined1)uVar4;
      if (((local_61 & 1) == 0) && ((uVar4 & 1) != 0)) {
        (*DAT_028c8808)(local_28,local_30,local_38);
        local_48 = 0;
      }
      else {
        _objc_initWeak(auStack_88,local_28);
        uVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
        local_98 = local_60;
        local_99 = local_61 & 1;
        pcVar1 = &cf_nxSmag_g_gn_v;
        if (local_99 == 0) {
          pcVar1 = &cf_nxSmagmo_vn_v;
        }
        local_d8 = PTR___NSConcreteStackBlock_02578660;
        local_d0 = 0xc2000000;
        local_cc = 0;
        local_c8 = FUN_001643c8;
        local_c0 = &DAT_0257a680;
        local_90 = uVar4;
        _objc_copyWeak(auStack_b0,auStack_88);
        uVar4 = local_90;
        local_a0 = local_99 & 1;
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = uVar4;
        local_a8 = local_98;
        FUN_001640e4(&cf_Smn_v,pcVar1,&cf_nxSm,&local_d8);
        local_48 = 1;
        _objc_storeStrong(&local_b8);
        _objc_destroyWeak(auStack_b0);
        _objc_storeStrong(&local_90,0);
        _objc_destroyWeak(auStack_88);
      }
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

