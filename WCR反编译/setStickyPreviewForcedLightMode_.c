// setStickyPreviewForcedLightMode: @ 018c8d8c

/* Function Stack Size: 0x14 bytes */

void WCRefineChatToolbarViewController::setStickyPreviewForcedLightMode_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  undefined8 local_40;
  byte local_38;
  undefined8 local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stickyPreviewHost_026b7f50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPreviewAppearanceLocked__026b7f60,1);
    local_48 = local_18;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_30 = 2;
    if ((local_21 & 1) != 0) {
      local_30 = 1;
    }
    local_68 = PTR___NSConcreteGlobalBlock_02578658;
    local_60 = 0xd0800000;
    local_5c = 0;
    local_58 = FUN_018c8ed8;
    local_50 = &DAT_02589ff8;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_30;
    local_38 = local_21 & 1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_performWithoutAnimation__0269e7e0,&local_68);
    _objc_storeStrong(&local_48,0);
  }
  return;
}

