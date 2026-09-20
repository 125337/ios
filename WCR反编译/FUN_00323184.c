// FUN_00323184 @ 00323184

double FUN_00323184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double local_138;
  long local_48;
  double local_40;
  undefined8 uStack_38;
  double local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  if (((local_48 == 0) || (param_6 < 0)) ||
     (lVar2 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_numberOfSections_026a2068),
     lVar2 <= param_6)) {
    uStack_38 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 8);
    local_40 = *(double *)PTR__CGRectNull_025782e8;
    uStack_28 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x18);
    local_30 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
  }
  else {
    lVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_numberOfRowsInSection__026a2008,param_6);
    lVar2 = local_48;
    if (lVar3 < 1) {
      uStack_38 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 8);
      local_40 = *(double *)PTR__CGRectNull_025782e8;
      uStack_28 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x18);
      local_30 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_indexPathForRow_inSection__0269e9a0,0,
                 param_6);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_rectForRowAtIndexPath__0269ec48);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      lVar2 = local_48;
      puVar4 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_indexPathForRow_inSection__0269e9a0,
                 lVar3 + -1,param_6);
      uVar1 = (uint)puVar4;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_rectForRowAtIndexPath__0269ec48);
      (*(code *)PTR__objc_release_02578630)();
      _CGRectUnion();
      uVar8 = param_4;
      _CGRectIsEmpty(param_1,param_2);
      if ((uVar1 & 1) == 0) {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_138 = (double)(long)puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (local_138 <= 0.0) {
          local_138 = 8.0;
        }
        uVar7 = 0x4059000000000000;
        if (100.0 < local_138) {
          local_138 = 100.0;
        }
        dVar6 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
        _CGRectGetWidth(dVar6,uVar7,param_3,uVar8);
        local_30 = dVar6 - local_138 * 2.0;
        if (0.0 < local_30) {
          local_40 = local_138;
          uStack_38 = param_2;
          uStack_28 = param_4;
        }
        else {
          uStack_38 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 8);
          local_40 = *(double *)PTR__CGRectNull_025782e8;
          uStack_28 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x18);
          local_30 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
        }
      }
      else {
        uStack_38 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 8);
        local_40 = *(double *)PTR__CGRectNull_025782e8;
        uStack_28 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x18);
        local_30 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
      }
    }
  }
  _objc_storeStrong(&local_48,0);
  return local_40;
}

