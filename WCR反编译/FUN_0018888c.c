// FUN_0018888c @ 0018888c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0018888c(double param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  long local_200;
  uint local_13c;
  long local_110;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined1 local_41;
  long local_40;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_41 = 0;
  bVar2 = true;
  uVar1 = local_28 != 0;
  if ((bool)uVar1) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 == 0;
    local_41 = uVar1;
    local_40 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if (bVar2) {
    local_48 = 1;
  }
  else {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (local_50 == 0) {
      local_48 = 1;
    }
    else {
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
      _objc_retainAutoreleasedReturnValue();
      local_110 = lVar3;
      if (lVar3 == 0) {
        local_60 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_traitCollection_026caba8);
        _objc_retainAutoreleasedReturnValue();
        local_110 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_110;
      if (lVar3 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(lVar3);
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_13c = 0;
      if (((ulong)puVar6 & 1) != 0) {
        lVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_backgroundColor_026ca518);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        param_1 = DAT_02323cd0;
        FUN_0018957c(lVar3,puVar6,local_58);
        local_13c = (uint)lVar4 ^ 1;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if ((local_13c & 1) != 0) {
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar3);
      lVar3 = local_28;
      dVar8 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      local_200 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar3);
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      if (0.0 < dVar8) {
        local_200 = lVar7;
        param_1 = dVar8;
      }
      lVar3 = local_50;
      dVar8 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = true;
      if (param_1 == dVar8) {
        lVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar2 = local_200 != lVar7;
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
      (*(code *)PTR__objc_release_02578630)(lVar3);
      if (bVar2) {
        lVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(param_1);
        (*(code *)PTR__objc_release_02578630)(lVar3);
        lVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        lVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      _objc_storeStrong(&local_58,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

