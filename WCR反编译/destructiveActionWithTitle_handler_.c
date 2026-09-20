// destructiveActionWithTitle:handler: @ 01f6c978

/* Function Stack Size: 0x20 bytes */

ID WCRVPSheetAction::destructiveActionWithTitle_handler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRVPSheetAction_026cf7b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRVPSheetAction_026cf7b8,PTR_s_new_0269d288);
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle__0269cef0,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setStyle__0269f6f8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHandler__0269fb20,local_30);
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

