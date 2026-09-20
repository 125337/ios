// FUN_002e61ec @ 002e61ec

byte FUN_002e61ec(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_f0;
  cfstringStruct *local_a0;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  int local_40;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  pcVar3 = local_30;
  if (((ulong)pcVar2 & 1) == 0) {
    local_21 = 0;
    local_40 = 1;
    goto LAB_002e6728;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = pcVar3;
  while (local_48 != (cfstringStruct *)0x0) {
    pcVar2 = local_48;
    _object_getClass();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_a0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_a0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_EditMenu);
    if ((((((ulong)pcVar2 & 1) == 0) &&
         (pcVar2 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_50,PTR_s_containsString__0269d0b0,&cf_UICallout), ((ulong)pcVar2 & 1) == 0
         )) && (pcVar2 = local_50,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_50,PTR_s_containsString__0269d0b0,&cf_UITextEffectsWindow),
               ((ulong)pcVar2 & 1) == 0)) &&
       ((pcVar2 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_containsString__0269d0b0,&cf__UIContextMenu),
        ((ulong)pcVar2 & 1) == 0 &&
        (pcVar2 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_containsString__0269d0b0,&cf_UIEditMenu), ((ulong)pcVar2 & 1) == 0
        )))) {
      local_40 = 0;
    }
    else {
      local_21 = 1;
      local_40 = 1;
    }
    _objc_storeStrong(&local_50,0);
    if (local_40 != 0) goto LAB_002e6500;
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  local_40 = 2;
LAB_002e6500:
  _objc_storeStrong(&local_48,0);
  if (local_40 != 2) goto LAB_002e6728;
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
LAB_002e66ec:
    local_21 = 0;
    local_40 = 1;
  }
  else {
    _object_getClass();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_f0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_f0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_TextEffects);
    if (((((ulong)pcVar2 & 1) == 0) &&
        (pcVar2 = local_60,
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_EditMenu),
        ((ulong)pcVar2 & 1) == 0)) &&
       (pcVar2 = local_60,
       (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_UICallout),
       ((ulong)pcVar2 & 1) == 0)) {
      local_40 = 0;
    }
    else {
      local_21 = 1;
      local_40 = 1;
    }
    _objc_storeStrong(&local_60,0);
    if (local_40 == 0) goto LAB_002e66ec;
  }
  _objc_storeStrong(&local_58,0);
LAB_002e6728:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

