// viewDidLoad @0x60ed8


/* Function Stack Size: 0x10 bytes */



void _0x00bdda58::viewDidLoad(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ulong uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  ID local_80;

  class_t *pcStack_78;

  undefined8 local_70;

  undefined8 uStack_68;

  undefined8 local_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  pcStack_78 = &objc::class_t::_0x00bdda58;

  local_80 = param_1;

  _objc_msgSendSuper2(&local_80,"viewDidLoad");

  FUN_002a1f60(param_1,extraout_x1,&cf_br);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar7._0_8_,auVar7._8_8_,uVar2);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar2);

  FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2600(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d2e0(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1040(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_0029f0a0(param_1,extraout_x1_00,0);

  FUN_0029f120(param_1,extraout_x1_01,0);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar7._0_8_;

  FUN_002a45e0(uVar2,auVar7._8_8_,&cf_ttsSelectedVoice);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1200(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_002a45e0(uVar2,extraout_x1_02,&cf_ttsSelectedVoiceName);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1220(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  auVar7 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar3 = FUN_00296f40(auVar7._0_8_,auVar7._8_8_,&cf_7Re,0,param_1,"refreshVoiceList");

  auVar7 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar4 = FUN_00296f40(auVar7._0_8_,auVar7._8_8_,&cf__g0WeN,0,param_1,"showLocalVoiceFilePicker");

  auVar7 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  auVar7 = FUN_00296f40(auVar7._0_8_,auVar7._8_8_,&cf_egn,0,param_1,"showVoiceSourceSettings");

  local_70 = uVar3;

  uStack_68 = auVar7._0_8_;

  local_60 = uVar4;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar7._8_8_,&local_70,3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00299140(param_1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0de0(auVar8._0_8_,auVar8._8_8_,uVar5);

  _objc_release(auVar8._0_8_);

  _objc_release(uVar5);

  FUN_002a2da0(param_1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924c0(auVar8._0_8_,auVar8._8_8_,&cf_ttsUseLocalVoiceList);

  _objc_release(auVar8._0_8_);

  if (iVar1 == 0) {

    FUN_002982a0(param_1);

  }

  else {

    uVar6 = FUN_002982c0(param_1);

    if ((uVar6 & 1) == 0) {

      FUN_00298120(param_1);

    }

  }

  _objc_release(auVar7._0_8_);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




