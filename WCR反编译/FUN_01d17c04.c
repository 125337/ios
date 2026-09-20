// FUN_01d17c04 @ 01d17c04

void FUN_01d17c04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setChatToolbarQuickReplySortMode_026c4098,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setChatToolbarQuickReplySortAsce_026c40a0,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

