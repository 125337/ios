// stringValueFromObject:key: @ 00f32bc4

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::stringValueFromObject_key_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_48;
  int local_3c;
  long local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if ((local_30 == 0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_18 = 0;
    local_3c = 1;
    goto LAB_00f32dac;
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar5 = uVar2 & 0xffffffff;
  if ((uVar2 & 1) == 0) {
LAB_00f32d44:
    local_3c = 0;
  }
  else {
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    uVar2 = local_48;
    uVar5 = 0;
    if (uVar4 == 0) goto LAB_00f32d44;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    uVar5 = 1;
    local_3c = 1;
  }
  _objc_storeStrong(uVar5,&local_48,0);
  if (local_3c == 0) {
    local_18 = 0;
    local_3c = 1;
  }
LAB_00f32dac:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

