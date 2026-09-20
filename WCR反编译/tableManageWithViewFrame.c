// tableManageWithViewFrame @ 00fa1da0

/* Function Stack Size: 0x10 bytes */

ID WCRefineHelper::tableManageWithViewFrame(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_viewFrame_026a5398);
  pcVar1 = "WCTableViewManager";
  local_50 = in_d0;
  uStack_48 = in_d1;
  local_40 = in_d2;
  uStack_38 = in_d3;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,uStack_48,local_40,uStack_38);
  uStack_78 = uStack_48;
  local_80 = local_50;
  uStack_68 = uStack_38;
  local_70 = local_40;
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_78;
  local_a0 = local_80;
  uStack_88 = uStack_68;
  local_90 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,uStack_78,local_70,uStack_68);
  (*(code *)PTR__objc_release_02578630)();
  FUN_00fa1f98();
  puVar2 = PTR___dispatch_main_q_02578680;
  if (((ulong)pcVar1 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_58;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_00fa2010;
    local_b0 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = pcVar1;
    _dispatch_async(puVar2,&local_c8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_a8,0);
  }
  pcVar1 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar1;
}

