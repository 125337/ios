// FUN_001c6798 @ 001c6798

void FUN_001c6798(double param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 *****param_5,undefined8 param_6)

{
  bool bVar1;
  undefined8 ****ppppuVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double local_f0;
  undefined8 uStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  undefined8 ****local_a8;
  undefined8 ****local_a0;
  uint local_94;
  double local_90;
  undefined8 uStack_88;
  double local_80;
  double dStack_78;
  undefined *local_58;
  undefined8 local_50;
  undefined8 ****local_48;
  double local_40;
  undefined8 uStack_38;
  double local_30;
  double dStack_28;
  
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  dStack_28 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar5 = (undefined8 *****)local_48;
  local_58 = puVar4;
  FUN_00207570();
  if (((ulong)pppppuVar5 & 1) == 0) {
    pppppuVar5 = (undefined8 *****)local_48;
    _objc_getAssociatedObject(local_48,&DAT_028c8ad1);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar6 = (undefined8 *****)local_48;
    local_a0 = pppppuVar5;
    _objc_getAssociatedObject(local_48,&DAT_028c8ad2);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uStack_38;
    local_d0 = local_40;
    dStack_b8 = dStack_28;
    local_c0 = local_30;
    uStack_e8 = uStack_38;
    local_f0 = local_40;
    dStack_d8 = dStack_28;
    local_e0 = local_30;
    local_a8 = pppppuVar6;
    if (((undefined8 *****)local_a0 != (undefined8 *****)0x0) &&
       (pppppuVar6 != (undefined8 *****)0x0)) {
      dVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_CGRectValue_0269e128);
      pppppuVar6 = (undefined8 *****)local_a8;
      dVar8 = param_4;
      dVar11 = param_3;
      uVar12 = param_2;
      dVar13 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_CGRectValue_0269e128);
      dVar9 = local_40;
      _CGRectGetWidth(local_40,uStack_38,local_30,dStack_28);
      dVar10 = dVar7;
      _CGRectGetWidth(dVar7,param_2,param_3,param_4);
      bVar1 = false;
      if (8.0 < ABS(dVar9 - dVar10)) {
        dVar9 = local_40;
        _CGRectGetWidth(local_40,uStack_38,local_30,dStack_28);
        _CGRectGetWidth(dVar8,dVar11,uVar12,dVar13);
        bVar1 = 8.0 < ABS(dVar9 - dVar8);
      }
      if (bVar1) {
        _WCRMsgBannerResetStoredFrames(local_48);
        _objc_storeStrong(&local_a0);
        pppppuVar6 = &local_a8;
        _objc_storeStrong(pppppuVar6,0);
      }
      else {
        FUN_0020766c(local_40,uStack_38,local_30,dStack_28,dVar7,param_2,param_3,param_4);
        if (((ulong)pppppuVar6 & 1) != 0) {
          local_d0 = local_40;
          uStack_c8 = uStack_38;
          local_c0 = local_30;
          dStack_b8 = dStack_28;
          FUN_002078c8();
          pppppuVar6 = (undefined8 *****)local_48;
          local_f0 = local_d0;
          uStack_e8 = uStack_c8;
          local_e0 = local_c0;
          dStack_d8 = dStack_b8;
          FUN_00207924(local_48,local_58,0);
        }
      }
    }
    uVar3 = (uint)pppppuVar6;
    dVar7 = local_f0;
    FUN_00207ae0(local_f0,uStack_e8,local_e0,dStack_d8,local_d0,uStack_c8,local_c0,dStack_b8);
    if ((uVar3 & 1) != 0) {
      local_f0 = local_d0;
      uStack_e8 = uStack_c8;
      dVar7 = local_c0;
      dStack_d8 = dStack_b8;
      FUN_00207924(local_48,local_58,0);
      local_e0 = dVar7;
    }
    pppppuVar5 = (undefined8 *****)local_48;
    FUN_00207ce4();
    if ((((ulong)pppppuVar5 & 1) != 0) &&
       ((((*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_msgBannerWidth_026a0698),
         dVar7 <= 0.0 ||
         ((*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_msgBannerHeight_026a06a0),
         dVar7 <= 0.0)) &&
        (puVar4 = local_58,
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_msgBannerBgUseImageBackground_026a06a8)
        , ((ulong)puVar4 & 1) == 0)))) {
      if (56.5 < dStack_b8) {
        dStack_b8 = 56.0;
      }
      if (56.5 < dStack_d8) {
        dStack_d8 = 56.0;
      }
    }
    FUN_00207e30(local_48,0);
    pppppuVar5 = (undefined8 *****)local_48;
    FUN_00207e30(local_48,0);
    uVar3 = (uint)pppppuVar5;
    FUN_00207ae0(local_f0,uStack_e8,local_e0,dStack_d8,local_d0,uStack_c8,local_c0,dStack_b8);
    ppppuVar2 = local_48;
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      _objc_setAssociatedObject(local_48,&DAT_028c8ad1,0,1);
      _objc_setAssociatedObject(local_48,&DAT_028c8ad2,0,1);
      (*DAT_028c8ca8)(local_d0,uStack_c8,local_c0,dStack_b8,local_48,local_50);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,uStack_c8,local_c0,dStack_b8,PTR__OBJC_CLASS___NSValue_026ce1f0,
                 PTR_s_valueWithCGRect__0269e130);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(ppppuVar2,&DAT_028c8ad1,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      ppppuVar2 = local_48;
      puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,uStack_e8,local_e0,dStack_d8,PTR__OBJC_CLASS___NSValue_026ce1f0,
                 PTR_s_valueWithCGRect__0269e130);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(ppppuVar2,&DAT_028c8ad2,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*DAT_028c8ca8)(local_f0,uStack_e8,local_e0,dStack_d8,local_48,local_50);
    }
    local_94 = (uint)!bVar1;
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
  }
  else {
    _WCRMsgBannerResetStoredFrames(local_48);
    uStack_88 = uStack_38;
    local_90 = local_40;
    dStack_78 = dStack_28;
    local_80 = local_30;
    (*DAT_028c8ca8)(local_40,uStack_38,local_30,dStack_28,local_48,local_50);
    local_94 = 1;
  }
  _objc_storeStrong(&local_58,0);
  return;
}

