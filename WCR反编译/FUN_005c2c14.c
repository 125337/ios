// FUN_005c2c14 @ 005c2c14

void FUN_005c2c14(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_70;
  long local_68;
  undefined4 local_5c;
  long local_58;
  undefined *local_50;
  char *local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = "FavoritesUtil";
  _objc_getClass();
  local_50 = PTR_s_ConvertUrlSNS2FavItem_Desc_Title_026a5a40;
  lVar3 = local_30;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentObj_026a5990);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar3;
  if (((local_38 == (char *)0x0) || (lVar3 == 0)) ||
     (pcVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,local_50),
     ((ulong)pcVar2 & 1) == 0)) {
    local_28 = (char *)0x0;
    local_5c = 1;
  }
  else {
    lVar3 = local_58;
    FUN_0059d260(local_58,&cf_mediaList);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_58;
    FUN_0059d260(local_58,&cf_linkUrl);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    local_28 = local_38;
    puVar1 = local_50;
    lVar3 = local_70;
    if (lVar4 == 0) {
      local_28 = (char *)0x0;
    }
    else {
      lVar4 = local_58;
      FUN_0059d260(local_58,&cf_desc);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_58;
      FUN_0059d260(local_58,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = local_30;
      FUN_005c3410();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = local_30;
      FUN_005c3678();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = local_68;
      FUN_005c3224();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_createtime_026a46f0);
      lVar11 = local_68;
      FUN_005b9830(local_68,PTR_s_pathForPreview_026a4a18);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,puVar1,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,(int)lVar10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(lVar11);
      (*(code *)PTR__objc_release_02578630)(lVar9);
      (*(code *)PTR__objc_release_02578630)(lVar8);
      (*(code *)PTR__objc_release_02578630)(lVar7);
      (*(code *)PTR__objc_release_02578630)(lVar6);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    local_5c = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

