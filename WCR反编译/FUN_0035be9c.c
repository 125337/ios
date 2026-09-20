// FUN_0035be9c @ 0035be9c

void FUN_0035be9c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  code *pcVar4;
  code *local_70;
  code *local_50;
  code *local_48;
  code *local_40;
  cfstringStruct *local_38;
  code *local_30;
  undefined4 local_24;
  code *local_20;
  code *local_18;
  
  local_20 = (code *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (code *)0x0) {
    local_18 = (code *)0x0;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customView_0269ea28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    pcVar4 = local_30;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar3 = &cf_view;
      _NSSelectorFromString();
      pcVar4 = local_20;
      local_38 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)pcVar4 & 1) == 0) {
        local_18 = (code *)0x0;
        local_24 = 1;
      }
      else {
        pcVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_methodForSelector__0269e1d8,local_38);
        local_40 = pcVar4;
        if (pcVar4 == (code *)0x0) {
          local_18 = (code *)0x0;
          local_24 = 1;
        }
        else {
          pcVar1 = local_20;
          local_48 = pcVar4;
          (*pcVar4)(local_20,local_38);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_50 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((ulong)pcVar1 & 1) == 0) {
            local_70 = (code *)0x0;
          }
          else {
            local_70 = local_50;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_70;
          local_24 = 1;
          _objc_storeStrong(&local_50,0);
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar4;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

