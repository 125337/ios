// addNormalCellForSel:title:rightValue:userInfo: @ 01790354

/* Function Stack Size: 0x30 bytes */

ID WCPluginsViewControllerBehavior::addNormalCellForSel_title_rightValue_userInfo_
             (ID param_1,SEL param_2,SEL param_3,ID param_4,ID param_5,ID param_6)

{
  undefined8 *puVar1;
  cfstringStruct *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *local_58;
  cfstringStruct *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  puVar1 = &local_40;
  local_40 = 0;
  _objc_storeStrong(puVar1,param_6);
  FUN_01790624();
  pcVar2 = &cf_normalCellForSel_target_title_rightValue_accessoryType_;
  local_48 = puVar1;
  _NSSelectorFromString();
  local_58 = (undefined8 *)0x0;
  puVar1 = local_48;
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2);
  if (((ulong)puVar1 & 1) != 0) {
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_28,local_18,local_30,local_38,1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_58;
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if (local_58 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,local_28,
               local_18,local_30,local_38,1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_58;
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  pcVar4 = "WCTableViewNormalCellManager";
  _objc_getClass();
  if (((local_58 != (undefined8 *)0x0) && (local_48 != (undefined8 *)0x0)) &&
     ((long)local_48 - (long)pcVar4 != 0)) {
    puVar1 = local_58;
    _object_getClass((long)local_48 - (long)pcVar4);
    if ((puVar1 != local_48) && (pcVar4 != (char *)0x0)) {
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,pcVar4);
      if (((ulong)puVar1 & 1) != 0) {
        _object_setClass(local_58,local_48);
      }
    }
  }
  pcVar2 = &cf_setIsNeedFixWidthAndAdjustFont_;
  _NSSelectorFromString();
  puVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar2);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,pcVar2,0);
  }
  puVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setUserInfo__026a17c8,local_40);
  }
  puVar1 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

