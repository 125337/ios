// FUN_005c2288 @ 005c2288

void FUN_005c2288(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong local_78;
  undefined *local_70;
  undefined4 local_64;
  undefined *local_60;
  long local_58;
  char *local_40;
  long local_38;
  ulong local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar2 = "FavoritesUtil";
  _objc_getClass();
  lVar3 = local_38;
  local_40 = pcVar2;
  FUN_0059d260(local_38,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  local_58 = lVar4;
  if (lVar4 == 5) {
    local_60 = PTR_s_ConvertWCSightItem2FavItem_withE_026a5a30;
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,
               PTR_s_ConvertWCSightItem2FavItem_withE_026a5a30);
    lVar3 = local_38;
    local_28 = local_40;
    puVar1 = local_60;
    if (((ulong)pcVar2 & 1) == 0) {
      local_28 = (char *)0x0;
      local_64 = 1;
    }
    else {
      uVar5 = local_30;
      FUN_005c3410();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_createtime_026a46f0);
      uVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,lVar3,uVar5,uVar6 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_64 = 1;
    }
  }
  else {
    local_70 = PTR_s_ConvertVideoSNS2FavItem_desc_Web_026a5a38;
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,
               PTR_s_ConvertVideoSNS2FavItem_desc_Web_026a5a38);
    if (((ulong)pcVar2 & 1) == 0) {
      local_28 = (char *)0x0;
      local_64 = 1;
    }
    else {
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentObj_026a5990);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      puVar1 = local_70;
      lVar3 = local_38;
      local_78 = uVar5;
      FUN_0059d260(local_38,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_38;
      FUN_0059d260(local_38,&cf_desc);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_78;
      FUN_0059d260(local_78,&cf_linkUrl);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_30;
      FUN_005c3410();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = local_38;
      FUN_005b9830(local_38,PTR_s_mediaID_026a5a20);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = local_30;
      FUN_005c3678();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = local_38;
      FUN_005c3224();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_createtime_026a46f0);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,puVar1,lVar3,lVar4,uVar5,uVar6,uVar7,lVar8,uVar9,lVar10,(int)uVar11);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(lVar10);
      (*(code *)PTR__objc_release_02578630)(uVar9);
      (*(code *)PTR__objc_release_02578630)(lVar8);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      local_64 = 1;
      _objc_storeStrong(&local_78,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

