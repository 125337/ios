// FUN_007f4ad4 @ 007f4ad4

undefined1  [16] FUN_007f4ad4(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_44;
  undefined8 local_40;
  ulong local_38;
  double local_30;
  double dStack_28;
  double local_20;
  double dStack_18;
  
  local_38 = 0;
  local_30 = param_1;
  dStack_28 = param_2;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = &local_40;
  local_40 = 0;
  _objc_storeStrong(puVar2,param_4);
  FUN_007f4174();
  if ((((ulong)puVar2 & 1) == 0) || (FUN_007f4cb4(), uVar4 = local_38, ((ulong)puVar2 & 1) != 0)) {
    dStack_18 = dStack_28;
    local_20 = local_30;
    local_44 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar5 = local_38;
    if ((uVar4 & 1) == 0) {
      dStack_18 = dStack_28;
      local_20 = local_30;
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar5;
      local_58 = 0;
      FUN_007fa7d0(uVar5,&local_58);
      if ((uVar5 & 1) == 0) {
        dStack_18 = dStack_28;
        local_20 = local_30;
      }
      else {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        FUN_007f5444();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (0.0 < param_1) {
          local_20 = local_30;
          dStack_18 = dStack_28 + param_1;
        }
        else {
          dStack_18 = dStack_28;
          local_20 = local_30;
        }
      }
      local_44 = 1;
      local_30 = local_20;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  auVar1._8_8_ = dStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

