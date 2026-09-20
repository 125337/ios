// appendMenuItemIfNeeded:title:svgName:action: @ 00f36dc8

/* Function Stack Size: 0x30 bytes */

ID WCRefineEmoticonToolsHelper::appendMenuItemIfNeeded_title_svgName_action_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,SEL param_6)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_100;
  undefined *local_a0;
  undefined *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  SEL local_58;
  long local_50;
  long local_48;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = (undefined *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  lVar2 = local_48;
  local_58 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (((lVar2 == 0) ||
      (lVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
      lVar2 == 0)) || (local_58 == 0)) {
    puVar7 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar7;
    local_5c = 1;
  }
  else {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_menuContainsTitle_title__026ac080,local_40,local_48);
    puVar7 = local_40;
    if ((IVar3 & 1) == 0) {
      pcVar4 = &cf_MMMenuItem;
      _NSClassFromString();
      pcVar5 = &cf_initWithTitle_svgName_action_;
      local_68 = pcVar4;
      _NSSelectorFromString();
      local_70 = pcVar5;
      if ((local_68 == (cfstringStruct *)0x0) ||
         (pcVar4 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_68,PTR_s_instancesRespondToSelector__0269da90,pcVar5),
         puVar7 = PTR__objc_msgSend_02578628, ((ulong)pcVar4 & 1) == 0)) {
        puVar7 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar7;
        local_5c = 1;
      }
      else {
        local_78 = PTR__objc_msgSend_02578628;
        pcVar4 = local_68;
        _objc_alloc();
        pcVar5 = pcVar4;
        (*(code *)puVar7)();
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        puVar7 = local_40;
        if (local_80 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar7;
          local_5c = 1;
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar6);
          bVar1 = ((ulong)puVar7 & 1) == 0;
          if (bVar1) {
            local_100 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_a0 = local_100;
          }
          else {
            local_100 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
            local_90 = local_100;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = local_100;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_a0);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_90);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addObject__0269d180,local_80);
          puVar7 = local_88;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar7;
          local_5c = 1;
          _objc_storeStrong(&local_88,0);
        }
        _objc_storeStrong(&local_80,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar7;
      local_5c = 1;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

