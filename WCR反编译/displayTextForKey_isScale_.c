// displayTextForKey:isScale: @ 018422a0

/* Function Stack Size: 0x1c bytes */

ID WCRefineAvatarFrameSpecialUserDetailViewController::displayTextForKey_isScale_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatValueForKey_default__026b6680,local_30);
  if ((param_4 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2fx);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

