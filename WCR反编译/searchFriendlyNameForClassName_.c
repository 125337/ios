// searchFriendlyNameForClassName: @ 0091ef8c

/* Function Stack Size: 0x18 bytes */

ID WCNavigationMonitor::searchFriendlyNameForClassName_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_d0;
  ulong local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  long local_40;
  SEL local_38;
  ID local_30;
  ulong local_28;
  undefined8 local_20;
  long *local_18;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = 0;
    local_44 = 1;
  }
  else {
    pcVar2 = &cf_WCRefineSearchManager;
    _NSClassFromString();
    local_50 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_28 = 0;
      local_44 = 1;
    }
    else {
      local_78 = PTR___NSConcreteGlobalBlock_02578658;
      local_70 = 0xd0800000;
      local_6c = 0;
      local_68 = FUN_0091f28c;
      local_60 = &DAT_025797b0;
      local_18 = &DAT_028ce378;
      local_20 = 0;
      local_58 = pcVar2;
      _objc_storeStrong(&local_20,&local_78);
      if (*local_18 + 1 != 0) {
        _dispatch_once(*local_18 + 1,local_18,local_20);
      }
      _objc_storeStrong(&local_20,0);
      if (DAT_028ce370 == 0) {
        local_28 = 0;
        local_44 = 1;
      }
      else {
        local_80 = PTR_s_getViewControllerFriendlyName__026aa500;
        uVar3 = DAT_028ce370;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028ce370,PTR_s_respondsToSelector__026ca818,
                   PTR_s_getViewControllerFriendlyName__026aa500);
        if ((uVar3 & 1) == 0) {
          local_28 = 0;
          local_44 = 1;
        }
        else {
          uVar3 = DAT_028ce370;
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028ce370,local_80,local_40);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_88 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((uVar3 & 1) == 0) ||
             (uVar3 = local_88,
             (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0), uVar3 == 0)) {
            local_d0 = 0;
          }
          else {
            local_d0 = local_88;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = local_d0;
          local_44 = 1;
          _objc_storeStrong(&local_88,0);
        }
      }
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

