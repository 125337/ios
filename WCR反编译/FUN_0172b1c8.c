// FUN_0172b1c8 @ 0172b1c8

void FUN_0172b1c8(long param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  cfstringStruct *local_78;
  undefined1 *local_58;
  byte local_49;
  undefined1 *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x30);
    pcVar2 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_78 = &cf_Q__;
    }
    (**(code **)(lVar7 + 0x10))(lVar7,0,local_78);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      return;
    }
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,&cf_gRhVeT_);
    return;
  }
  local_28 = 0;
  local_38 = 0;
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
             PTR_s_JSONObjectWithData_options_error_026ca480,*(undefined8 *)(param_1 + 0x28),0,
             &local_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,local_38);
  local_30 = puVar3;
  if (local_28 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)puVar3 & 1) != 0) {
      puVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 0;
      bVar1 = false;
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
        _objc_retainAutoreleasedReturnValue();
        local_49 = 1;
        local_48 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar6 == section_000000b8.segname;
      }
      if ((local_49 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (bVar1) {
        if (*(long *)(param_1 + 0x30) != 0) {
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1,0);
        }
        local_3c = 1;
      }
      else {
        puVar5 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_58 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((((ulong)puVar5 & 1) == 0) ||
           (puVar5 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0)
           , puVar5 == (undefined1 *)0x0)) {
          _objc_storeStrong(&local_58,&cf__gw);
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,local_58);
        }
        _objc_storeStrong(&local_58,0);
        local_3c = 0;
      }
      goto LAB_0172b5e4;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,&cf_elggRhVT_);
  }
  local_3c = 1;
LAB_0172b5e4:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

