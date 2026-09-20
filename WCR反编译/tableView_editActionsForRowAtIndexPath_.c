// tableView:editActionsForRowAtIndexPath: @ 01e3c7ac

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

ID WCRefineSvgColorSchemeHistoryViewController::tableView_editActionsForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  ID local_d8;
  undefined1 auStack_d0 [8];
  undefined *local_c8 [3];
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined1 auStack_78 [8];
  ID local_70;
  undefined4 local_64;
  long local_60 [3];
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60[1] = 0;
  local_60[2] = param_2;
  local_48 = param_1;
  _objc_storeStrong(local_60 + 1,param_3);
  local_60[0] = 0;
  _objc_storeStrong(local_60,param_4);
  lVar1 = local_60[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_row_0269e210);
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (lVar1 < (long)IVar3) {
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_row_0269e210);
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectAtIndexedSubscript__0269cc78,lVar1);
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_initWeak(auStack_78,local_48);
    puVar4 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01e3cca8;
    local_98 = &DAT_02589ab8;
    _objc_copyWeak(auStack_88,auStack_78);
    IVar2 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,&cf__TT,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_80 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d90,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
    local_f8 = PTR___NSConcreteStackBlock_02578660;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = FUN_01e3cd5c;
    local_e0 = &DAT_02589ab8;
    _objc_copyWeak(auStack_d0,auStack_78);
    IVar2 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_rowActionWithStyle_title_handler_026a2d90,0,&cf_Rd,&local_f8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_80;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_c8[0] = puVar4;
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_64 = 1;
    local_40 = puVar5;
    _objc_storeStrong(local_c8);
    _objc_storeStrong(&local_d8,0);
    _objc_destroyWeak(auStack_d0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_90,0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_storeStrong(&local_70,0);
  }
  else {
    puVar4 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_64 = 1;
    local_40 = puVar4;
  }
  _objc_storeStrong(local_60);
  _objc_storeStrong(local_60 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_40;
}

