// FUN_01105ea0 @ 01105ea0

void FUN_01105ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_38 = lVar1;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  if (((local_20 == (cfstringStruct *)0x0) ||
      (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
      lVar1 == 0)) ||
     (lVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_44 = 1;
  }
  else {
    pcVar3 = &cf_MMMenuItem;
    _NSClassFromString();
    pcVar4 = &cf_initWithTitle_svgName_action_;
    local_50 = pcVar3;
    _NSSelectorFromString();
    local_58 = pcVar4;
    if ((local_50 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_instancesRespondToSelector__0269da90,pcVar4),
       ((ulong)pcVar3 & 1) == 0)) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
      local_44 = 1;
    }
    else {
      local_60 = (cfstringStruct *)0x0;
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_action_026a4358);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_action_026a4358);
        local_60 = pcVar3;
      }
      pcVar3 = local_20;
      if (local_60 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
        local_44 = 1;
      }
      else {
        pcVar3 = local_50;
        _objc_alloc();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_68 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_20;
        if (local_68 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar3;
          local_44 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_target_026a0dc8);
          if ((((ulong)pcVar3 & 1) != 0) &&
             (pcVar3 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setTarget__0269e1a8),
             ((ulong)pcVar3 & 1) != 0)) {
            pcVar3 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_target_026a0dc8);
            _objc_retainAutoreleasedReturnValue();
            local_70 = pcVar3;
            if (pcVar3 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTarget__0269e1a8,pcVar3);
            }
            _objc_storeStrong(&local_70,0);
          }
          puVar5 = PTR_WCRefinePluginIconCatalog_026ce4e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_menuTypeOfItem__026aee30,local_20)
          ;
          local_78 = puVar5;
          if ((puVar5 != (undefined *)0x0) &&
             (pcVar3 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setMenuType__026aeeb8),
             ((ulong)pcVar3 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMenuType__026aeeb8,local_78);
          }
          pcVar3 = local_20;
          _objc_getAssociatedObject(local_20,&DAT_028e3508);
          _objc_retainAutoreleasedReturnValue();
          local_80 = pcVar3;
          if (pcVar3 != (cfstringStruct *)0x0) {
            _objc_setAssociatedObject(local_68,&DAT_028e3508,pcVar3,3);
          }
          pcVar3 = local_68;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar3;
          local_44 = 1;
          _objc_storeStrong(&local_80,0);
        }
        _objc_storeStrong(&local_68,0);
      }
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

