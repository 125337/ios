// FUN_002aa05c @ 002aa05c

void FUN_002aa05c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_54;
  
  (*DAT_028c9778)(param_1,param_2,param_3 & 1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_54 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (uint)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_release_02578630)();
  if ((local_54 & 1) != 0) {
    FUN_002d5790();
    if (((ulong)puVar1 & 1) == 0) {
      DAT_028c9839 = 0;
    }
    else {
      DAT_028c9839 = 1;
      FUN_002db1f4(&cf_WCTimeLineViewController_viewDidAppear);
    }
  }
  return;
}

