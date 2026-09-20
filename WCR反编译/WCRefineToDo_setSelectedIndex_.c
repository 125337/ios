// WCRefineToDo_setSelectedIndex: @ 007fbdd0

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHook::WCRefineToDo_setSelectedIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  unsigned_long_long uVar1;
  char *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *local_70;
  undefined *local_68;
  byte local_5a;
  byte local_59;
  ID local_58;
  ID local_50;
  ID local_48;
  byte local_3a;
  byte local_39;
  ID local_38;
  char *local_30;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "NewMainFrameViewController";
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_38 = 0;
  IVar3 = local_18;
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_selectedIndex_0269e580);
  if ((IVar3 & 1) != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedIndex_0269e580);
    local_38 = IVar3;
  }
  local_39 = 0;
  local_3a = 0;
  local_48 = 0;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_viewControllers_0269e348);
  if ((IVar3 & 1) != 0) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_48;
    local_48 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar3 = local_48;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  IVar4 = local_38;
  if (((IVar3 & 1) == 0) || (local_30 == (char *)0x0)) {
    local_39 = local_38 == 0;
    local_3a = local_28 == 0;
  }
  else {
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    if (IVar4 < IVar3) {
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      local_50 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((IVar3 & 1) != 0) {
        IVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_50;
        local_50 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      IVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_30);
      local_39 = (byte)IVar3;
      _objc_storeStrong(&local_50,0);
    }
    uVar1 = local_28;
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    if (uVar1 < IVar3) {
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      local_58 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((IVar3 & 1) != 0) {
        IVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_58;
        local_58 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      IVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_30);
      local_3a = (byte)IVar3;
      _objc_storeStrong(&local_58,0);
    }
  }
  local_59 = 0;
  if ((local_39 & 1) != 0) {
    local_59 = local_3a ^ 1;
  }
  local_59 = local_59 & 1;
  local_5a = 0;
  if ((local_39 & 1) == 0) {
    local_5a = local_3a;
  }
  local_5a = local_5a & 1;
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_toDoCardEnabled_026a3208);
  if (((ulong)puVar5 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_toDoCardSourceMode_026a8828);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_setSelectedIndex__026a87c0,local_28);
  if ((local_5a & 1) != 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_tab_return_lu_>_lu);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar5;
    FUN_007f233c(puVar5);
    FUN_007f24d4(local_70);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_48,0);
  return;
}

