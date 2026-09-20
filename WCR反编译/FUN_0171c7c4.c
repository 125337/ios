// FUN_0171c7c4 @ 0171c7c4

void FUN_0171c7c4(long param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_f8;
  cfstringStruct *local_d8;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  undefined4 local_58;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  if (*(long *)(param_1 + 0x20) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x38),PTR_s_showToast__026b3a18,&cf_QQbc1Y_gRhVeT_);
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
      }
    }
    else {
      local_38 = 0;
      local_48 = 0;
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,*(undefined8 *)(param_1 + 0x28),0,
                 &local_48);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_38,local_48);
      local_40 = pcVar2;
      if (local_38 == 0) {
        local_61 = 0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        if (pcVar2 != (cfstringStruct *)0x0) {
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
          _objc_retainAutoreleasedReturnValue();
          local_61 = 1;
          local_60 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = pcVar3 == (cfstringStruct *)section_000000b8.segname;
        }
        if ((local_61 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (bVar1) {
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_d8 = &cf_QQbcbRSvP_N__O_u;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = local_d8;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x38),PTR_s_showSuccessToast__026b3978,local_70);
          if (*(long *)(param_1 + 0x30) != 0) {
            (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1);
          }
          _objc_storeStrong(&local_70,0);
        }
        else {
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
          _objc_retainAutoreleasedReturnValue();
          local_f8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_f8 = &cf_QQbc1Y_hgQQbcx_f_Tcknx0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_78 = local_f8;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x38),PTR_s_showToast__026b3a18,local_78);
          if (*(long *)(param_1 + 0x30) != 0) {
            (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
          }
          _objc_storeStrong(&local_78,0);
        }
        local_58 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x38),PTR_s_showToast__026b3a18,&cf_QQbc1Y_elggRhVT_);
        if (*(long *)(param_1 + 0x30) != 0) {
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
        }
        local_58 = 1;
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_showToast__026b3a18,&cf_Q__Bl1Y_hgQ__c);
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    }
  }
  return;
}

