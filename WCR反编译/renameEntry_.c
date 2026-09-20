// renameEntry: @ 0199681c

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::renameEntry_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  _objc_initWeak(auStack_38,local_18);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_01996cd8;
  local_60 = &DAT_0257c948;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar1;
  _objc_copyWeak(auStack_50,auStack_38);
  FUN_019969e4(&cf__TT,0,uVar2,0x78,&cf_nx_,&local_78);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_58);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

