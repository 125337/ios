// shareHierarchy: @ 00919398

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void NavigationMonitorViewController::shareHierarchy_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_58;
  undefined4 local_4c;
  ID local_48;
  ID local_40 [2];
  SEL local_30;
  ID local_28;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40[1] = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_40[0];
  _objc_getAssociatedObject(local_40[0],&cf_hierarchy);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar1;
  if (IVar1 == 0) {
    local_4c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIActivityViewController_026cea70;
    _objc_alloc();
    local_20 = local_48;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_initWithActivityItems_applicatio_026aa228,puVar4,0);
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)();
    FUN_009195e0();
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_popoverPresentationController_0269fdf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40[0],PTR_s_presentViewController_animated_c_0269d2b0,local_58,1);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(local_40 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

