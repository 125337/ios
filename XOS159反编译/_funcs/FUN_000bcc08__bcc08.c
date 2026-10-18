// FUN_000bcc08 @0xbcc08


void FUN_000bcc08(long param_1)



{

  ulong uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined1 auVar5 [16];

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  

  uVar1 = _objc_opt_respondsToSelector

                    (*(undefined8 *)(param_1 + 0x38),

                     "addMsgMergeReverseControl:toSection:tableViewInfo:");

  if ((uVar1 & 1) != 0) {

    uVar2 = *(undefined8 *)(param_1 + 0x20);

    _objc_retain(uVar2);

    uVar3 = *(undefined8 *)(param_1 + 0x28);

    local_38 = uVar2;

    _objc_retain(uVar3);

    uVar2 = *(undefined8 *)(param_1 + 0x30);

    local_40 = uVar3;

    _objc_retain(uVar2);

    local_48 = uVar2;

    FUN_00298d40(*(undefined8 *)(param_1 + 0x38),extraout_x1,

                 "addMsgMergeReverseControl:toSection:tableViewInfo:");

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002975a0(&_OBJC_CLASS___NSInvocation,auVar4._8_8_,auVar4._0_8_);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar5._0_8_;

    FUN_002a1ce0(uVar2,auVar5._8_8_,*(undefined8 *)(param_1 + 0x38));

    FUN_002a13a0(uVar2,extraout_x1_00,"addMsgMergeReverseControl:toSection:tableViewInfo:");

    FUN_0029cce0(uVar2,extraout_x1_01,&local_38,2);

    FUN_0029cce0(uVar2,extraout_x1_02,&local_40,3);

    FUN_0029cce0(uVar2,extraout_x1_03,&local_48,4);

    FUN_002975c0(uVar2);

    _objc_release(uVar2);

    _objc_release(auVar4._0_8_);

    _objc_release(local_48);

    _objc_release(local_40);

    _objc_release(local_38);

  }

  return;

}




