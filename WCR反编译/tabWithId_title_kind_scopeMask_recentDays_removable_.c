// tabWithId:title:kind:scopeMask:recentDays:removable: @ 015176f0

/* Function Stack Size: 0x3c bytes */

ID WCRefineTelegramGroupingStore::tabWithId_title_kind_scopeMask_recentDays_removable_
             (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,
             unsigned_long_long param_6,long_long param_7,bool param_8)

{
  undefined *puVar1;
  undefined *local_58;
  byte local_49;
  long_long local_48;
  unsigned_long_long local_40;
  long_long local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_49 = (byte)param_8;
  puVar1 = PTR_WCRefineTelegramTab_026ced70;
  local_48 = param_7;
  local_40 = param_6;
  local_38 = param_5;
  _objc_alloc_init();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTabId__026b00d0,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTitle__0269cef0,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setKind__026ad410,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setScopeMask__026b00d8,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setRecentDays__026b0130,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setRemovable__026b0140,local_49 & 1);
  puVar1 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

