// pickChatAgentReplyMode @ 017d8f6c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::pickChatAgentReplyMode(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [8];
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined *local_58;
  SEL local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineAIStore_026ce048;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  _objc_initWeak(auStack_60,local_48);
  IVar1 = local_48;
  puVar3 = local_58;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_017d943c;
  local_78 = &DAT_02579c60;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = puVar3;
  _objc_copyWeak(auStack_68,auStack_60);
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_actionWithTitle_block__026b5340,&cf_hQmo_,&local_90);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_48;
  local_d0 = PTR___NSConcreteStackBlock_02578660;
  local_c8 = 0xc2000000;
  local_c4 = 0;
  local_c0 = FUN_017d94b8;
  local_b8 = &DAT_02579c60;
  puVar3 = local_58;
  local_40 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = puVar3;
  _objc_copyWeak(auStack_a8,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_actionWithTitle_block__026b5340,&::cf_N,&local_d0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_48;
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_017d9534;
  local_e8 = &DAT_02579c60;
  puVar3 = local_58;
  local_38 = IVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = puVar3;
  _objc_copyWeak(auStack_d8,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_actionWithTitle_block__026b5340,&cf_N__ub,&local_100);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_showSheetTitle_actions__026b5348,&cf_RVYagN);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_destroyWeak(auStack_d8);
  _objc_storeStrong(&local_e0);
  _objc_destroyWeak(auStack_a8);
  _objc_storeStrong(&local_b0,0);
  _objc_destroyWeak(auStack_68);
  _objc_storeStrong(&local_70,0);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

