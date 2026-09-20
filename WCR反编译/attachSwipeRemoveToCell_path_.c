// attachSwipeRemoveToCell:path: @ 019afab0

/* Function Stack Size: 0x20 bytes */

void WCRFilePathListViewController::attachSwipeRemoveToCell_path_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined1 auStack_88 [8];
  undefined *local_80 [3];
  cfstringStruct *local_68;
  undefined1 auStack_60 [12];
  undefined4 local_54;
  long local_50;
  ulong local_48;
  SEL local_40;
  ID local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_4);
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setCustomRowAction__026a53c0);
  if (((uVar2 & 1) == 0) ||
     (lVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_54 = 1;
  }
  else {
    _objc_initWeak(auStack_60,local_38);
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_grouped_026ba7b8);
    pcVar1 = &cf_yd;
    if ((IVar4 & 1) == 0) {
      pcVar1 = &cf_Sm6e;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_019afe28;
    local_98 = &DAT_02589ab8;
    local_68 = pcVar1;
    _objc_copyWeak(auStack_88,auStack_60);
    lVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_rowActionWithStyle_title_handler_026a2d90,0,pcVar1,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_80[0] = puVar5;
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_setValue_forKey__0269d300,puVar6,&cf_customRowAction);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(local_80);
    _objc_storeStrong(&local_90,0);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_68,0);
    _objc_destroyWeak(auStack_60);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

