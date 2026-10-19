// tableView:willDisplayCell:forRowAtIndexPath: @0xe198


/* Function Stack Size: 0x28 bytes */



void WCMInboxController::tableView_willDisplayCell_forRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)



{

  bool bVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 local_60;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  local_40 = 0;

  _objc_storeStrong(&local_40,param_4);

  local_48 = 0;

  _objc_storeStrong(&local_48,param_5);

  lVar2 = _objc_msgSend_row(local_48,local_60);

  bVar1 = false;

  if (-1 < lVar2) {

    uVar3 = _objc_msgSend_row(local_48,local_60);

    _objc_msgSend_filtered(local_28,local_60);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar5 = _objc_msgSend_count(uVar4,local_60);

    bVar1 = uVar3 < uVar5;

    (*(code *)PTR__objc_release_00110458)(uVar4);

  }

  if (bVar1) {

    _objc_msgSend_facade(local_28,local_60);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_filtered(local_28,local_60);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar7 = _objc_msgSend_row(local_48,local_60);

    _objc_msgSend_objectAtIndexedSubscript_(uVar6,local_60,uVar7);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    local_20 = uVar7;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_60,&local_20,1);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _Call(uVar4,&cf_markMessageRead_);

    _objc_unsafeClaimAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar8);

    (*(code *)PTR__objc_release_00110458)(uVar7);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar4);

  }

  _objc_storeStrong(&local_48);

  _objc_storeStrong(&local_40,0);

  _objc_storeStrong(&local_38,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

}




