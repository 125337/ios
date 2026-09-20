// addInputAccessoryViewToTextField: @ 018f7730

/* Function Stack Size: 0x18 bytes */

void WCRefineColorPickerController::addInputAccessoryViewToTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar1 = PTR__OBJC_CLASS___UIToolbar_026cf148;
  _objc_alloc();
  uVar5 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar6 = 0x4046000000000000;
  FUN_018f7960();
  local_68 = uVar3;
  local_60 = uVar4;
  local_58 = uVar5;
  local_50 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,uVar5,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setBarStyle__026b8880);
  puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  local_70 = puVar1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = local_70;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_78 = puVar2;
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setItems__026a17a8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setInputAccessoryView__026b8888,local_48);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

