// loadMessages @0xbd18


/* Function Stack Size: 0x10 bytes */



void WCMInboxController::loadMessages(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 local_50;

  undefined *local_40;

  undefined *local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSend_facade(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar2,&cf_getAllMessages,PTR____NSArray0__struct_00110718);

  local_28 = (undefined *)_objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  puVar1 = local_28;

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar3 = _objc_opt_isKindOfClass(puVar1,uVar2);

  if ((uVar3 & 1) == 0) {

    local_40 = PTR____NSArray0__struct_00110718;

  }

  else {

    local_40 = local_28;

  }

  _objc_msgSend_setMessages_(local_18,local_50,local_40);

  _objc_msgSend_changeCategory(local_18,local_50);

  _objc_msgSend_refreshControl(local_18,local_50);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_endRefreshing(uVar2,local_50);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_28,0);

  return;

}




