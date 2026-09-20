// FUN_00801eac @ 00801eac

void FUN_00801eac(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong local_88;
  undefined *local_70;
  cfstringStruct *local_68;
  bool local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_00802264;
  }
  local_30 = 0;
  pcVar2 = &cf_WCRefineToDo_firstSessionIndexPath;
  _NSSelectorFromString();
  pcVar3 = &cf_firstSessionIndexPath;
  local_38 = pcVar2;
  _NSSelectorFromString();
  uVar4 = local_20;
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_38);
  if ((uVar4 & 1) == 0) {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_40);
    if ((uVar4 & 1) != 0) {
      uVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_40);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_30;
      local_30 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
  }
  else {
    uVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_30;
    local_30 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  uVar4 = local_30;
  puVar6 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
  uVar5 = local_30;
  if ((uVar4 & 1) == 0) {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
    local_59 = false;
    local_48 = uVar4;
    if (uVar4 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = local_20;
      _object_getIvar(local_20,uVar4);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_88;
    }
    local_59 = uVar4 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_88;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    pcVar2 = &cf_getFirstHasUnreadMsgSessionIndexFrom_;
    _NSSelectorFromString();
    local_68 = pcVar2;
    if ((local_50 == 0) ||
       (uVar4 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar2),
       (uVar4 & 1) == 0)) {
LAB_00802234:
      local_18 = 0;
      local_24 = 1;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_indexPathForRow_inSection__0269e9a0,0)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_50;
      local_70 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_68,puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_30;
      local_30 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_30;
      puVar6 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
      uVar5 = local_30;
      bVar1 = (uVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar5;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(&local_70,0);
      if (local_24 == 0) goto LAB_00802234;
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar5;
    local_24 = 1;
  }
  _objc_storeStrong(&local_30,0);
LAB_00802264:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

