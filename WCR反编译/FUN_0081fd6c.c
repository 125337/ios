// FUN_0081fd6c @ 0081fd6c

void FUN_0081fd6c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double dStack_e0;
  ulong local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double dStack_b8;
  undefined8 local_b0;
  double dStack_a8;
  long local_98;
  ulong local_90;
  undefined8 local_88;
  long local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar3 = local_28;
  FUN_0081f228();
  if ((uVar3 & 1) == 0) {
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    uVar6 = 0x4020000000000000;
    bVar2 = true;
    dVar5 = param_3;
    uVar8 = param_2;
    local_58 = param_1;
    local_50 = param_2;
    local_48 = param_3;
    local_40 = param_4;
    if (8.0 <= param_3) {
      dVar5 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      bVar2 = dVar5 < 8.0;
      uVar8 = uVar6;
      param_1 = param_3;
      local_78 = param_3;
      local_70 = uVar6;
      local_68 = param_2;
      local_60 = dVar5;
    }
    if (bVar2) {
      local_38 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
      lVar4 = DAT_028cd078;
      if (dVar5 < DAT_02323ec0) {
        local_38 = 1;
      }
      else {
        dVar7 = DAT_02323ec0;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
        if ((lVar4 == 0) ||
           (uVar3 = DAT_028cd0a0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (DAT_028cd0a0,PTR_s_isEqualToString__0269ccc8,local_80), (uVar3 & 1) == 0)) {
          local_38 = 1;
        }
        else {
          local_88 = DAT_028cd1c8;
          uVar3 = local_28;
          FUN_008201c0();
          lVar4 = local_80;
          local_90 = uVar3;
          _WCRefineProfileBgHTMLSnapshotSignature(local_80,uVar3);
          _objc_retainAutoreleasedReturnValue();
          local_98 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
          uVar3 = local_28;
          lVar1 = local_80;
          local_f0 = local_88;
          local_d0 = dVar5;
          local_c8 = dVar7;
          local_c0 = uVar8;
          dStack_b8 = param_1;
          local_b0 = uVar8;
          dStack_a8 = param_1;
          (*(code *)PTR__objc_retain_02578638)();
          lVar4 = local_98;
          local_100 = lVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_f8 = lVar4;
          dStack_e0 = dStack_a8;
          local_e8 = local_b0;
          local_d8 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_takeSnapshotWithConfiguration_co_026a8c18,0);
          _objc_storeStrong(&local_f8);
          _objc_storeStrong(&local_100,0);
          _objc_storeStrong(&local_98,0);
          local_38 = 0;
        }
        _objc_storeStrong(&local_80,0);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

