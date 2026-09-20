// FUN_0079707c @ 0079707c

void FUN_0079707c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long local_48;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_3;
  local_18 = param_2;
  _objc_storeStrong(&local_28,param_4);
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  local_30 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_homepageCornerEnabled_0269fc40);
  bVar1 = false;
  if (((ulong)puVar6 & 1) != 0) {
    puVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mainFrameCornerEnabled_026a1ff0);
    bVar1 = false;
    if (((ulong)puVar6 & 1) != 0) {
      local_48 = local_18;
      FUN_007a3c90();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar1 = false;
      if (local_48 != 0) {
        FUN_007a3f04(local_28);
        bVar1 = DAT_02323d38 < param_1;
      }
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  lVar5 = local_18;
  uVar4 = local_20;
  pcVar3 = DAT_028ccae0;
  if (bVar1) {
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*pcVar3)(lVar5,uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  else {
    (*DAT_028ccae0)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

