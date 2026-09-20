// FUN_00797514 @ 00797514

void FUN_00797514(double param_1,double param_2,double param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double local_78;
  ulong local_70 [3];
  undefined *local_58;
  undefined8 local_50;
  ulong local_48;
  double local_40;
  double dStack_38;
  double local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  dStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homepageCornerEnabled_0269fc40);
  dVar7 = param_3;
  if ((((ulong)puVar1 & 1) != 0) &&
     (puVar1 = local_58,
     (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_mainFrameCornerEnabled_026a1ff0),
     dVar7 = param_3, ((ulong)puVar1 & 1) != 0)) {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_007a50c4();
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_70[0];
    pcVar4 = &cf_MainFrameTableView;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
    dVar7 = param_3;
    if ((uVar2 & 1) != 0) {
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_globalCornerMargin_026a1fe0);
      local_78 = (double)(long)puVar1;
      if (local_78 <= 0.0) {
        local_78 = 8.0;
      }
      uVar6 = 0x4059000000000000;
      if (100.0 < local_78) {
        local_78 = 100.0;
      }
      dVar7 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_bounds_026ca548);
      _CGRectGetWidth(dVar7,uVar6,param_3);
      param_2 = 2.0;
      dVar5 = dVar7 - local_78 * 2.0;
      param_1 = dVar5;
      if (0.0 < dVar5) {
        dVar7 = 0.5;
        param_2 = dVar5 + 0.5;
        param_1 = local_30;
        if (param_2 < local_30) {
          param_2 = 0.5;
          param_1 = ABS(local_40);
          if (ABS(local_40) <= 0.5) {
            local_40 = local_78;
            param_1 = dVar5;
            local_30 = dVar5;
          }
        }
      }
    }
    _objc_storeStrong(local_70,0);
  }
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
  FUN_0079b440(param_1,param_2,dVar7,param_4,local_40,dStack_38,local_30,uStack_28);
  if ((uVar2 & 1) == 0) {
    (*DAT_028ccaf0)(local_40,dStack_38,local_30,uStack_28,local_48,local_50);
  }
  _objc_storeStrong(&local_58,0);
  return;
}

