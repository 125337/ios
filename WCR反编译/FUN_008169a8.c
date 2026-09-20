// FUN_008169a8 @ 008169a8

void FUN_008169a8(undefined *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_c8;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR_WCRefineWechatThemeStore_026ce6d0;
  local_29 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  uStack_58 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
  uVar6 = *(undefined8 *)PTR__CGSizeZero_025782f8;
  puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_60 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,uStack_58,uVar6,puVar3,PTR_s_replacementImageNamed_size_scale_026a3d10,uVar2,0
            );
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  bVar1 = local_38 == (undefined *)0x0;
  if (bVar1) {
    local_c8 = local_18;
    (*DAT_028cd0f8)(local_18,local_20,local_28,local_29 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_c8;
  }
  else {
    local_c8 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_c8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  puVar3 = PTR_WCRefineBubbleCut_026ce9c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_applyCutIfNeededToImage_assetNam_026a8c88,local_68
             ,local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

