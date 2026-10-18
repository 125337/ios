// FUN_001ba408 @0x1ba408


void FUN_001ba408(int param_1,long param_2)



{

  int iVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  void *pvVar9;

  size_t keyLength;

  void *data;

  size_t dataLength;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  long lVar15;

  long lVar16;

  double dVar17;

  double dVar18;

  undefined1 auVar19 [16];

  undefined8 local_f0;

  undefined *local_e8;

  undefined8 local_e0;

  code *local_d8;

  undefined *puStack_d0;

  long local_c8;

  long local_c0;

  undefined1 local_b8;

  cfstringStruct *local_b0;

  cfstringStruct *pcStack_a8;

  cfstringStruct *local_a0;

  long local_98;

  undefined8 local_90;

  undefined8 uStack_88;

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  FUN_001bac18();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    _NSLog(&cf__);

    if (param_2 != 0) {

      (**(code **)(param_2 + 0x10))(param_2,0,0,&cf__gS0R);

    }

    goto LAB_001ba9ec;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar19._0_8_;

  dVar17 = (double)FUN_00294840(uVar4,auVar19._8_8_,&cf_xzy_wxid_register_last_ts);

  FUN_002a45e0(uVar4,extraout_x1,&cf_xzy_wxid_register_last_wxid);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002940e0(&_OBJC_CLASS___NSDate);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  dVar18 = (double)FUN_002a51c0();

  _objc_release(uVar6);

  if (lVar5 == 0) {

LAB_001ba57c:

    _objc_retain(lVar3);

    _objc_retain(param_2);

    FUN_002940e0(&_OBJC_CLASS___NSDate);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    dVar17 = (double)FUN_002a51c0();

    _objc_release(uVar6);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_02,&cf_____lld);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    FUN_00293fa0(&cf_xos_wxid_register_2026,extraout_x1_03,4);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    uVar11 = auVar19._0_8_;

    FUN_00293fa0(uVar7,auVar19._8_8_,4);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease(uVar11);

    pvVar9 = (void *)FUN_00292680();

    keyLength = FUN_00297fa0(uVar11);

    _objc_retainAutorelease(uVar8);

    data = (void *)FUN_00292680();

    dataLength = FUN_00297fa0(uVar8);

    _CCHmac(2,pvVar9,keyLength,data,dataLength,&local_e8);

    FUN_002a4640(&_OBJC_CLASS___NSMutableString);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar19._8_8_;

    uVar10 = auVar19._0_8_;

    lVar16 = 0;

    do {

      FUN_002919a0(uVar10,uVar6,&cf__02x);

      lVar16 = lVar16 + 1;

      uVar6 = extraout_x1_04;

    } while (lVar16 != 0x20);

    _objc_release(uVar8);

    _objc_release(uVar11);

    _objc_release(uVar7);

    local_b0 = &cf_wxid;

    pcStack_a8 = &cf_ts;

    local_98 = lVar3;

    FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_05,(long)dVar17);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    local_a0 = &cf_sign;

    local_90 = auVar19._0_8_;

    uStack_88 = uVar10;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar19._8_8_,&local_98,&local_b0,3);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar19._0_8_);

    local_f0 = 0;

    FUN_00294080(&_OBJC_CLASS___NSJSONSerialization,extraout_x1_06,uVar11,0,&local_f0);

    lVar16 = _objc_retainAutoreleasedReturnValue();

    uVar6 = local_f0;

    _objc_retain(local_f0);

    if (lVar16 == 0) {

      _NSLog(&cf__);

      if (param_2 != 0) {

        (**(code **)(param_2 + 0x10))(param_2,0,0,&cf__RS1Y_);

      }

    }

    else {

      pvVar9 = _malloc(0x27);

      lVar15 = 0;

      do {

        *(byte *)((long)pvVar9 + lVar15) = (&DAT_0030e934)[lVar15] ^ 0xf6;

        lVar15 = lVar15 + 1;

      } while (lVar15 != 0x26);

      *(undefined1 *)((long)pvVar9 + 0x26) = 0;

      FUN_002a46c0(&_OBJC_CLASS___NSString);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      _free(pvVar9);

      FUN_00290c20(&_OBJC_CLASS___NSURL,extraout_x1_07,uVar8);

      auVar19 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b720(&_OBJC_CLASS___NSMutableURLRequest,auVar19._8_8_,auVar19._0_8_);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar19._0_8_);

      _objc_release(uVar8);

      FUN_0029e7e0(uVar12,extraout_x1_08,&cf_POST);

      FUN_002a2480(uVar12,extraout_x1_09,&cf_application_json,&cf_Content_Type);

      FUN_0029e7c0(uVar12,extraout_x1_10,lVar16);

      FUN_002a1ea0(0x402e000000000000,uVar12);

      FUN_00294dc0(&_OBJC_CLASS___NSURLSessionConfiguration);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1ec0(0x402e000000000000);

      FUN_002a1ee0(0x4034000000000000,uVar8);

      FUN_0029c6a0(&_OBJC_CLASS___NSURLSession,extraout_x1_11,uVar8);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      local_e8 = PTR___NSConcreteStackBlock_003886f0;

      local_e0 = 0xc2000000;

      local_d8 = FUN_001baf2c;

      puStack_d0 = &DAT_0038a8c0;

      _objc_retain(lVar3);

      local_b8 = (undefined1)param_1;

      local_c8 = lVar3;

      _objc_retain(param_2);

      local_c0 = param_2;

      FUN_00293f60(uVar13,extraout_x1_12,uVar12,&local_e8);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b980();

      _objc_release(uVar14);

      _objc_release(local_c0);

      _objc_release(local_c8);

      _objc_release(uVar13);

      _objc_release(uVar8);

      _objc_release(uVar12);

    }

    _objc_release(lVar16);

    _objc_release(uVar6);

    _objc_release(uVar11);

    _objc_release(uVar10);

    _objc_release(uVar7);

    _objc_release(param_2);

    _objc_release(lVar3);

  }

  else {

    iVar2 = FUN_00297820(lVar5,extraout_x1_00,lVar3);

    iVar1 = 0;

    if (0.0 < dVar17) {

      iVar1 = iVar2;

    }

    if ((iVar1 != 1) || (3600.0 <= dVar18 - dVar17)) goto LAB_001ba57c;

    if (param_1 == 0) {

      _NSLog(&cf__);

      if (param_2 != 0) {

        (**(code **)(param_2 + 0x10))(param_2,0,1,0);

      }

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf_yN_k_vN);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _NSLog(&cf__);

      if (param_2 != 0) {

        (**(code **)(param_2 + 0x10))(param_2,0,1,uVar6);

      }

      _objc_release(uVar6);

    }

  }

  _objc_release(lVar5);

  _objc_release(uVar4);

LAB_001ba9ec:

  _objc_release(lVar3);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




