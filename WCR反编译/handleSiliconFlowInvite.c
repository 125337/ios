// handleSiliconFlowInvite @ 017e8e24

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::handleSiliconFlowInvite(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  SEL local_38;
  ID local_30;
  ID local_28;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = param_2;
  local_30 = param_1;
  _objc_initWeak(auStack_40,param_1);
  IVar1 = local_30;
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_actionWithTitle_block__026b5340,&cf_Y6Rc,
             &PTR___NSConcreteGlobalBlock_02589268);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_30;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_017e9110;
  local_60 = &DAT_0257be28;
  local_28 = IVar2;
  _objc_copyWeak(auStack_58,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_actionWithTitle_block__026b5340,&::cf_Sb,&local_78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_showSheetTitle_actions__026b5348,&cf_ExWAmRlQ);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_40);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

