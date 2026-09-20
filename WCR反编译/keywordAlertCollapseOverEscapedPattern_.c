// keywordAlertCollapseOverEscapedPattern: @ 00f9c540

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::keywordAlertCollapseOverEscapedPattern_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  undefined4 local_74;
  ulong local_70;
  SEL local_68;
  ID local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_70 = 0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  uVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  uVar2 = local_70;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar2;
    local_74 = 1;
  }
  else {
    uStack_88 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_mutableCopy_0269d8a0);
    local_80 = uStack_88;
    (*(code *)PTR__objc_msgSend_02578628)(uStack_88,PTR_s_length_0269cca0);
    local_28 = 0;
    local_20 = 0;
    local_90 = 0;
    local_30 = uStack_88;
    local_18 = uStack_88;
    while ((uVar2 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0),
           local_90 < uVar2 &&
           (uVar2 = local_80, puVar3 = PTR_s_rangeOfString_options_range__0269d130,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_80,PTR_s_rangeOfString_options_range__0269d130,&cf___,0,local_90,
                      uStack_88), uVar2 != 0x7fffffffffffffff))) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_replaceCharactersInRange_withStr_0269ef70,uVar2,puVar3,&cf__);
      local_90 = uVar2 + 1;
      uStack_88 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      uStack_88 = uStack_88 - (uVar2 + 1);
      local_50 = uStack_88;
      local_48 = local_90;
      local_40 = local_90;
      local_38 = uStack_88;
    }
    uVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_copy_0269d150);
    local_74 = 1;
    local_58 = uVar2;
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue();
  return local_58;
}

