// prepareForReuse @0x1d926c


/* Function Stack Size: 0x10 bytes */



void XZYCLG3DGroupCell::prepareForReuse(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  ID local_40;

  class_t *pcStack_38;

  

  pcStack_38 = &objc::class_t::XZYCLG3DGroupCell;

  local_40 = param_1;

  _objc_msgSendSuper2(&local_40,"prepareForReuse");

  FUN_002a3e40(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b260(auVar2._0_8_,auVar2._8_8_,&cf_xzy_clg_groupCardFold);

  _objc_release(auVar2._0_8_);

  _objc_release(uVar1);

  FUN_0029e760(param_1,extraout_x1,0);

  FUN_0029ea60(param_1,extraout_x1_00,0);

  return;

}




