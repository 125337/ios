// tagsForName: @ 01fbb824

/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeManagerViewController::tagsForName_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  uint local_6c;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_wechatThemeBeautifySelectedBubbl_026b0ed8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isBubbleRole_026c9f68);
  uVar4 = local_28;
  if ((IVar3 & 1) == 0) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wechatThemeBeautifySelectedTheme_026b0e60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&cf__O_u_N);
    }
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if ((uVar4 != 0) &&
       (uVar4 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_40),
       (uVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&cf_ll_N);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (uVar4 == 0) {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (puVar1 != (undefined *)0x0) goto LAB_01fbba78;
    }
    else {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_40);
      if ((uVar4 & 1) == 0) goto LAB_01fbba78;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&cf__O_u_N);
  }
LAB_01fbba78:
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_6c = 0;
  if (uVar4 != 0) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wechatThemeBeautifyPinnedThemeNa_026b0e40);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (uint)puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_6c & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&cf_n_v);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

