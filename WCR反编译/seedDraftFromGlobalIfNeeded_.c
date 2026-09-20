// seedDraftFromGlobalIfNeeded: @ 01c4b670

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineNameplateSpecialUserDetailViewController::seedDraftFromGlobalIfNeeded_
          (WCRefineNameplateSpecialUserDetailViewController *this,ID param_1,SEL param_2,
          long_long param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  double in_d0;
  double local_5d0;
  double local_4f0;
  double local_410;
  double local_330;
  double local_250;
  double local_170;
  undefined *local_70;
  undefined4 local_68;
  byte local_61;
  ID local_60;
  byte local_51;
  ID local_50;
  undefined *local_48;
  ID local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sceneKey__026c1be0,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___Path);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_51 = 0;
  local_61 = 0;
  bVar1 = false;
  if ((IVar5 & 1) != 0) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar5 != 0;
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (bVar1) {
    local_68 = 1;
  }
  else {
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_70 = puVar6;
    if (local_38 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_nameplateHomeType_026aea58);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomePath_026ae9f8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeNightPath_026aea00);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomePlacement_026aea60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeOffsetX_026aea68);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeOffsetY_026aea70);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeScale_026aea78);
      if (in_d0 <= 0.0) {
        local_170 = 1.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeScale_026aea78);
        local_170 = in_d0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_170,puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else if (local_38 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_nameplateChatType_026aea80);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatPath_026aea08);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatNightPath_026aea10);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatPlacement_026aea88);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatOffsetX_026aea90);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatOffsetY_026aea98);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatScale_026aeaa0);
      if (in_d0 <= 0.0) {
        local_250 = 1.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatScale_026aeaa0);
        local_250 = in_d0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_250,puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else if (local_38 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_nameplateContactsType_026aeaa8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateContactsPath_026aea18);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateContactsNightPath_026aea20);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateContactsPlacement_026aeab0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateContactsOffsetX_026aeab8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateContactsOffsetY_026aeac0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateContactsScale_026aeac8);
      if (in_d0 <= 0.0) {
        local_330 = 1.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateContactsScale_026aeac8);
        local_330 = in_d0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_330,puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else if (local_38 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_nameplateMomentsType_026aead0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateMomentsPath_026aea28);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateMomentsNightPath_026aea30);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateMomentsPlacement_026aead8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateMomentsOffsetX_026aeae0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateMomentsOffsetY_026aeae8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateMomentsScale_026aeaf0);
      if (in_d0 <= 0.0) {
        local_410 = 1.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateMomentsScale_026aeaf0);
        local_410 = in_d0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_410,puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else if (local_38 == 4) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_nameplateChatTopBarType_026aeaf8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatTopBarPath_026aea38);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatTopBarNightPath_026aea40);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatTopBarPlacement_026aeb00);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatTopBarOffsetX_026aeb08);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatTopBarOffsetY_026aeb10);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatTopBarScale_026aeb18);
      if (in_d0 <= 0.0) {
        local_4f0 = 1.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateChatTopBarScale_026aeb18);
        local_4f0 = in_d0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_4f0,puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else if (local_38 == 5) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_nameplateHomeOnlineType_026aeb20);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeOnlinePath_026aea48);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeOnlineNightPath_026aea50);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeOnlinePlacement_026aeb28);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,puVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeOnlineOffsetX_026aeb30);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeOnlineOffsetY_026aeb38);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeOnlineScale_026aeb40);
      if (in_d0 <= 0.0) {
        local_5d0 = 1.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_nameplateHomeOnlineScale_026aeb40);
        local_5d0 = in_d0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_5d0,puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_storeStrong(&local_70,0);
    local_68 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

