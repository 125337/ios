// updateProfileInputPlaceholderVisibilityForTextView: @ 01cd9654

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardBeautifyViewController::updateProfileInputPlaceholderVisibilityForTextView_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e46f9);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidden__026ca970,lVar1 != 0);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

