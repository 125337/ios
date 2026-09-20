// FUN_0159a0e4 @ 0159a0e4

byte FUN_0159a0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  byte local_7c;
  ulong local_58;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_11 = 0;
    goto LAB_0159a378;
  }
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_7c = 1;
  if ((uVar4 & 1) != 0) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_7c = (byte)uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  lVar6 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  bVar1 = false;
  if (lVar6 == 0) {
LAB_0159a330:
    local_11 = local_7c & 1;
  }
  else {
    local_58 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentType);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    uVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = 0;
    if ((uVar3 & 1) != 0) goto LAB_0159a330;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
LAB_0159a378:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

