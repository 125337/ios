// rewrittenDouyinImageURLWithoutWatermarkTemplate: @ 010373fc

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::rewrittenDouyinImageURLWithoutWatermarkTemplate_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_50 = (undefined *)0x0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  puVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  puVar1 = local_50;
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar1;
    local_54 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = puVar1;
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,
               &cf__tplv_dy____water_lqen_aweme_images_resize_______,1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_60;
    local_68 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      local_28 = 0;
      local_20 = 0;
      local_30 = puVar3;
      local_18 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_stringByReplacingMatchesInString_0269ef30,puVar1,0,0,puVar3,
                 &cf__tplv_obj);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_60;
      local_60 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar1;
    local_54 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_38;
}

