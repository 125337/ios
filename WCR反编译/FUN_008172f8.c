// FUN_008172f8 @ 008172f8

void FUN_008172f8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_e0;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  puVar3 = PTR_WCRefineWechatThemeStore_026ce6d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  uStack_68 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
  uVar6 = *(undefined8 *)PTR__CGSizeZero_025782f8;
  puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_70 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,uStack_68,uVar6,puVar3,PTR_s_replacementImageNamed_size_scale_026a3d10,uVar2,0
            );
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  bVar1 = local_50 == (undefined *)0x0;
  if (bVar1) {
    local_e0 = local_28;
    (*DAT_028cd110)(local_28,local_30,local_38,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_e0;
  }
  else {
    local_e0 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_e0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  puVar3 = PTR_WCRefineBubbleCut_026ce9c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_applyCutIfNeededToImage_assetNam_026a8c88,local_78
             ,local_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

