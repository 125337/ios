// refreshActiveThemeResources @ 015cb504

/* Function Stack Size: 0x10 bytes */

bool WCRefineWechatThemeStore::refreshActiveThemeResources(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  uint local_8c;
  ID local_78;
  ID local_68;
  ID local_58;
  ID local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_wechatThemeBeautifySelectedTheme_026b0e60);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_78 = 0;
  }
  else {
    local_48 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_78;
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEnabled_026a0ef0);
  bVar1 = false;
  local_8c = 1;
  if ((IVar3 & 1) != 0) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wechatThemeBeautifyEnabled_026aeb58);
    IVar3 = local_40;
    local_8c = 1;
    if (((ulong)puVar2 & 1) != 0) {
      local_68 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedThemePath_026aeb50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isEqualToString__0269ccc8);
      local_8c = (uint)IVar3 ^ 1;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_8c & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_reloadSelectedTheme_026b0e18);
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEnabled_026a0ef0);
    local_11 = (byte)IVar3 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

