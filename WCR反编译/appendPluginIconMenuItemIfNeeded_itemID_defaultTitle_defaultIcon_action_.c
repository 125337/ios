// appendPluginIconMenuItemIfNeeded:itemID:defaultTitle:defaultIcon:action: @ 00f37520

/* Function Stack Size: 0x38 bytes */

ID WCRefineEmoticonToolsHelper::
   appendPluginIconMenuItemIfNeeded_itemID_defaultTitle_defaultIcon_action_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,SEL param_7)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_menuContainsPluginItem_itemID__026ac088,local_30,local_38);
  local_18 = local_20;
  IVar1 = local_30;
  if ((IVar2 & 1) == 0) {
    uVar3 = local_38;
    _WCRPluginIconResolvedTitle(local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    _WCRPluginIconResolvedIcon(local_38,local_48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_appendMenuItemIfNeeded_title_svg_026ac090,IVar1,uVar3,uVar4,param_7);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

