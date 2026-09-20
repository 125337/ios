// renameTab: @ 01e49968

/* Function Stack Size: 0x18 bytes */

void WCRefineTelegramGroupingTabsViewController::renameTab_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_88;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_initWeak(auStack_30,local_18);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_title_0269d250);
  _objc_retainAutoreleasedReturnValue();
  local_50 = local_28;
  local_88 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_88 = &::cf___;
  }
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01e49b14;
  local_58 = &DAT_0257c948;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_copyWeak(auStack_48,auStack_30);
  FUN_01e40be4(&cf__TTR_,&cf_R_Ty,local_88,0x10,&local_70);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

