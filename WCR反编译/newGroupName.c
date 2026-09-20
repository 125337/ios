// newGroupName @ 01ab75a0

/* Function Stack Size: 0x10 bytes */

ID WCRGroupListViewController::newGroupName(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_customRows_026bde68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manageScope_026bdd90);
  local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (param_1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
  }
  return (ID)local_18;
}

