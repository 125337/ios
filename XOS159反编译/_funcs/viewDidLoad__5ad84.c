// viewDidLoad @0x5ad84


/* Function Stack Size: 0x10 bytes */



void OBF_AIChatSettingViewController::viewDidLoad(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined1 auVar6 [16];

  ID local_50;

  class_t *pcStack_48;

  

  pcStack_48 = &objc::class_t::OBF_AIChatSettingViewController;

  local_50 = param_1;

  _objc_msgSendSuper2(&local_50,"viewDidLoad");

  FUN_002a1f60(param_1,extraout_x1,&cf_A);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar6._0_8_,auVar6._8_8_,uVar2);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar2);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar6._0_8_;

  FUN_002a45e0(uVar2,auVar6._8_8_,&cf_aiChatSystemPrompt);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  pcVar3 = auVar6._0_8_;

  pcVar1 = &cf__O_f;

  if (pcVar3 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar3;

  }

  FUN_002a1be0(param_1,auVar6._8_8_,pcVar1);

  _objc_release(pcVar3);

  FUN_002a45e0(uVar2,extraout_x1_00,&cf_aiChatMessagePrefix);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  pcVar3 = auVar6._0_8_;

  pcVar1 = &::cf___;

  if (pcVar3 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar3;

  }

  FUN_0029fc40(param_1,auVar6._8_8_,pcVar1);

  _objc_release(pcVar3);

  FUN_002a45e0(uVar2,extraout_x1_01,&cf_aiChatMessageSuffix);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  pcVar3 = auVar6._0_8_;

  pcVar1 = &::cf___;

  if (pcVar3 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar3;

  }

  FUN_0029fc60(param_1,auVar6._8_8_,pcVar1);

  _objc_release(pcVar3);

  auVar6 = FUN_002924c0(uVar2,extraout_x1_02,&cf_aiChatGroupNoAt);

  FUN_0029e7a0(param_1,auVar6._8_8_,auVar6._0_8_);

  auVar6 = FUN_002924c0(uVar2,extraout_x1_03,&cf_aiChatQuoteReplyEnabled);

  FUN_002a0ba0(param_1,auVar6._8_8_,auVar6._0_8_);

  auVar6 = FUN_002924c0(uVar2,extraout_x1_04,&cf_aiChatAllFriends);

  FUN_0029ca60(param_1,auVar6._8_8_,auVar6._0_8_);

  auVar6 = FUN_002924c0(uVar2,extraout_x1_05,&cf_aiChatCustomApiEnabled);

  FUN_0029daa0(param_1,auVar6._8_8_,auVar6._0_8_);

  FUN_002a45e0(uVar2,extraout_x1_06,&cf_aiChatCustomApiUrl);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  pcVar3 = auVar6._0_8_;

  pcVar1 = &::cf___;

  if (pcVar3 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar3;

  }

  FUN_0029dac0(param_1,auVar6._8_8_,pcVar1);

  _objc_release(pcVar3);

  uVar4 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  auVar6 = FUN_00296be0(uVar4,extraout_x1_07,2);

  FUN_002a1c40(param_1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar5);

  FUN_002a4dc0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ce00(auVar6._0_8_,auVar6._8_8_,0x12);

  _objc_release(auVar6._0_8_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar6._0_8_,auVar6._8_8_,uVar4);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar4);

  FUN_002a4dc0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029dca0(auVar6._0_8_,auVar6._8_8_,param_1);

  _objc_release(auVar6._0_8_);

  FUN_002a4dc0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029db40(auVar6._0_8_,auVar6._8_8_,param_1);

  _objc_release(auVar6._0_8_);

  FUN_002a6220(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar4,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar4);

  _objc_release(uVar2);

  return;

}




