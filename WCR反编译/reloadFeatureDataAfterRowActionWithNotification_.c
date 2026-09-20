// reloadFeatureDataAfterRowActionWithNotification: @ 01c90860

/* Function Stack Size: 0x14 bytes */

void WCRefinePluginFeatureManagementViewController::reloadFeatureDataAfterRowActionWithNotification_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  byte local_38;
  undefined1 auStack_30 [15];
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_30,param_1);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01c90934;
  local_48 = &DAT_0257f4b8;
  _objc_copyWeak(auStack_40,auStack_30);
  local_38 = local_21 & 1;
  _dispatch_async(puVar1,&local_60);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_30);
  return;
}

