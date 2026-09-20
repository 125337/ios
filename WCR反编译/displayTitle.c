// displayTitle @ 010151f8

/* Function Stack Size: 0x10 bytes */

ID WCRefineLinkVideoVariant::displayTitle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_label_026adba8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_28;
  if (IVar4 == 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_height_026a12d8);
    puVar1 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if ((long)IVar3 < 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObject__0269d180,&::cf__);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_height_026a12d8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__ldp);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_label_026adba8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_width_026a12d0);
  if ((0 < (long)IVar3) &&
     (IVar3 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_height_026a12d8),
     puVar1 = local_28, puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8, 0 < (long)IVar3)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_width_026a12d0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_height_026a12d8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__ldx_ld);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dataSize_026adaa8);
  puVar1 = local_28;
  puVar2 = PTR_WCRefineLinkParser_026ce168;
  if (0 < (long)IVar3) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dataSize_026adaa8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_formatBytes__026ab1a0,IVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_componentsJoinedByString__0269d140,&::cf_space_s_);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

