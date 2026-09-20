// showBelowMessageAlignment: @ 018be890

/* Function Stack Size: 0x18 bytes */

void WCRefineChatTimeViewController::showBelowMessageAlignment_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  SEL local_60;
  ID local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  local_60 = param_2;
  local_58 = param_1;
  _objc_storeStrong(&local_68,param_3);
  puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertController_026ce178,
             PTR_s_alertControllerWithTitle_message_0269dc00,&cf_Ne_Pe_,
             &cf_y4YP_eS_Pbe__P0_PTS__te4ls_0WvOPy0,1);
  _objc_retainAutoreleasedReturnValue();
  local_50 = &cf_y4YP;
  local_48 = &cf__4YP;
  local_40 = &cf___P;
  local_38 = &cf_E__N;
  local_30 = &cf_S_P;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5);
  _objc_retainAutoreleasedReturnValue();
  local_80 = (undefined *)0x0;
  local_78 = puVar4;
  while( true ) {
    puVar4 = local_80;
    puVar5 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
    puVar1 = local_70;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    if (puVar5 <= puVar4) break;
    puVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_58;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_018bebcc;
    local_98 = &DAT_02589f78;
    local_88 = local_80;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,puVar4,0,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_90,0);
    local_80 = local_80 + 1;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertAction_026ce180,PTR_s_actionWithTitle_style_handler__0269dc08,
             &cf_Sm,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_presentViewController_animated_c_0269d2b0,local_70,1,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

