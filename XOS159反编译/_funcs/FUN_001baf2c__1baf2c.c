// FUN_001baf2c @0x1baf2c


void FUN_001baf2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  int iVar1;

  long lVar2;

  cfstringStruct *pcVar3;

  undefined8 uVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  cfstringStruct *local_78;

  undefined8 local_70;

  undefined1 local_68;

  undefined1 local_67;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  lVar2 = FUN_002a4280(param_3);

  if (param_4 != 0) {

    _NSLog(&cf__);

    FUN_00298400(param_4);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar8._0_8_;

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar8._8_8_,&cf_Q___);

    pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    local_67 = 0;

    goto LAB_001bb22c;

  }

  auVar8 = FUN_00297fa0(param_2);

  if (auVar8._0_8_ == 0) {

    uVar7 = 0;

  }

  else {

    FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar8._8_8_,param_2,0,0);

    uVar7 = _objc_retainAutoreleasedReturnValue();

  }

  if (lVar2 == 200) {

    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

    auVar8 = _objc_opt_isKindOfClass(uVar7,uVar4);

    if ((auVar8._0_8_ & 1) == 0) goto LAB_001bb164;

    FUN_00299540(uVar7,auVar8._8_8_,&cf_success);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_002924e0();

    _objc_release(uVar4);

    if (iVar1 == 0) goto LAB_001bb164;

    FUN_00299540(uVar7,extraout_x1,&cf_message);

    pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar3 = &cf__vbR;

    if (pcVar5 != (cfstringStruct *)0x0) {

      pcVar3 = pcVar5;

    }

    _objc_retain(pcVar3);

    _objc_release(pcVar5);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002940e0(&_OBJC_CLASS___NSDate);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a51c0();

    FUN_0029de20(uVar4,extraout_x1_00,&cf_xzy_wxid_register_last_ts);

    _objc_release(uVar6);

    FUN_002a0060(uVar4,extraout_x1_01,*(undefined8 *)(param_1 + 0x20),

                 &cf_xzy_wxid_register_last_wxid);

    FUN_00299540(uVar7,extraout_x1_02,&cf_is_new);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _NSLog(&cf__);

    _objc_release(uVar6);

    local_67 = 1;

  }

  else {

LAB_001bb164:

    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

    auVar8 = _objc_opt_isKindOfClass(uVar7,uVar4);

    uVar4 = auVar8._8_8_;

    if ((auVar8._0_8_ & 1) == 0) {

LAB_001bb1cc:

      FUN_002a4680(&_OBJC_CLASS___NSString,uVar4,&cf_HTTP_ld);

      pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_00299540(uVar7,uVar4,&cf_message);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      uVar4 = extraout_x1_03;

      if (lVar2 == 0) goto LAB_001bb1cc;

      FUN_00299540(uVar7,extraout_x1_03,&cf_message);

      pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    auVar8 = _objc_alloc(&_OBJC_CLASS___NSString);

    uVar4 = FUN_00296a60(auVar8._0_8_,auVar8._8_8_,param_2,4);

    _NSLog(&cf__);

    local_67 = 0;

  }

  _objc_release(uVar4);

LAB_001bb22c:

  _objc_release(uVar7);

  local_98 = PTR___NSConcreteStackBlock_003886f0;

  local_90 = 0xc2000000;

  local_88 = FUN_001bb370;

  puStack_80 = &DAT_0038e6a0;

  local_68 = *(undefined1 *)(param_1 + 0x30);

  uVar7 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(uVar7);

  local_78 = pcVar3;

  local_70 = uVar7;

  _objc_retain(pcVar3);

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_98);

  _objc_release(local_78);

  _objc_release(local_70);

  _objc_release(pcVar3);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




