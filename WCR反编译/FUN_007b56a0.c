// FUN_007b56a0 @ 007b56a0

void FUN_007b56a0(undefined8 param_1,undefined8 param_2)

{
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  _objc_initWeak(auStack_38,local_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setOnSelectTabId__026a8250,&PTR___NSConcreteGlobalBlock_0257ff00);
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_007b73ec;
  local_58 = &DAT_0257ff20;
  _objc_copyWeak(auStack_50,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOnReselectTabId__026a8258,&local_70);
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_007b7638;
  local_80 = &DAT_0257ff50;
  _objc_copyWeak(auStack_78,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOnLongPressTabId__026a8260,&local_98);
  local_c0 = PTR___NSConcreteStackBlock_02578660;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = FUN_007b78e0;
  local_a8 = &DAT_02578da0;
  _objc_copyWeak(auStack_a0,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOnLongPressSettings__026a8268,&local_c0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

