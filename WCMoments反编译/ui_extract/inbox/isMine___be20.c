// isMine: @0xbe20


/* Function Stack Size: 0x18 bytes */



bool WCMInboxController::isMine_(ID param_1,SEL param_2,ID param_3)



{

  undefined *puVar1;

  bool bVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 local_58;

  undefined8 local_50;

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

  puVar1 = PTR____NSArray0__struct_00110718;

  _Call(local_38,&cf_comment);

  local_40 = _objc_retainAutoreleasedReturnValue();

  _Call(local_40,&cf_dataItemUsrName,puVar1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _Text();

  local_48 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar3);

  lVar4 = _objc_msgSend_length(local_48,local_58);

  if (lVar4 == 0) {

    _objc_msgSend_facade(local_28,local_58);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    puVar1 = PTR____NSArray0__struct_00110718;

    _Call(local_38,&cf_objID);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _Text();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    local_20 = uVar6;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_58,&local_20,1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _Call(uVar3,&cf_getDataItemByID_);

    local_50 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar7);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _Call(local_50,&cf_username,puVar1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _Text();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar3 = local_48;

    local_48 = uVar6;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    _objc_storeStrong(&local_50,0);

  }

  uVar3 = local_48;

  _objc_msgSend_account(local_28,local_58);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  bVar2 = _objc_msgSend_isEqual_(uVar3,local_58);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _objc_storeStrong(&local_48);

  _objc_storeStrong(&local_40,0);

  _objc_storeStrong(&local_38,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return bVar2;

}




