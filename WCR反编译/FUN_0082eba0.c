// FUN_0082eba0 @ 0082eba0

void FUN_0082eba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_140;
  ulong local_108;
  ulong local_b8;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar2 = local_30;
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_30;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar3 & 1) == 0) {
        local_140 = local_30;
      }
      else {
        local_140 = 0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888,local_140);
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_color);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      local_50[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) == 0) {
        local_b8 = local_50[0];
      }
      else {
        local_b8 = 0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888,local_b8);
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_opaque);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOpaque__026ca9f8,uVar2 & 0xffffffff)
        ;
      }
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_image);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_60 = uVar3;
      if (uVar3 != 0) {
        puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar3 = local_60;
        if ((uVar2 & 1) != 0) {
          puVar1 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar3 & 1) == 0) {
            local_108 = local_60;
          }
          else {
            local_108 = 0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setImage__026ca978,local_108);
        }
      }
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_hidden);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,uVar2 & 0xffffffff)
        ;
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(local_50,0);
    }
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

