// fieldsForIdentifier: @ 01de7838

/* Function Stack Size: 0x18 bytes */

ID WCRefineSpecialTextListViewController::fieldsForIdentifier_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *local_78;
  undefined4 local_6c;
  ulong local_68;
  ulong local_60;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  uVar1 = local_60;
  _WCRefineSpecialTextStyle();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    local_20 = &cf_enabled;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_6c = 1;
    local_48 = puVar3;
  }
  else {
    local_30 = &cf_enabled;
    local_28 = &cf_text;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,2
              );
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_allowsGradient_026c58c8);
    if ((IVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,&cf_color);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180);
      uVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradient);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,&cf_color);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_addObject__0269d180,&cf_gradientPalette);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,&cf_color);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,&cf_midColor);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,&cf_endColor);
      }
    }
    puVar3 = local_78;
    local_40 = &cf_bold;
    local_38 = &cf_alignment;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = puVar3;
    local_6c = 1;
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_48;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

