// showLogHelp @ 00918624

/* Function Stack Size: 0x10 bytes */

void NavigationMonitorViewController::showLogHelp(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR___dispatch_main_q_02578680;
  local_20 = param_2;
  local_18 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar1;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

