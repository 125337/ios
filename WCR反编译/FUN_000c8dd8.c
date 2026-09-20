// FUN_000c8dd8 @ 000c8dd8

byte FUN_000c8dd8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_170;
  undefined *local_148;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined8 *local_40;
  undefined8 *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = param_3;
  local_38 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_21 = 0;
    local_50 = 1;
    goto LAB_000c9388;
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar1 & 1) == 0) {
    local_21 = 0;
    local_50 = 1;
  }
  else {
    puVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_left)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_60;
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_right);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_68;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_70 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    puVar1 = local_70;
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar1 & 1) != 0) goto LAB_000c91a0;
      local_21 = 0;
    }
    else {
LAB_000c91a0:
      puVar1 = local_68;
      if (local_38 != (undefined8 *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar1 & 1) == 0) {
          local_148 = (undefined *)0x0;
        }
        else {
          local_148 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_integerValue_026ca750);
        }
        *local_38 = local_148;
      }
      puVar1 = local_70;
      if (local_40 != (undefined8 *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar1 & 1) == 0) {
          local_170 = (undefined *)0x0;
        }
        else {
          local_170 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_integerValue_026ca750);
        }
        *local_40 = local_170;
      }
      local_21 = 1;
    }
    local_50 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
LAB_000c9388:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

