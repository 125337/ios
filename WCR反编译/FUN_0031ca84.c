// FUN_0031ca84 @ 0031ca84

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_0031ca84(undefined8 param_1,double param_2,double param_3,double param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double local_180;
  undefined *local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  long local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  undefined *local_60;
  undefined4 local_58;
  undefined *local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_48 = (undefined *)0x0;
  _objc_storeStrong(&local_48,param_5);
  if ((local_48 == (undefined *)0x0) ||
     (puVar3 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_numberOfSections_026a2068),
     (long)puVar3 < 1)) {
    dStack_38 = *(double *)(PTR__CGRectNull_025782e8 + 8);
    local_40 = *(double *)PTR__CGRectNull_025782e8;
    dStack_28 = *(double *)(PTR__CGRectNull_025782e8 + 0x18);
    local_30 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
    local_58 = 1;
  }
  else {
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_numberOfRowsInSection__026a2008,0);
    local_60 = puVar3;
    if ((long)puVar3 < 1) {
      dStack_38 = *(double *)(PTR__CGRectNull_025782e8 + 8);
      local_40 = *(double *)PTR__CGRectNull_025782e8;
      dStack_28 = *(double *)(PTR__CGRectNull_025782e8 + 0x18);
      local_30 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
      local_58 = 1;
    }
    else {
      dStack_78 = *(double *)(PTR__CGRectNull_025782e8 + 8);
      local_80 = *(double *)PTR__CGRectNull_025782e8;
      dStack_68 = *(double *)(PTR__CGRectNull_025782e8 + 0x18);
      local_70 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
      local_88 = 0;
      while( true ) {
        puVar1 = local_48;
        uVar2 = (uint)puVar3;
        if ((long)local_60 <= local_88) break;
        puVar3 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
        dVar6 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_indexPathForRow_inSection__0269e9a0,
                   local_88,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_rectForRowAtIndexPath__0269ec48);
        local_a8 = dVar6;
        dStack_a0 = param_2;
        local_98 = param_3;
        dStack_90 = param_4;
        (*(code *)PTR__objc_release_02578630)();
        dStack_c8 = dStack_78;
        local_d0 = local_80;
        dStack_b8 = dStack_68;
        local_c0 = local_70;
        param_2 = dStack_78;
        param_3 = local_70;
        param_4 = dStack_68;
        _CGRectIsNull(local_80);
        if (((ulong)puVar3 & 1) == 0) {
          dStack_108 = dStack_78;
          local_110 = local_80;
          dStack_f8 = dStack_68;
          local_100 = local_70;
          dStack_128 = dStack_a0;
          local_130 = local_a8;
          dStack_118 = dStack_90;
          local_120 = local_98;
          _CGRectUnion();
          param_2 = local_70;
          param_3 = dStack_78;
          param_4 = local_80;
          local_f0 = local_80;
          dStack_e8 = dStack_78;
          local_e0 = local_70;
          dStack_d8 = dStack_68;
        }
        else {
          dStack_78 = dStack_a0;
          local_80 = local_a8;
          dStack_68 = dStack_90;
          local_70 = local_98;
        }
        local_88 = local_88 + 1;
      }
      dStack_148 = dStack_78;
      local_150 = local_80;
      dStack_138 = dStack_68;
      local_140 = local_70;
      _CGRectIsNull(local_88 - (long)local_60,local_80,dStack_78,local_70,dStack_68);
      if ((uVar2 & 1) == 0) {
        dStack_168 = dStack_78;
        local_170 = local_80;
        dStack_158 = dStack_68;
        local_160 = local_70;
        dVar6 = local_70;
        dVar7 = dStack_68;
        _CGRectIsEmpty(local_80,dStack_78);
        if ((uVar2 & 1) == 0) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_178 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_globalCornerMargin_026a1fe0);
          local_180 = (double)(long)puVar3;
          if (local_180 <= 0.0) {
            local_180 = 8.0;
          }
          uVar5 = 0x4059000000000000;
          if (100.0 < local_180) {
            local_180 = 100.0;
          }
          local_80 = local_180;
          dVar4 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
          _CGRectGetWidth(dVar4,uVar5,dVar6,dVar7);
          dVar6 = 2.0;
          local_70 = dVar4 - local_180 * 2.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentOffset_0269dd18);
          dStack_78 = dStack_78 - dVar6;
          local_40 = local_80;
          dStack_28 = dStack_68;
          local_30 = local_70;
          local_58 = 1;
          dStack_38 = dStack_78;
          _objc_storeStrong(&local_178,0);
          goto LAB_0031cfb0;
        }
      }
      dStack_38 = *(double *)(PTR__CGRectNull_025782e8 + 8);
      local_40 = *(double *)PTR__CGRectNull_025782e8;
      dStack_28 = *(double *)(PTR__CGRectNull_025782e8 + 0x18);
      local_30 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
      local_58 = 1;
    }
  }
LAB_0031cfb0:
  _objc_storeStrong(&local_48,0);
  return local_40;
}

