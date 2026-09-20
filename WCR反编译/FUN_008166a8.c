// FUN_008166a8 @ 008166a8

void FUN_008166a8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_b0;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR_WCRefineWechatThemeStore_026ce6d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  uStack_48 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
  uVar6 = *(undefined8 *)PTR__CGSizeZero_025782f8;
  puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_50 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,uStack_48,uVar6,puVar3,PTR_s_replacementImageNamed_size_scale_026a3d10,uVar2,0
            );
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  bVar1 = local_30 == (undefined *)0x0;
  if (bVar1) {
    local_b0 = local_18;
    (*DAT_028cd0f0)(local_18,local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_b0;
  }
  else {
    local_b0 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_b0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  puVar3 = PTR_WCRefineBubbleCut_026ce9c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_applyCutIfNeededToImage_assetNam_026a8c88,local_58
             ,local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

