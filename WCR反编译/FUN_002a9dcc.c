// FUN_002a9dcc @ 002a9dcc

void FUN_002a9dcc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_64;
  undefined8 local_50;
  byte local_41;
  undefined *local_40;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_64 = 0;
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_64 = (uint)puVar3;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = local_18;
  if ((local_64 & 1) != 0) {
    DAT_028c9839 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setExtendedLayoutIncludesOpaqueB_026a1c30,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setEdgesForExtendedLayout__026a1c38,0xf);
    FUN_002db1f4(&cf_WCTimeLineViewController_viewWillAppear_before);
    _objc_storeStrong(&local_50,0);
  }
  (*DAT_028c9770)(local_18,local_20,local_21 & 1);
  FUN_002db1f4(&cf_WCTimeLineViewController_viewWillAppear_after);
  return;
}

