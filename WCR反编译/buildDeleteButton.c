// buildDeleteButton @ 01eab848

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoItemEditViewController::buildDeleteButton(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle_forState__026caab8,&cf_Rd_R);
  puVar1 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitleColor_forState__026caac0,puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cardColor_026c74e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4028000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_18,
             PTR_s_deleteTapped_026c7630,0x40);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_heightAnchor_0269ce50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

