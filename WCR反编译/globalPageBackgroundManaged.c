// globalPageBackgroundManaged @ 01781eec

/* Function Stack Size: 0x10 bytes */

bool WCPluginsViewControllerBehavior::globalPageBackgroundManaged(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_getAssociatedObject(param_1,PTR_s_globalPageBackgroundManaged_026b4578);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (bool)IVar1;
}

