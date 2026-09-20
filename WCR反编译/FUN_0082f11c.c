// FUN_0082f11c @ 0082f11c

byte FUN_0082f11c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte local_61;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  byte local_21;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_6);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_7);
  puVar3 = local_30;
  bVar1 = true;
  if (local_30 != local_40) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_backgroundView_026a0320);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar3 == puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar3 = local_30;
  if (bVar1) {
    local_21 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = local_30;
      FUN_0082f794(local_30,local_38);
      local_61 = (byte)puVar3;
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
        if ((param_3 < 1.0) || (param_4 < 1.0)) {
          local_21 = 0;
          goto LAB_0082f5c8;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        local_61 = 0;
        if (param_3 - 1.0 <= param_2) {
          local_61 = param_4 - 1.0 <= param_1;
        }
      }
      if ((local_61 & 1) == 0) {
        local_21 = 0;
      }
      else {
        puVar3 = local_30;
        FUN_0082e90c(local_30,local_40);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = local_30;
          _object_getClass();
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          if (puVar3 == puVar2) {
            puVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (puVar2 == (undefined *)0x0) {
              puVar3 = local_30;
              FUN_0082f63c();
              local_21 = (byte)puVar3 & 1;
            }
            else {
              local_21 = 0;
            }
          }
          else {
            local_21 = 0;
          }
        }
        else {
          local_21 = 1;
        }
      }
    }
    else {
      local_21 = 0;
    }
  }
LAB_0082f5c8:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

