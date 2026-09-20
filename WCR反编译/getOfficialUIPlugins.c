// getOfficialUIPlugins @ 01d7d6c0

/* Function Stack Size: 0x10 bytes */

ID WCRefineSearchSettingsViewController::getOfficialUIPlugins(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PluginConfig_026cf5b0;
  local_38 = puVar1;
  _objc_alloc_init();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setKey__026b43f0,&cf_searchPluginPKC);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setClassName__026c4b70);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDisplayName__026ae2f8,&cf_PKC);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDesc__026a5a78,&cf_S_T);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_40);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginMiYou);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setClassName__026c4b70,&cf_MiYouSettingViewController);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDisplayName__026ae2f8,&cf__ORKb);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDesc__026a5a78,&cf_mo_2dV0Rb_SI_R);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_48);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginWCPL);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_setClassName__026c4b70,&cf_WCPLSettingViewController);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDisplayName__026ae2f8,&cf_i_yRKb);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDesc__026a5a78,&cf_i_yRKbR);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_50);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginWCEnhance);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_setClassName__026c4b70,&cf_WCEnhanceSettingViewController);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDisplayName__026ae2f8,&cf__OX__);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDesc__026a5a78,&cf__OX__R);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_58);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginBNHelper);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_setClassName__026c4b70,&cf_BNHelperSettingController);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setDisplayName__026ae2f8,&cf_Zb);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setDesc__026a5a78,&cf_ZbR);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_60);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginDouTu);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_setClassName__026c4b70,&cf_DouTuSettingViewController);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDisplayName__026ae2f8,&cf_eVRKb);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDesc__026a5a78,&cf_eVRKbR);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_68);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_70 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginWCPulse);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_setClassName__026c4b70,&cf_WCPulseSettingViewController);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDisplayName__026ae2f8,&cf_WCPulse);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDesc__026a5a78,&::cf_W);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_70);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginHuangBai);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setClassName__026c4b70,&cf_HuangBai);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setDisplayName__026ae2f8,&cf__vRKb);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setDesc__026a5a78);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_78);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_80 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginThemeBox);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setClassName__026c4b70,&cf_ThemeBox);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setDisplayName__026ae2f8,&cf__NvP_);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setDesc__026a5a78);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_80);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_88 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginBubbleBox);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setClassName__026c4b70,&cf_BubbleBox);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setDisplayName__026ae2f8,&cf_llvP_);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setDesc__026a5a78,&cf_S_T);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_88);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_90 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginWCPure);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setClassName__026c4b70,&cf_WCPureExtension);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setDisplayName__026ae2f8,&cf__OQS);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setDesc__026a5a78,&cf_S_T);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_90);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_98 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginWeChatTweak);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setClassName__026c4b70,&cf_WeChatTweak);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setDisplayName__026ae2f8,&cf__P_RKb);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setDesc__026a5a78,&cf_S_T);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_98);
  puVar1 = PTR_PluginConfig_026cf5b0;
  _objc_alloc_init();
  local_a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setKey__026b43f0,&cf_searchPluginWCRefine);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a0,PTR_s_setClassName__026c4b70,&cf_WCRefineRootViewController);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setDisplayName__026ae2f8,&cf_WCRefine);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setDesc__026a5a78,&cf_S_T);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_a0);
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

