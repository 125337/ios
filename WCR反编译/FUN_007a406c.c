// FUN_007a406c @ 007a406c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007a406c(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined *local_90;
  ulong local_88;
  undefined *local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  byte local_51;
  long local_50;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  
  dVar3 = DAT_02324310;
  dVar2 = DAT_02323d38;
  local_28 = 0;
  dVar12 = DAT_02324310;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar7;
    FUN_007993a0(local_28,puVar7);
    local_51 = 0;
    lVar8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar5 = false;
    if (lVar9 != 0) {
      lVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = lVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _CGColorGetAlpha(lVar9);
      bVar5 = dVar2 < dVar12;
      param_2 = dVar2;
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(lVar8);
    puVar7 = local_38;
    if (bVar5) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_CGColor_026ca470);
      lVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar8);
    }
    lVar8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    dVar12 = 0.0;
    FUN_0079ab34();
    (*(code *)PTR__objc_release_02578630)(lVar8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    lVar8 = local_28;
    local_78 = dVar12;
    dStack_70 = param_2;
    local_68 = param_3;
    dStack_60 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_arrayWithArray__0269eab8);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar7;
    (*(code *)PTR__objc_release_02578630)(lVar8);
    local_88 = 0;
    while (puVar7 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0),
          puVar7 != (undefined *)0x0 && local_88 < 0xc) {
      puVar7 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeObjectAtIndex__0269d530,0);
      local_88 = local_88 + 1;
      uVar6 = (uint)local_90;
      FUN_007a4dcc();
      if ((uVar6 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_frame_026ca640);
        dVar13 = param_4;
        _CGRectGetWidth(param_4,param_3,param_2,dVar12);
        dVar14 = local_78;
        dVar15 = dStack_60;
        _CGRectGetWidth(local_78,dStack_70,local_68);
        bVar5 = false;
        dVar4 = dVar14 * dVar3;
        if (dVar14 * dVar3 <= dVar13) {
          _CGRectGetHeight(param_4,param_3,param_2,dVar12);
          dVar12 = local_78;
          dVar15 = dStack_60;
          _CGRectGetHeight(local_78,dStack_70,local_68);
          bVar5 = dVar12 * dVar3 <= param_4;
          dVar13 = param_4;
          dVar4 = dVar12 * dVar3;
        }
        dVar12 = dVar15;
        param_3 = dVar4;
        param_4 = dVar13;
        bVar1 = false;
        param_2 = dVar3;
        if (bVar5) {
          puVar7 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_backgroundColor_026ca518);
          _objc_retainAutoreleasedReturnValue();
          FUN_007a3f04();
          bVar1 = dVar2 < param_4;
          param_3 = dVar2;
          (*(code *)PTR__objc_release_02578630)(puVar7);
        }
        if (bVar1) {
          FUN_007993a0(local_90,local_38);
          puVar7 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar5 = false;
          if (puVar10 != (undefined *)0x0) {
            puVar10 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            (*(code *)PTR__objc_msgSend_02578628)();
            _CGColorGetAlpha(puVar11);
            bVar5 = dVar2 < param_4;
            param_3 = dVar2;
            (*(code *)PTR__objc_release_02578630)(puVar10);
          }
          (*(code *)PTR__objc_release_02578630)(puVar7);
          puVar7 = local_38;
          if (bVar5) {
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_CGColor_026ca470);
            puVar7 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          puVar7 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          param_4 = 0.0;
          FUN_0079ab34();
          (*(code *)PTR__objc_release_02578630)(puVar7);
        }
        puVar7 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar5 = local_88 < 10;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        puVar7 = local_80;
        if (puVar10 != (undefined *)0x0 && bVar5) {
          puVar10 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(puVar10);
        }
        local_2c = 0;
      }
      else {
        local_2c = 2;
      }
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

