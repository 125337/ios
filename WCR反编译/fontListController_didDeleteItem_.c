// fontListController:didDeleteItem: @ 019dd538

/* Function Stack Size: 0x20 bytes */

void WCRefineFontBeautifyViewController::fontListController_didDeleteItem_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  long local_68;
  long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  IVar2 = local_28;
  uVar1 = local_38;
  if (local_40 == 0) {
    local_68 = *(long *)PTR____NSDictionary0___02578288;
  }
  else {
    local_68 = local_40;
  }
  local_20 = local_68;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_fontListController_didDeleteItem_026baff8,uVar1)
  ;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

