// FUN_00132838 @ 00132838

byte FUN_00132838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  ulong local_b8;
  double local_b0;
  double dStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_90;
  double dStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  double dStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  dVar1 = DAT_02323d38;
  local_30 = 0;
  dVar4 = DAT_02323d38;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  if (local_38 == 0) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHidden_026ca768);
    if (((uVar2 & 1) != 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_alpha_026ca4d8), dVar4 <= dVar1)) {
      local_21 = 0;
      local_3c = 1;
    }
    else {
      dVar5 = dVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
      local_90 = dVar4;
      dStack_88 = dVar5;
      local_80 = param_3;
      uStack_78 = param_4;
      local_70 = dVar4;
      dStack_68 = dVar5;
      local_60 = param_3;
      uStack_58 = param_4;
      _CGRectGetWidth(dVar4,dVar5,param_3,param_4);
      if (0.0 < dVar4) {
        dStack_a8 = dStack_68;
        local_b0 = local_70;
        uStack_98 = uStack_58;
        local_a0 = local_60;
        dVar4 = local_70;
        _CGRectGetHeight(local_70,dStack_68,local_60,uStack_58);
        if (0.0 < dVar4) {
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = uVar2;
          while (local_b8 != 0) {
            uVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isHidden_026ca768);
            if (((uVar2 & 1) != 0) ||
               ((*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_alpha_026ca4d8), dVar4 <= dVar1
               )) {
              local_21 = 0;
              goto LAB_00132b64;
            }
            if (local_b8 == local_30) break;
            uVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_b8;
            local_b8 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          local_21 = 1;
LAB_00132b64:
          local_3c = 1;
          _objc_storeStrong(&local_b8,0);
          goto LAB_00132b74;
        }
      }
      local_21 = 0;
      local_3c = 1;
    }
  }
LAB_00132b74:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

