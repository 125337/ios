// FUN_00136efc @0x136efc


void FUN_00136efc(void)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  cfstringStruct *pcVar5;

  cfstringStruct *pcVar6;

  long lVar7;

  ulong uVar8;

  undefined8 uVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  cfstringStruct *pcVar16;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined *local_148;

  undefined8 local_140;

  code *local_138;

  undefined *puStack_130;

  cfstringStruct *local_128;

  long local_120;

  undefined8 local_118;

  long local_110;

  long local_108;

  undefined *local_100;

  undefined8 local_f8;

  code *local_f0;

  undefined *puStack_e8;

  undefined8 local_e0;

  long local_d8;

  long lStack_d0;

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  cfstringStruct *local_a8;

  cfstringStruct *local_a0;

  cfstringStruct *local_98;

  cfstringStruct *local_90;

  long local_88;

  long local_80;

  

  FUN_00136588();

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar17._0_8_,auVar17._8_8_,&cf_CadisWeatherQHost);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  _objc_release(auVar17._0_8_);

  FUN_00136588();

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar17._0_8_,auVar17._8_8_,&cf_CadisWeatherQKey);

  pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar4 = &cf___;

  if (pcVar5 != (cfstringStruct *)0x0) {

    pcVar4 = pcVar5;

  }

  _objc_retain(pcVar4);

  _objc_release(pcVar5);

  _objc_release(auVar17._0_8_);

  FUN_00136588();

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar17._0_8_,auVar17._8_8_,&cf_CadisWeatherCity);

  pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar5 = &cf___;

  if (pcVar6 != (cfstringStruct *)0x0) {

    pcVar5 = pcVar6;

  }

  _objc_retain(pcVar5);

  _objc_release(pcVar6);

  _objc_release(auVar17._0_8_);

  FUN_00136588();

  auVar17 = _objc_retainAutoreleasedReturnValue();

  lVar7 = FUN_00297480(auVar17._0_8_,auVar17._8_8_,&cf_CadisWeatherLang);

  _objc_release(auVar17._0_8_);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf________ld);

  pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_retain();

  _os_unfair_lock_lock(&DAT_003e8968);

  if ((DAT_003e896c == '\x01') &&

     (uVar8 = FUN_00297820(DAT_003e8858,extraout_x1_00,pcVar6), (uVar8 & 1) != 0)) {

    _os_unfair_lock_unlock(&DAT_003e8968);

    pcVar16 = pcVar6;

  }

  else {

    DAT_003e8970 = DAT_003e8970 + 1;

    DAT_003e896c = '\x01';

    uVar9 = FUN_002937a0(pcVar6);

    uVar11 = DAT_003e8858;

    DAT_003e8858 = uVar9;

    _objc_release(uVar11);

    lVar3 = DAT_003e8970;

    _os_unfair_lock_unlock(&DAT_003e8968);

    _objc_release(pcVar6);

    lVar10 = FUN_00297fa0(pcVar1);

    if ((lVar10 == 0) || (lVar10 = FUN_00297fa0(pcVar4), lVar10 == 0)) {

      FUN_001562dc(lVar3);

      goto LAB_001373d8;

    }

    pcVar16 = &cf_en;

    if (lVar7 != 1) {

      pcVar16 = &cf_zh;

    }

    _objc_retain(pcVar16);

    puVar2 = PTR___NSConcreteStackBlock_003886f0;

    local_c8 = PTR___NSConcreteStackBlock_003886f0;

    local_c0 = 0xc2000000;

    local_b8 = FUN_0015660c;

    puStack_b0 = &DAT_0038d448;

    local_88 = lVar3;

    _objc_retain(pcVar1);

    local_a8 = pcVar1;

    _objc_retain(pcVar16);

    local_a0 = pcVar16;

    _objc_retain(pcVar4);

    local_98 = pcVar4;

    _objc_retain(pcVar5);

    local_90 = pcVar5;

    local_80 = lVar7;

    uVar11 = _objc_retainBlock(&local_c8);

    local_100 = puVar2;

    local_f8 = 0xc2000000;

    local_f0 = FUN_00157354;

    puStack_e8 = &DAT_0038d4a8;

    local_d8 = lVar3;

    lStack_d0 = lVar7;

    _objc_retain();

    local_e0 = uVar11;

    lVar10 = _objc_retainBlock(&local_100);

    lVar12 = FUN_00297fa0(pcVar5);

    if (lVar12 == 0) {

      (**(code **)(lVar10 + 0x10))(lVar10);

    }

    else {

      FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4420(pcVar5,auVar17._8_8_,auVar17._0_8_);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar17._0_8_);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,

                   &cf_https______geo_v2_city_lookup_location____lang____number_1);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      FUN_00290c20(&_OBJC_CLASS___NSURL,auVar17._8_8_,auVar17._0_8_);

      auVar18 = _objc_retainAutoreleasedReturnValue();

      lVar12 = auVar18._0_8_;

      if (lVar12 == 0) {

        (**(code **)(lVar10 + 0x10))(lVar10);

      }

      else {

        FUN_0029b740(0x4020000000000000,&_OBJC_CLASS___NSMutableURLRequest,auVar18._8_8_,lVar12,1);

        auVar18 = _objc_retainAutoreleasedReturnValue();

        uVar13 = auVar18._0_8_;

        FUN_002a2480(uVar13,auVar18._8_8_,pcVar4,&cf_X_QW_Api_Key);

        FUN_002a2ec0(&_OBJC_CLASS___NSURLSession);

        uVar14 = _objc_retainAutoreleasedReturnValue();

        local_148 = PTR___NSConcreteStackBlock_003886f0;

        local_140 = 0xc2000000;

        local_138 = FUN_0015789c;

        puStack_130 = &DAT_0038d4d8;

        local_110 = lVar3;

        _objc_retain(lVar10);

        local_120 = lVar10;

        local_108 = lVar7;

        _objc_retain(pcVar5);

        local_128 = pcVar5;

        _objc_retain(uVar11);

        local_118 = uVar11;

        FUN_00293f60(uVar14,extraout_x1_02,uVar13,&local_148);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b980();

        _objc_release(uVar15);

        _objc_release(uVar14);

        _objc_release(local_118);

        _objc_release(local_128);

        _objc_release(local_120);

        _objc_release(uVar13);

      }

      _objc_release(lVar12);

      _objc_release(auVar17._0_8_);

      _objc_release(uVar9);

    }

    _objc_release(lVar10);

    _objc_release(local_e0);

    _objc_release(uVar11);

    _objc_release(local_90);

    _objc_release(local_98);

    _objc_release(local_a0);

    _objc_release(local_a8);

  }

  _objc_release(pcVar16);

LAB_001373d8:

  _objc_release(pcVar6);

  _objc_release(pcVar5);

  _objc_release(pcVar4);

  _objc_release(pcVar1);

  return;

}




