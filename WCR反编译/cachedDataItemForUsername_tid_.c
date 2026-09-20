// cachedDataItemForUsername:tid: @ 010bbf54

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineMomentsMonitor::cachedDataItemForUsername_tid_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  long local_98;
  long local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     IVar1 = local_30, lVar2 == 0)) {
    local_28 = 0;
    local_4c = 1;
  }
  else {
    local_80 = 0;
    local_70 = 0x32000000;
    local_6c = 0x30;
    local_68 = FUN_010b6320;
    local_60 = FUN_010b6374;
    local_58 = 0;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_010bc1fc;
    local_a8 = &DAT_025851f8;
    local_78 = &local_80;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_40;
    local_a0 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_48;
    local_98 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = lVar3;
    local_88 = &local_80;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_performIOTaskSync__026ae6f0,&local_c0);
    IVar1 = local_78[5];
    (*(code *)PTR__objc_retain_02578638)();
    local_4c = 1;
    local_28 = IVar1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_a0,0);
    __Block_object_dispose(&local_80,8);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

