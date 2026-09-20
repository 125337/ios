// setGlobalPageBackgroundManaged: @ 01781f58

/* Function Stack Size: 0x14 bytes */

void WCPluginsViewControllerBehavior::setGlobalPageBackgroundManaged_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_globalPageBackgroundManaged_026b4578;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,param_3 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,puVar1,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

