// unescapeDouyinRenderedText: @ 010200f4

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::unescapeDouyinRenderedText_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  IVar2 = local_30;
  if (IVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__u0026);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_40;
    local_40 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__u002F);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_40 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__u002f,&cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_40 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_u002F,&cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_40 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_u002f,&cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_40 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__amp_,&cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_40 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_40 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

