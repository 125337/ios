// FUN_0064679c @ 0064679c

void FUN_0064679c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_48 = 1;
  }
  else {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,local_20);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRefineNameplateHelper_026ce5f8;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_isSceneEnabled__026a5d60,local_38);
    uVar2 = local_50;
    if (((ulong)puVar1 & 1) == 0) {
      if (local_50 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_restoreNicknamePushIfNeeded__026a5e90,
                   local_50);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_removeNameplateFromHostView__026a5d88,
                 local_18);
      local_48 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isHidden_026ca768),
         (uVar2 & 1) != 0)) {
        if (local_50 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineNameplateHelper_026ce5f8,
                     PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_50);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_removeNameplateFromHostView__026a5d88,
                   local_18);
        local_48 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineNameplateHelper_026ce5f8,
                   PTR_s_applyNameplateBesideNicknameLabe_026a5d98,local_50,local_18,local_30,
                   local_28,local_38,1);
        local_48 = 0;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

