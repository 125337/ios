// FUN_0110ec80 @ 0110ec80

void FUN_0110ec80(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined **ppuVar9;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined **local_70;
  undefined *local_68;
  byte local_59;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 *local_30;
  undefined *local_28;
  
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_dictionaryForKey__026ca600,&cf_WCRPrivateFriendStoresV1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_38;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_stringForKey__026a33a0,&cf_WCRPrivateFriendLastOwnerV1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_50 = (undefined *)0x0;
  pcVar4 = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = &cf___;
  local_59 = 0;
  _WCRSideloadShareFixIsNotificationServiceProcess();
  bVar1 = (byte)pcVar4;
  if (((ulong)pcVar4 & 1) == 0) {
    FUN_0110f04c();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_59 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    local_50 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar6 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar7;
    FUN_0110d24c();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_58;
    local_58 = pcVar8;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &local_98;
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_01123fac;
  local_80 = &DAT_025857b8;
  local_68 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = puVar2;
  _objc_retainBlock();
  local_70 = ppuVar9;
  if ((local_59 & 1) == 0) {
    (*(code *)ppuVar9[2])(ppuVar9,local_40);
    puVar2 = local_48;
    if (local_30 != (undefined8 *)0x0) {
      _objc_retainAutorelease();
      *local_30 = puVar2;
    }
    puVar2 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
  }
  else {
    (*(code *)ppuVar9[2])(ppuVar9,local_50);
    pcVar4 = local_58;
    if (local_30 != (undefined8 *)0x0) {
      _objc_retainAutorelease();
      *local_30 = pcVar4;
    }
    puVar2 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

