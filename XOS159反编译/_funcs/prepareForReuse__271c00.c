// prepareForReuse @0x271c00


/* Function Stack Size: 0x10 bytes */



void XZYDockPlaylistCell::prepareForReuse(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  ID local_30;

  class_t *pcStack_28;

  

  pcStack_28 = &objc::class_t::XZYDockPlaylistCell;

  local_30 = param_1;

  _objc_msgSendSuper2(&local_30,"prepareForReuse");

  FUN_0029bb00(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b840();

  _objc_release(uVar1);

  FUN_0029bb00(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00271c80();

  _objc_release(uVar1);

  return;

}




