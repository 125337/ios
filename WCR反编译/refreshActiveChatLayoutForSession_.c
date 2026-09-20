// refreshActiveChatLayoutForSession: @ 00ecc8e0

/* Function Stack Size: 0x18 bytes */

void WCRefineChatIndentOverrideHelper::refreshActiveChatLayoutForSession_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

