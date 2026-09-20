// memberForUsername: @ 01aae108

/* Function Stack Size: 0x18 bytes */

ID WCRGroupCreateViewController::memberForUsername_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  bool local_51;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_41 = 0;
  local_51 = false;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_68 = (undefined *)0x0;
  }
  else {
    local_68 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_memberIndex_026bdd38);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_68;
  }
  local_51 = pcVar1 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_68;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  puVar2 = local_38;
  if (local_38 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineGroupMember_026cf2e8;
    _objc_alloc_init();
    if (local_30 == (cfstringStruct *)0x0) {
      local_90 = &::cf___;
    }
    else {
      local_90 = local_30;
    }
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setUsername__026a2510,local_90);
    if (local_30 == (cfstringStruct *)0x0) {
      local_a0 = &::cf___;
    }
    else {
      local_a0 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setDisplayName__026ae2f8,local_a0);
    puVar2 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_58 = 1;
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_58 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

