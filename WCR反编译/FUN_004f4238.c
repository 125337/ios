// FUN_004f4238 @ 004f4238

/* WARNING: Restarted to delay deadcode elimination for space: ram */

byte FUN_004f4238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  dispatch_time_t dVar8;
  char *local_148;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  char *local_a8;
  cfstringStruct *local_a0;
  char *local_98;
  char *local_90;
  byte local_81;
  char *local_80;
  char *local_78;
  char *local_70;
  int local_68;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  byte local_31;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  if (((local_40 == 0) || (local_48 == 0)) ||
     (lVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_31 = 0;
    local_68 = 1;
    goto LAB_004f49fc;
  }
  if (DAT_028caeb0 == (char *)0x0) {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    DAT_028caeb0 = pcVar3;
  }
  local_148 = DAT_028caeb0;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_81 = 0;
  local_70 = local_148;
  if (local_148 == (char *)0x0) {
    local_148 = (char *)0x0;
  }
  else {
    if (DAT_028caeb8 == (char *)0x0) {
      pcVar3 = "CContactMgr";
      _objc_getClass();
      DAT_028caeb8 = pcVar3;
    }
    pcVar3 = DAT_028caeb8;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_getService__0269d170,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_148;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_148;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  local_90 = (char *)0x0;
  if ((local_78 != (char *)0x0) &&
     (pcVar3 = local_78,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getContactByName__0269d178,local_50);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_90;
    local_90 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = "ForwardMessageLogicController";
  _objc_getClass();
  pcVar5 = &cf_ForwardMsg_ToContact_;
  local_98 = pcVar3;
  _NSSelectorFromString();
  local_a0 = pcVar5;
  if ((local_98 == (char *)0x0) || (local_90 == (char *)0x0)) {
LAB_004f4928:
    local_31 = 0;
    local_68 = 1;
  }
  else {
    pcVar3 = local_98;
    _objc_alloc_init();
    local_a8 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,local_a0),
       ((ulong)pcVar3 & 1) == 0)) {
      local_68 = 0;
    }
    else {
      local_28 = &DAT_028caef0;
      local_30 = 0;
      _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257d6d8);
      if (*local_28 + 1 != 0) {
        _dispatch_once(*local_28 + 1,local_28,local_30);
      }
      _objc_storeStrong(&local_30,0);
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringWithFormat__0269cca8,&cf__p__f);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      uVar1 = DAT_028caee8;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(uVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028caee8,PTR_s_setObject_forKeyedSubscript__0269d248,local_a8,local_b0);
      _objc_sync_exit(uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,local_a0,local_48,local_90);
      dVar8 = _dispatch_time(0,3000000000);
      puVar7 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_b0;
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_004f94b8;
      local_c0 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = puVar6;
      _dispatch_after(dVar8,puVar7,&local_d8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      local_31 = 1;
      local_68 = 1;
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_b0,0);
    }
    _objc_storeStrong(&local_a8,0);
    if (local_68 == 0) goto LAB_004f4928;
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
LAB_004f49fc:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

