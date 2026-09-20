// FUN_01bf1fb4 @ 01bf1fb4

void FUN_01bf1fb4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  ulong local_70;
  undefined *local_40;
  undefined4 local_38;
  bool local_31;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_31 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_70 = 0;
  }
  else {
    local_70 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_70;
  }
  local_31 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_70;
  if ((local_31 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_28 == 0) {
    local_18 = (undefined *)0x0;
    local_38 = 1;
    goto LAB_01bf22d0;
  }
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,PTR_s_unarchiveObjectWithData__026a4f98,
             local_28);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = &cf_WCTempSaveModel;
  local_40 = puVar3;
  _NSClassFromString();
  if (pcVar5 == (cfstringStruct *)0x0) {
LAB_01bf21e0:
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_content_026a4a90);
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_imageArray_026a54a8);
      local_18 = local_40;
      if (((ulong)puVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        goto LAB_01bf2280;
      }
    }
    local_18 = (undefined *)0x0;
  }
  else {
    puVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,pcVar5);
    puVar3 = local_40;
    if (((ulong)puVar6 & 1) == 0) goto LAB_01bf21e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
  }
LAB_01bf2280:
  local_38 = 1;
  _objc_storeStrong(&local_40,0);
LAB_01bf22d0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

