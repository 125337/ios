// FUN_005c1e60 @ 005c1e60

void FUN_005c1e60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined *local_58;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar3 = "FavoritesUtil";
  _objc_getClass();
  local_58 = PTR_s_ConvertImgSNS2FavItem_ThumbUrl_S_026a5a18;
  local_40 = pcVar3;
  if ((pcVar3 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,
                 PTR_s_ConvertImgSNS2FavItem_ThumbUrl_S_026a5a18), ((ulong)pcVar3 & 1) == 0)) {
    local_28 = (char *)0x0;
    local_5c = 1;
  }
  else {
    uVar4 = local_38;
    FUN_005b9830(local_38,PTR_s_pathForPreview_026a4a18);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_38;
    local_68 = uVar4;
    FUN_005b9830(local_38,PTR_s_pathForData_026a4a20);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    local_70 = uVar5;
    FUN_005b9830(local_38,PTR_s_mediaID_026a5a20);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_40;
    puVar2 = local_58;
    uVar1 = local_68;
    uVar6 = local_38;
    local_78 = uVar4;
    FUN_005c3224();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_70;
    uVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = local_30;
    FUN_005c3410();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_78;
    uVar9 = local_30;
    FUN_005c3678();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_createtime_026a46f0);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,puVar2,uVar1,uVar6,uVar5,uVar7,uVar8,uVar4,uVar9,(int)uVar10);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(uVar9);
    (*(code *)PTR__objc_release_02578630)(uVar8);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    local_5c = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

