// presentNativeSheetTitle:buttons:cancelTitle:cancelHandler: @ 00ffd79c

/* Function Stack Size: 0x30 bytes */

void WCRefineLinkMediaSender::presentNativeSheetTitle_buttons_cancelTitle_cancelHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_50;
  local_70 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_40;
  local_58 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_48;
  local_68 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = uVar1;
  _dispatch_async(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

