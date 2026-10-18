// FUN_001316d4 @0x1316d4


void FUN_001316d4(undefined8 param_1,undefined8 param_2)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar3 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_001319f0(param_1,"m_translateView");

  auVar3 = _objc_retainAutoreleasedReturnValue();

  lVar2 = auVar3._0_8_;

  if (lVar2 != 0) {

    FUN_00291240(param_2,auVar3._8_8_,lVar2);

  }

  FUN_001319f0(param_1,"m_voiceTransView");

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(lVar2);

  if (lVar1 != 0) {

    FUN_00291240(param_2,extraout_x1,lVar1);

  }

  FUN_001319f0(param_1,"m_voiceTransTextView");

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(lVar1);

  if (lVar2 != 0) {

    FUN_00291240(param_2,extraout_x1_00,lVar2);

  }

  _objc_release(lVar2);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




