// wcr_installStyleHeader @ 01bec234

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftListViewController::wcr_installStyleHeader(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 in_d0;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 uVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar6;
  undefined *local_98 [5];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_48 = param_2;
  local_40 = param_1;
  _objc_alloc();
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
  uVar5 = 0;
  uVar4 = 0;
  uVar6 = 0x404a000000000000;
  FUN_01be5b68();
  local_70 = uVar4;
  local_68 = uVar5;
  local_58 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithFrame__026ca6e8);
  local_50 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  _objc_alloc();
  local_38 = &cf_RhU;
  local_30 = &cf_aSGrU;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  local_98[0] = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_setSelectedSegmentIndex__0269e9e0,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_98[0],PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
             PTR_s_wcr_onStyleChanged__026c0a80,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_setAutoresizingMask__026ca878,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
  _CGRectInset();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,in_d0,uVar6,local_98[0],PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_98[0]);
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(local_98);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

