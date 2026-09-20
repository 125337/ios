// FUN_007ec958 @ 007ec958

void FUN_007ec958(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *local_d0;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38 [3];
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x20) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,&cf_gRhVeT_);
      }
    }
    else {
      local_38[0] = 0;
      local_48 = 0;
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,*(undefined8 *)(param_1 + 0x28),0,
                 &local_48);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(local_38,local_48);
      local_40 = pcVar3;
      if (local_38[0] == 0) {
        local_51 = 0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        if (pcVar3 != (cfstringStruct *)0x0) {
          pcVar4 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
          _objc_retainAutoreleasedReturnValue();
          local_51 = 1;
          local_50 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = pcVar4 == (cfstringStruct *)section_000000b8.segname;
        }
        if ((local_51 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_50);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        if (bVar1) {
          if (*(long *)(param_1 + 0x30) != 0) {
            (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1,0);
          }
        }
        else {
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_d0 = &cf__gw;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_60 = local_d0;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (*(long *)(param_1 + 0x30) != 0) {
            (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,local_60);
          }
          _objc_storeStrong(&local_60,0);
        }
      }
      else if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,&cf_elggRhVT_);
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(local_38,0);
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  return;
}

