// XOS 1.5.9 message-merge targeted extraction: config layer (207 functions)

// ==== FUN_00004000 @0x4000 ====  [src: FUN_.c]


void FUN_00004000(undefined8 param_1)



{

  long lVar1;

  int iVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar6 [16];

  

  _objc_retain();

  _objc_retain(param_1);

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

  if ((((((uVar4 & 1) == 0) || (auVar6 = FUN_00297fa0(param_1), auVar6._0_8_ == 0)) ||

       (auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_xzySettingsRevision), (auVar6._0_8_ & 1) != 0

       )) || ((auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_CadisXZYSettingsRevision),

              (auVar6._0_8_ & 1) != 0 ||

              (auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_CadisWeatherCache),

              (auVar6._0_8_ & 1) != 0)))) ||

     ((auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_CadisWeatherError), (auVar6._0_8_ & 1) != 0 ||

      ((auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_xzy_wxid_register_last_ts),

       (auVar6._0_8_ & 1) != 0 ||

       (uVar4 = FUN_00297820(param_1,auVar6._8_8_,&cf_xzy_wxid_register_last_wxid), (uVar4 & 1) != 0

       )))))) {

    _objc_release(param_1);

  }

  else {

    iVar2 = FUN_00085164(param_1);

    if (iVar2 == 0) {

      uVar4 = FUN_00295f60(param_1,extraout_x1,&cf_Cadis);

      _objc_release(param_1);

      uVar3 = extraout_x1_01;

      if ((uVar4 & 1) == 0) goto LAB_000040c8;

    }

    else {

      _objc_release(param_1);

      uVar3 = extraout_x1_00;

    }

    uVar4 = FUN_00295f60(param_1,uVar3,&cf_xzy_wxid_register_);

    if ((uVar4 & 1) == 0) {

      FUN_000041f0();

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_sync_enter();

      if (DAT_003e7470 == 0) {

        FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        lVar1 = DAT_003e7470;

        DAT_003e7470 = lVar5;

        _objc_release(lVar1);

      }

      lVar1 = DAT_003e7470;

      auVar6 = FUN_002937a0(param_1);

      FUN_00291240(lVar1,auVar6._8_8_,auVar6._0_8_);

      _objc_release(auVar6._0_8_);

      _objc_sync_exit(uVar3);

      _objc_release(uVar3);

      FUN_00004234();

    }

  }

LAB_000040c8:

  _objc_release(param_1);

  return;

}






// ==== FUN_000041f0 @0x41f0 ====  [src: FUN_.c]


void FUN_000041f0(void)



{

  undefined8 uVar1;

  

  if (DAT_003e7698 != -1) {

    FUN_0028edac();

  }

  uVar1 = DAT_003e7690;

  _objc_retain(DAT_003e7690);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}






// ==== FUN_00004234 @0x4234 ====  [src: FUN_.c]


void FUN_00004234(void)



{

  undefined8 uVar1;

  long lVar2;

  

  FUN_000041f0();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_sync_enter();

  if (((DAT_003e76a0 == 0) && ((DAT_003e76a8 & 1) == 0)) &&

     (lVar2 = FUN_00293860(DAT_003e7470), lVar2 != 0)) {

    DAT_003e76a8 = 1;

    _objc_sync_exit(uVar1);

    _objc_release(uVar1);

    _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038a500);

    return;

  }

  _objc_sync_exit(uVar1);

  _objc_release(uVar1);

  return;

}






// ==== FUN_00004788 @0x4788 ====  [src: FUN_.c]


undefined8 FUN_00004788(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar3 = 0;

  }

  else {

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar1 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar1);

    auVar4 = _objc_opt_isKindOfClass(param_1,lVar1);

    if ((auVar4._0_8_ & 1) != 0) {

      FUN_002a6080(param_1,auVar4._8_8_,&cf_parentModel);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      if (lVar1 != 0) {

        _objc_retain(lVar1);

        _objc_release(param_1);

        param_1 = lVar1;

      }

      _objc_release(lVar1);

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc8);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002924e0();

    _objc_release(uVar2);

    _objc_release(param_1);

  }

  return uVar3;

}






// ==== FUN_000048dc @0x48dc ====  [src: FUN_.c]


ulong FUN_000048dc(long param_1)



{

  uint uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  byte local_31;

  

  _objc_retain();

  if (param_1 == 0) {

    uVar4 = 0;

  }

  else {

    FUN_000049c8(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(param_1);

    _objc_getAssociatedObject(uVar2,PTR_LOOP_003e5cd0);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) {

      local_31 = 0;

      uVar1 = FUN_00004aa4(uVar2,&local_31,0);

      uVar4 = (ulong)(uVar1 & local_31);

    }

    else {

      uVar4 = FUN_002924e0(lVar3);

    }

    _objc_release(lVar3);

    _objc_release(uVar2);

  }

  return uVar4;

}






// ==== FUN_000049c8 @0x49c8 ====  [src: FUN_.c]


void FUN_000049c8(long param_1)



{

  long lVar1;

  undefined1 auVar2 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    lVar1 = 0;

  }

  else {

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar1 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar1);

    auVar2 = _objc_opt_isKindOfClass(param_1,lVar1);

    if ((auVar2._0_8_ & 1) != 0) {

      FUN_002a6080(param_1,auVar2._8_8_,&cf_parentModel);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      if (lVar1 != 0) goto LAB_00004a58;

    }

    _objc_retain(param_1);

    lVar1 = param_1;

  }

LAB_00004a58:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar1);

  return;

}






// ==== FUN_00004aa4 @0x4aa4 ====  [src: FUN_.c]


bool FUN_00004aa4(undefined8 param_1,byte *param_2,byte *param_3)



{

  undefined *puVar1;

  bool bVar2;

  byte bVar3;

  byte bVar4;

  int iVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  ulong uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long *plVar12;

  long *plVar13;

  long lVar14;

  undefined1 auVar15 [16];

  long local_70;

  long local_68;

  

  _objc_retain();

  FUN_000049c8(param_1);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  if (lVar6 == 0) {

    bVar2 = false;

    goto LAB_00004d1c;

  }

  _objc_retain(lVar6);

  FUN_000049c8(lVar6);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_000856e8();

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00298680();

  lVar9 = _objc_retainAutoreleasedReturnValue();

  local_68 = lVar9;

  FUN_002985c0(uVar8);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  lVar10 = auVar15._0_8_;

  local_70 = lVar10;

  auVar15 = FUN_00295fa0(lVar9,auVar15._8_8_,&cf__chatroom);

  lVar14 = lVar9;

  if (((auVar15._0_8_ & 1) == 0) &&

     (uVar11 = FUN_00295fa0(lVar10,auVar15._8_8_,&cf__chatroom), lVar14 = lVar10, (uVar11 & 1) == 0)

     ) {

    uVar11 = _objc_opt_respondsToSelector(uVar7,"isSender");

    if ((uVar11 & 1) == 0) {

      uVar11 = _objc_opt_respondsToSelector(lVar6,"isSender");

      if ((uVar11 & 1) != 0) {

        iVar5 = FUN_00297a80(lVar6);

        goto LAB_00004bb8;

      }

LAB_00004be8:

      plVar12 = &local_70;

      plVar13 = &local_68;

    }

    else {

      iVar5 = FUN_00297a80(uVar7);

LAB_00004bb8:

      if (iVar5 == 0) goto LAB_00004be8;

      plVar12 = &local_68;

      plVar13 = &local_70;

      lVar14 = lVar9;

    }

    if (lVar14 != 0) {

      plVar13 = plVar12;

    }

    lVar14 = *plVar13;

  }

  _objc_retain(lVar14);

  _objc_release(lVar10);

  _objc_release(lVar9);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(lVar6);

  lVar9 = FUN_00297fa0(lVar14);

  bVar2 = lVar9 != 0;

  if (lVar9 != 0) {

    FUN_000828e0();

    bVar3 = FUN_000bcd6c(lVar14);

    bVar3 = bVar3 | DAT_003e7bc0;

    if ((bVar3 & 1) == 0) {

      bVar4 = FUN_000bce54(lVar14);

      bVar4 = bVar4 | DAT_003e7bc1;

      uVar7 = extraout_x1_00;

    }

    else {

      bVar4 = 0;

      uVar7 = extraout_x1;

    }

    puVar1 = PTR_LOOP_003e5cd0;

    bVar3 = bVar3 & 1;

    FUN_00299380(&_OBJC_CLASS___NSNumber,uVar7,bVar3);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(lVar6,puVar1,uVar7,1);

    _objc_release(uVar7);

    puVar1 = PTR_LOOP_003e5cd8;

    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_01,bVar4 & 1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(lVar6,puVar1,uVar7,1);

    _objc_release(uVar7);

    if (param_2 != (byte *)0x0) {

      *param_2 = bVar3;

    }

    if (param_3 != (byte *)0x0) {

      *param_3 = bVar4 & 1;

    }

  }

  _objc_release(lVar14);

LAB_00004d1c:

  _objc_release(lVar6);

  _objc_release(param_1);

  return bVar2;

}






// ==== FUN_00004f4c @0x4f4c ====  [src: FUN_.c]


ulong FUN_00004f4c(long param_1)



{

  uint uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  byte local_31;

  

  _objc_retain();

  if (param_1 == 0) {

    uVar4 = 0;

  }

  else {

    FUN_000049c8(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(param_1);

    _objc_getAssociatedObject(uVar2,PTR_LOOP_003e5cd8);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) {

      local_31 = 0;

      uVar1 = FUN_00004aa4(uVar2,0,&local_31);

      uVar4 = (ulong)(uVar1 & local_31);

    }

    else {

      uVar4 = FUN_002924e0(lVar3);

    }

    _objc_release(lVar3);

    _objc_release(uVar2);

  }

  return uVar4;

}






// ==== FUN_00005038 @0x5038 ====  [src: FUN_.c]


undefined8 FUN_00005038(void)



{

  undefined8 uVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar4._0_8_;

  auVar4 = FUN_002924c0(uVar1,auVar4._8_8_,&cf_mesMsgMergeAvatarAboveBubble);

  if (((auVar4._0_8_ & 1) == 0) &&

     (uVar2 = FUN_002924c0(uVar1,auVar4._8_8_,&cf_mesMsgMergeAvatarAboveAnyChat), (uVar2 & 1) == 0))

  {

    uVar3 = FUN_000050c0(uVar1);

  }

  else {

    uVar3 = 1;

  }

  _objc_release(uVar1);

  return uVar3;

}






// ==== FUN_000050c0 @0x50c0 ====  [src: FUN_.c]


bool FUN_000050c0(undefined8 param_1)



{

  bool bVar1;

  double dVar2;

  

  _objc_retain();

  dVar2 = (double)FUN_0001cc90(param_1,&cf_mesMsgMergeMessageOffsetOther);

  if (ABS(dVar2 + -46.0) <= 0.001) {

    dVar2 = (double)FUN_0001cc90(param_1,&cf_mesMsgMergeMessageOffsetSelf);

    bVar1 = 0.001 < ABS(dVar2 + -46.0);

  }

  else {

    bVar1 = true;

  }

  _objc_release(param_1);

  return bVar1;

}






// ==== FUN_00005168 @0x5168 ====  [src: FUN_.c]


undefined8 FUN_00005168(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar3 = 0;

  }

  else {

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar1 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar1);

    auVar4 = _objc_opt_isKindOfClass(param_1,lVar1);

    if ((auVar4._0_8_ & 1) != 0) {

      FUN_002a6080(param_1,auVar4._8_8_,&cf_parentModel);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      if (lVar1 != 0) {

        _objc_retain(lVar1);

        _objc_release(param_1);

        param_1 = lVar1;

      }

      _objc_release(lVar1);

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e5ce0);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002924e0();

    _objc_release(uVar2);

    _objc_release(param_1);

  }

  return uVar3;

}






// ==== FUN_00007f64 @0x7f64 ====  [src: FUN_.c]


void FUN_00007f64(long param_1,undefined8 param_2)



{

  FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00007f9c();

  FUN_0029b140(*(undefined8 *)(param_1 + 0x30));

  return;

}






// ==== FUN_00007f9c @0x7f9c ====  [src: FUN_.c]


void FUN_00007f9c(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  

  uVar1 = DAT_003e7568;

  DAT_003e7568 = 0;

  _objc_release(uVar1);

  uVar1 = DAT_003e7570;

  DAT_003e7750 = 0;

  DAT_003e7570 = 0;

  _objc_release(uVar1);

  uVar1 = DAT_003e7578;

  DAT_003e7751 = 0;

  DAT_003e7578 = 0;

  _objc_release(uVar1);

  DAT_003e7752 = 0;

  FUN_000904f4();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_002937a0();

  uVar1 = DAT_003e7550;

  DAT_003e7550 = uVar3;

  _objc_release(uVar1);

  _objc_release(uVar2);

  DAT_003e7753 = FUN_001331c4();

  uVar1 = DAT_003e75a8;

  DAT_003e75a8 = 0;

  _objc_release(uVar1);

  DAT_003e7754 = 0;

  FUN_0029b240(DAT_003e7580);

  FUN_0029b240(DAT_003e7558);

  FUN_0029b240(DAT_003e7560);

  return;

}






// ==== FUN_000080e4 @0x80e4 ====  [src: FUN_.c]


void FUN_000080e4(long param_1,undefined8 param_2)



{

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),

               *(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00007f9c();

  FUN_0029b140(*(undefined8 *)(param_1 + 0x38));

  return;

}






// ==== FUN_0000818c @0x818c ====  [src: FUN_.c]


void FUN_0000818c(long param_1,undefined8 param_2)



{

  FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00007f9c();

  FUN_0029b140(*(undefined8 *)(param_1 + 0x30));

  return;

}






// ==== FUN_000081c4 @0x81c4 ====  [src: FUN_.c]


void FUN_000081c4(long param_1,undefined8 param_2)



{

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),

               *(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00007f9c();

  FUN_0029b140(*(undefined8 *)(param_1 + 0x38));

  return;

}






// ==== FUN_00008ed0 @0x8ed0 ====  [src: FUN_.c]


void FUN_00008ed0(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00007f9c();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}






// ==== FUN_00008f34 @0x8f34 ====  [src: FUN_.c]


void FUN_00008f34(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),

               *(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00007f9c();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x38));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}






// ==== FUN_00008f98 @0x8f98 ====  [src: FUN_.c]


void FUN_00008f98(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00007f9c();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}






// ==== FUN_00008ffc @0x8ffc ====  [src: FUN_.c]


void FUN_00008ffc(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),

               *(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00007f9c();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x38));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}






// ==== FUN_0000b684 @0xb684 ====  [src: FUN_.c]


void FUN_0000b684(void)



{

  undefined *puVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined *local_168;

  undefined8 local_160;

  code *local_158;

  undefined *puStack_150;

  long local_148;

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_f8 [128];

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  lVar2 = _NSClassFromString(&cf_MMUILongPressImageView);

  if (lVar2 != 0) {

    FUN_002a2e60(&_OBJC_CLASS___UIApplication);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6560();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar3);

    uStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    uStack_110 = 0;

    lStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    local_130 = (long *)0x0;

    _objc_retain(uVar4);

    lVar5 = FUN_00293880(uVar4,extraout_x1,&local_140,auStack_f8,0x10);

    puVar1 = PTR___NSConcreteStackBlock_003886f0;

    if (lVar5 != 0) {

      lVar6 = *local_130;

      do {

        lVar7 = 0;

        do {

          if (*local_130 != lVar6) {

            _objc_enumerationMutation(uVar4);

          }

          FUN_002a4840(*(undefined8 *)(lStack_138 + lVar7 * 8));

          auVar8 = _objc_retainAutoreleasedReturnValue();

          local_168 = puVar1;

          local_160 = 0xc0000000;

          local_158 = FUN_00090690;

          puStack_150 = &DAT_0038a9b0;

          local_148 = lVar2;

          FUN_00294d80(auVar8._0_8_,auVar8._8_8_,&local_168);

          _objc_release(auVar8._0_8_);

          lVar7 = lVar7 + 1;

        } while (lVar5 != lVar7);

        lVar5 = FUN_00293880(uVar4,extraout_x1_00,&local_140,auStack_f8,0x10);

      } while (lVar5 != 0);

    }

    _objc_release(uVar4);

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a120(auVar8._0_8_,auVar8._8_8_,&cf_CoverRemoveAllCovers,0);

    _objc_release(auVar8._0_8_);

    _objc_release(uVar4);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_0000e7bc @0xe7bc ====  [src: FUN_.c]


void FUN_0000e7bc(long param_1)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  

  FUN_002954a0(&objc::class_t::_0x2f19de29);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_ck_WsQlr_,&cf_zPck_WhKmsQlr__,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),auVar2._8_8_,uVar1,1,0);

  FUN_00292c80(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,0,10,uVar1,

               *(undefined8 *)(param_1 + 0x28));

  _objc_release(uVar1);

  return;

}






// ==== FUN_0000e850 @0xe850 ====  [src: FUN_.c]


void FUN_0000e850(void)



{

  undefined1 auVar1 [16];

  

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a120(auVar1._0_8_,auVar1._8_8_,&cf_XZYCoverParallaxLightingSettingsDidChangeNotification,0

              );

  _objc_release(auVar1._0_8_);

  return;

}






// ==== FUN_0000f3e0 @0xf3e0 ====  [src: FUN_.c]


void FUN_0000f3e0(long param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  

  _objc_retain(param_2);

  FUN_002a1d60(param_2,extraout_x1,*(undefined8 *)(param_1 + 0x20));

  FUN_002a06e0(param_2,extraout_x1_00,&cf_Yuzzb_Y);

  FUN_0029d460(param_2,extraout_x1_01,1);

  _objc_release(param_2);

  return;

}






// ==== FUN_0000f448 @0xf448 ====  [src: FUN_.c]


void FUN_0000f448(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  long lVar4;

  dispatch_time_t dVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar6 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  FUN_002a5020(uVar2);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a64e0(&_OBJC_CLASS___NSCharacterSet);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(uVar1,auVar6._8_8_,auVar6._0_8_);

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(uVar1);

  if ((pcVar3 == (cfstringStruct *)0x0) ||

     (auVar6 = FUN_00297fa0(pcVar3), uVar1 = auVar6._8_8_, auVar6._0_8_ == 0)) {

    _objc_release(pcVar3);

    pcVar3 = &cf_XOS;

    uVar1 = extraout_x1;

  }

  FUN_002a0060(*(undefined8 *)(param_1 + 0x28),uVar1,pcVar3,&cf_xzy_plugin_jump_keyword);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_00296020(*(undefined8 *)(param_1 + 0x30));

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar6._0_8_,auVar6._8_8_,0x3e9);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  uVar1 = extraout_x1_00;

  if (lVar4 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UILabel);

    auVar6 = _objc_opt_isKindOfClass(lVar4,uVar1);

    uVar1 = auVar6._8_8_;

    if ((auVar6._0_8_ & 1) != 0) {

      FUN_002a1d60(lVar4,uVar1,pcVar3);

      uVar1 = extraout_x1_01;

    }

  }

  FUN_002a4680(&_OBJC_CLASS___NSString,uVar1,&cf__wclsQ__n__N_);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar6._8_8_,0,auVar6._0_8_,1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x30),extraout_x1_02,uVar1,1,0);

  dVar5 = _dispatch_time(0,1500000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0000f710;

  puStack_50 = &DAT_00388e60;

  local_48 = uVar1;

  _objc_retain(uVar1);

  _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(local_48);

  _objc_release(uVar1);

  _objc_release(lVar4);

  _objc_release(pcVar3);

  _objc_release(uVar2);

  return;

}






// ==== FUN_0000f710 @0xf710 ====  [src: FUN_.c]


void FUN_0000f710(long param_1,undefined8 param_2)



{

  FUN_00294700(*(undefined8 *)(param_1 + 0x20),param_2,1,0);

  return;

}






// ==== FUN_0001caf4 @0x1caf4 ====  [src: FUN_.c]


void FUN_0001caf4(long param_1)



{

  uint uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  uint uVar5;

  uint uVar6;

  double dVar7;

  undefined1 auVar8 [16];

  uint local_34;

  

  _objc_retain();

  if ((param_1 == 0) || (auVar8 = FUN_00297fa0(param_1), auVar8._0_8_ == 0)) {

    uVar4 = 0;

  }

  else {

    FUN_002a4560(param_1,auVar8._8_8_,&cf__,&cf___);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    auVar8 = FUN_00297fa0();

    uVar4 = auVar8._8_8_;

    if ((auVar8._0_8_ == 6) ||

       (auVar8 = FUN_00297fa0(uVar2), uVar4 = auVar8._8_8_, auVar8._0_8_ == 8)) {

      local_34 = 0;

      FUN_0029be20(&_OBJC_CLASS___NSScanner,uVar4,uVar2);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029bde0(auVar8._0_8_,auVar8._8_8_,&local_34);

      _objc_release(auVar8._0_8_);

      lVar3 = FUN_00297fa0(uVar2);

      uVar6 = local_34 >> 8;

      if (lVar3 == 8) {

        uVar1 = local_34 >> 0x18;

        dVar7 = (double)(local_34 & 0xff) / 255.0;

        uVar5 = uVar6;

        uVar6 = local_34 >> 0x10;

      }

      else {

        uVar1 = local_34 >> 0x10 & 0xff;

        dVar7 = 1.0;

        uVar5 = local_34;

      }

      FUN_00293040((double)uVar1 / 255.0,(double)(uVar6 & 0xff) / 255.0,

                   (double)(uVar5 & 0xff) / 255.0,dVar7,&_OBJC_CLASS___UIColor);

      uVar4 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      uVar4 = 0;

    }

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}






// ==== FUN_0001cc90 @0x1cc90 ====  [src: FUN_.c]


undefined1  [16] FUN_0001cc90(undefined8 param_1,undefined8 param_2)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar3;

  float fVar4;

  double dVar5;

  double dVar6;

  undefined1 auVar7 [16];

  double dVar8;

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_00299520(param_1,extraout_x1,param_2);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 == 0) {

    FUN_00299520(param_1,extraout_x1_00,&cf_mesMsgMergeAvatarOffset);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    FUN_00299520(param_1,extraout_x1_01,&cf_mesMsgMergeWholeOffset);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar1 == 0 && lVar2 == 0) {

      dVar6 = 46.0;

    }

    else {

      if (lVar1 == 0) {

        dVar5 = 46.0;

        uVar3 = extraout_x1_02;

      }

      else {

        fVar4 = (float)FUN_00295460(param_1,extraout_x1_02,&cf_mesMsgMergeAvatarOffset);

        dVar5 = (double)fVar4;

        uVar3 = extraout_x1_03;

      }

      if (ABS(dVar5) <= 0.001) {

        dVar5 = 46.0;

      }

      if (lVar2 == 0) {

        dVar6 = 0.0;

      }

      else {

        fVar4 = (float)FUN_00295460(param_1,uVar3,&cf_mesMsgMergeWholeOffset);

        dVar6 = (double)fVar4;

      }

      dVar5 = dVar5 + dVar6;

      dVar8 = 60.0;

      if (dVar5 <= 60.0) {

        dVar8 = dVar5;

      }

      dVar6 = -60.0;

      if (-60.0 <= dVar5) {

        dVar6 = dVar8;

      }

    }

  }

  else {

    fVar4 = (float)FUN_00295460(param_1,extraout_x1_00,param_2);

    dVar5 = 60.0;

    if ((double)fVar4 <= 60.0) {

      dVar5 = (double)fVar4;

    }

    dVar6 = -60.0;

    if (-60.0 <= fVar4) {

      dVar6 = dVar5;

    }

  }

  uVar3 = 0;

  _objc_release(param_2);

  _objc_release(param_1);

  auVar7._8_8_ = uVar3;

  auVar7._0_8_ = dVar6;

  return auVar7;

}






// ==== FUN_0001ce48 @0x1ce48 ====  [src: FUN_.c]


undefined8 FUN_0001ce48(undefined8 param_1,ulong param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  cfstringStruct *pcVar3;

  

  _objc_retain();

  if (param_2 < 4) {

    pcVar3 = (cfstringStruct *)

             (&PTR_cf_mesMsgMergeWrapReferDividerStyleOtherLight_0038b8b0)[param_2];

  }

  else {

    pcVar3 = &cf_mesMsgMergeWrapReferDividerStyleSelfLight;

  }

  FUN_00299520(param_1,extraout_x1,pcVar3);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar2 = extraout_x1_00;

  if (lVar1 == 0) {

    FUN_00299520(param_1,extraout_x1_00,&cf_mesMsgMergeWrapReferDividerStyle);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar2 = 0;

    if (lVar1 == 0) goto LAB_0001cee0;

    pcVar3 = &cf_mesMsgMergeWrapReferDividerStyle;

    uVar2 = extraout_x1_01;

  }

  uVar2 = FUN_00297480(param_1,uVar2,pcVar3);

LAB_0001cee0:

  _objc_release(param_1);

  return uVar2;

}






// ==== FUN_0001d2d0 @0x1d2d0 ====  [src: FUN_.c]


void FUN_0001d2d0(long param_1)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  

  FUN_002954a0(&objc::class_t::_0x2f19de29);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_ck_WsQlr_,&cf_zPck_WhKmsQlr__,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),auVar2._8_8_,uVar1,1,0);

  FUN_00292c80(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,0,10,uVar1,

               *(undefined8 *)(param_1 + 0x28));

  _objc_release(uVar1);

  return;

}






// ==== FUN_00030178 @0x30178 ====  [src: FUN_.c]


void FUN_00030178(long param_1,long param_2)



{

  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);

  *(undefined8 *)(param_2 + 0x28) = 0;

  return;

}






// ==== FUN_00030188 @0x30188 ====  [src: FUN_.c]


void FUN_00030188(long param_1)



{

  _objc_release(*(undefined8 *)(param_1 + 0x28));

  return;

}






// ==== FUN_00030190 @0x30190 ====  [src: FUN_.c]


undefined8 FUN_00030190(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 local_200;

  long lStack_1f8;

  long *local_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  long lStack_1b8;

  long *local_1b0;

  undefined8 uStack_1a8;

  undefined8 local_1a0;

  undefined8 uStack_198;

  undefined8 uStack_190;

  undefined8 uStack_188;

  undefined1 auStack_168 [128];

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);

  uVar5 = *(undefined8 *)(lVar6 + 0x28);

  FUN_00298780(&_OBJC_CLASS___NSBundle);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00292640();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  FUN_00088600(uVar2,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00088600(&cf_com_shtm_cadis,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _CFPreferencesAppSynchronize(uVar2);

  _CFPreferencesAppSynchronize(&cf_com_shtm_cadis);

  uStack_198 = 0;

  local_1a0 = 0;

  uStack_188 = 0;

  uStack_190 = 0;

  lStack_1b8 = 0;

  local_1c0 = 0;

  uStack_1a8 = 0;

  local_1b0 = (long *)0x0;

  _objc_retain(uVar1);

  lVar4 = FUN_00293880(uVar1,extraout_x1,&local_1c0,auStack_e8,0x10);

  if (lVar4 != 0) {

    lVar7 = *local_1b0;

    do {

      lVar8 = 0;

      do {

        if (*local_1b0 != lVar7) {

          _objc_enumerationMutation(uVar1);

        }

        FUN_00004000(*(undefined8 *)(lStack_1b8 + lVar8 * 8));

        lVar8 = lVar8 + 1;

      } while (lVar4 != lVar8);

      lVar4 = FUN_00293880(uVar1,extraout_x1_00,&local_1c0,auStack_e8,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar1);

  uStack_1d8 = 0;

  local_1e0 = 0;

  uStack_1c8 = 0;

  uStack_1d0 = 0;

  lStack_1f8 = 0;

  local_200 = 0;

  uStack_1e8 = 0;

  local_1f0 = (long *)0x0;

  _objc_retain(uVar3);

  lVar4 = FUN_00293880(uVar3,extraout_x1_01,&local_200,auStack_168,0x10);

  if (lVar4 != 0) {

    lVar7 = *local_1f0;

    do {

      lVar8 = 0;

      do {

        if (*local_1f0 != lVar7) {

          _objc_enumerationMutation(uVar3);

        }

        FUN_00004000(*(undefined8 *)(lStack_1f8 + lVar8 * 8));

        lVar8 = lVar8 + 1;

      } while (lVar4 != lVar8);

      lVar4 = FUN_00293880(uVar3,extraout_x1_02,&local_200,auStack_168,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar3);

  _objc_release(uVar3);

  _objc_release(uVar1);

  _objc_release(uVar2);

  _objc_retain(uVar5);

  uVar1 = *(undefined8 *)(lVar6 + 0x28);

  *(undefined8 *)(lVar6 + 0x28) = uVar5;

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return 1;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_0003121c @0x3121c ====  [src: FUN_.c]


void FUN_0003121c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined1 auVar10 [16];

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_168 [128];

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  auVar10 = FUN_00299020(*(undefined8 *)(param_1 + 0x20));

  uVar1 = auVar10._0_8_;

  FUN_00291240(uVar1,auVar10._8_8_,*(undefined8 *)(param_1 + 0x28));

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar10._0_8_,auVar10._8_8_,uVar1,&cf_xzyHomeBottomBarPopupItems);

  _objc_release(auVar10._0_8_);

  FUN_00240480();

  FUN_002990e0(*(undefined8 *)(param_1 + 0x30));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  if (lVar3 != 0) {

    uStack_188 = 0;

    local_190 = 0;

    uStack_178 = 0;

    uStack_180 = 0;

    lStack_1a8 = 0;

    local_1b0 = 0;

    uStack_198 = 0;

    local_1a0 = (long *)0x0;

    FUN_002a6220(lVar3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4840();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    lVar5 = FUN_00293880(uVar4,extraout_x1,&local_1b0,auStack_e8,0x10);

    if (lVar5 != 0) {

      lVar7 = *local_1a0;

      do {

        lVar9 = 0;

        do {

          if (*local_1a0 != lVar7) {

            _objc_enumerationMutation(uVar4);

          }

          lVar6 = *(long *)(lStack_1a8 + lVar9 * 8);

          uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

          auVar10 = _objc_opt_isKindOfClass(lVar6,uVar2);

          uVar2 = auVar10._8_8_;

          if ((auVar10._0_8_ & 1) != 0) {

            auVar10 = FUN_002a4e60(lVar6);

            uVar2 = auVar10._8_8_;

            if (auVar10._0_8_ == 0x3f5) {

              _objc_retain(lVar6);

              _objc_release(uVar4);

              uVar2 = extraout_x1_00;

              if (lVar6 != 0) goto LAB_000314c8;

              goto LAB_000313c0;

            }

          }

          lVar9 = lVar9 + 1;

        } while (lVar5 != lVar9);

        lVar5 = FUN_00293880(uVar4,uVar2,&local_1b0,auStack_e8,0x10);

      } while (lVar5 != 0);

    }

    _objc_release(uVar4);

  }

LAB_000313c0:

  uStack_1c8 = 0;

  local_1d0 = 0;

  uStack_1b8 = 0;

  uStack_1c0 = 0;

  lStack_1e8 = 0;

  local_1f0 = 0;

  uStack_1d8 = 0;

  local_1e0 = (long *)0x0;

  FUN_002a6220(*(undefined8 *)(param_1 + 0x30));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6520();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4840();

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  _objc_release(uVar2);

  lVar7 = FUN_00293880(lVar5,extraout_x1_01,&local_1f0,auStack_168,0x10);

  if (lVar7 == 0) {

LAB_000314fc:

    _objc_release(lVar5);

LAB_00031504:

    _objc_release(lVar3);

    _objc_release(uVar1);

    if (*(long *)PTR____stack_chk_guard_00388738 != local_68) {

                    /* WARNING: Subroutine does not return */

      ___stack_chk_fail();

    }

    return;

  }

  lVar9 = *local_1e0;

LAB_00031438:

  lVar8 = 0;

LAB_0003143c:

  if (*local_1e0 != lVar9) {

    _objc_enumerationMutation(lVar5);

  }

  lVar6 = *(long *)(lStack_1e8 + lVar8 * 8);

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

  auVar10 = _objc_opt_isKindOfClass(lVar6,uVar2);

  uVar2 = auVar10._8_8_;

  if ((auVar10._0_8_ & 1) != 0) {

    auVar10 = FUN_002a4e60(lVar6);

    uVar2 = auVar10._8_8_;

    if (auVar10._0_8_ == 0x3f5) {

      _objc_retain(lVar6);

      _objc_release(lVar5);

      uVar2 = extraout_x1_02;

      if (lVar6 == 0) goto LAB_00031504;

LAB_000314c8:

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,uVar2,1);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(lVar6,auVar10._8_8_,auVar10._0_8_,100);

      _objc_release(auVar10._0_8_);

      lVar5 = lVar6;

      goto LAB_000314fc;

    }

  }

  lVar8 = lVar8 + 1;

  if (lVar7 == lVar8) goto code_r0x00031490;

  goto LAB_0003143c;

code_r0x00031490:

  lVar7 = FUN_00293880(lVar5,uVar2,&local_1f0,auStack_168,0x10);

  if (lVar7 == 0) goto LAB_000314fc;

  goto LAB_00031438;

}






// ==== FUN_000328c4 @0x328c4 ====  [src: FUN_.c]


void FUN_000328c4(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  long local_58;

  

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_CoverRes_Bubbles___);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar7._0_8_,auVar8._8_8_,auVar8._0_8_);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar8._0_8_);

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_00295160(auVar8._0_8_,auVar8._8_8_,uVar3);

  _objc_release(auVar8._0_8_);

  if (iVar1 != 0) {

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    local_58 = 0;

    FUN_0029b3c0(auVar8._0_8_,auVar8._8_8_,uVar3,&local_58);

    lVar6 = local_58;

    _objc_retain(local_58);

    _objc_release(auVar8._0_8_);

    if (lVar6 == 0) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      lVar6 = auVar8._0_8_;

      FUN_002a45e0(lVar6,auVar8._8_8_,&cf_mesMsgMergeSelectedBubble);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar8._0_8_;

      iVar1 = FUN_00297820(uVar4,auVar8._8_8_,*(undefined8 *)(param_1 + 0x20));

      if (iVar1 != 0) {

        FUN_002a0060(lVar6,extraout_x1_01,&cf___,&cf_mesMsgMergeSelectedBubble);

        FUN_002a4a40(lVar6);

      }

      FUN_0029af00(*(undefined8 *)(param_1 + 0x28));

      FUN_0029b140(*(undefined8 *)(param_1 + 0x30));

      FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_02,&cf_RdbR,&cf__g0Wll_Rd,1);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar8._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar8._8_8_,&cf_nx_,0,0);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar5,auVar8._8_8_,auVar8._0_8_);

      _objc_release(auVar8._0_8_);

      FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_03,uVar5,1,0);

      _objc_release(uVar5);

    }

    else {

      FUN_00298400(lVar6);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar8._8_8_,&cf_Rd1Y_,auVar8._0_8_,1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar8._0_8_);

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_nx_,0,0);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar4,auVar8._8_8_,auVar8._0_8_);

      _objc_release(auVar8._0_8_);

      FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_00,uVar4,1,0);

    }

    _objc_release(uVar4);

    _objc_release(lVar6);

  }

  _objc_release(uVar3);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar2);

  return;

}






// ==== FUN_00034394 @0x34394 ====  [src: FUN_.c]


void FUN_00034394(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  undefined1 auVar5 [16];

  

  FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar5._0_8_,auVar5._8_8_,0x3ef);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar3 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar4 = _objc_opt_isKindOfClass(lVar3,uVar1);

    if ((uVar4 & 1) != 0) {

      FUN_0029b140(lVar3);

    }

  }

  _objc_release(lVar3);

  return;

}






// ==== FUN_00034484 @0x34484 ====  [src: FUN_.c]


void FUN_00034484(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  

  FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar5._0_8_,auVar5._8_8_,0x3e9);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar3 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar4 = _objc_opt_isKindOfClass(lVar3,uVar1);

    if ((uVar4 & 1) != 0) {

      FUN_0029b140(lVar3);

    }

  }

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_mRbR,&cf_hQ__ni_VGr_mRbR,1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar5._8_8_,&cf_bwSN,0,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,uVar1,1,0);

  _objc_release(uVar1);

  _objc_release(lVar3);

  return;

}






// ==== FUN_00034e34 @0x34e34 ====  [src: FUN_.c]


void FUN_00034e34(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  

  FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar5._0_8_,auVar5._8_8_,0x3e9);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar3 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar4 = _objc_opt_isKindOfClass(lVar3,uVar1);

    if ((uVar4 & 1) != 0) {

      FUN_0029b140(lVar3);

    }

  }

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_mRbR,&cf_hQ__ni_VGr_mRbR,1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar5._8_8_,&cf_bwSN,0,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,uVar1,1,0);

  _objc_release(uVar1);

  _objc_release(lVar3);

  return;

}






// ==== FUN_00035c60 @0x35c60 ====  [src: FUN_.c]


void FUN_00035c60(long param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  

  FUN_0029e500((float)*(double *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),param_2,

               *(undefined8 *)(param_1 + 0x28));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_0029a4c0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),extraout_x1,

               *(undefined8 *)(param_1 + 0x38));

  return;

}






// ==== FUN_00035ca0 @0x35ca0 ====  [src: FUN_.c]


void FUN_00035ca0(long param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  

  FUN_0029e500(0,*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_0029a4c0(0,*(undefined8 *)(param_1 + 0x30),extraout_x1,*(undefined8 *)(param_1 + 0x38));

  return;

}






// ==== FUN_00036074 @0x36074 ====  [src: FUN_.c]


void FUN_00036074(long param_1)



{

  bool bVar1;

  bool bVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar5;

  float fVar6;

  undefined1 auVar7 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  FUN_002a5020(uVar4);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar5 = FUN_00295480();

  _objc_release(uVar3);

  fVar6 = (float)uVar5;

  bVar1 = false;

  bVar2 = true;

  if (10.0 <= fVar6) {

    bVar1 = false;

    bVar2 = true;

    if (!NAN(fVar6)) {

      bVar1 = fVar6 == 500.0;

      bVar2 = 500.0 <= fVar6;

    }

  }

  if (!bVar2 || bVar1) {

    FUN_0029e500(uVar5,*(undefined8 *)(param_1 + 0x28),extraout_x1,*(undefined8 *)(param_1 + 0x30));

    FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

    FUN_0029a4c0((double)fVar6,*(undefined8 *)(param_1 + 0x38),extraout_x1_01,

                 *(undefined8 *)(param_1 + 0x40));

  }

  else {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_eQ,&cf_eQ1,1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar7._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar7._8_8_,&cf_nx_,0,0);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar3,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    FUN_0029a500(*(undefined8 *)(param_1 + 0x38),extraout_x1_00,uVar3,1,0);

    _objc_release(uVar3);

  }

  _objc_release(uVar4);

  return;

}






// ==== FUN_00036db8 @0x36db8 ====  [src: FUN_.c]


void FUN_00036db8(long param_1)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  

  FUN_002954a0(&objc::class_t::_0x2f19de29);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_ck_WsQlr_,&cf_zPck_WhKmsQlr__,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),auVar2._8_8_,uVar1,1,0);

  FUN_00292c80(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,0,10,uVar1,

               *(undefined8 *)(param_1 + 0x28));

  _objc_release(uVar1);

  return;

}






// ==== FUN_00036e4c @0x36e4c ====  [src: FUN_.c]


void FUN_00036e4c(long param_1)



{

  long lVar1;

  undefined1 auVar2 [16];

  

  FUN_00298800(*(undefined8 *)(param_1 + 0x20));

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_00298800(*(undefined8 *)(param_1 + 0x20));

    auVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0120(auVar2._0_8_,auVar2._8_8_,0);

    _objc_release(auVar2._0_8_);

    return;

  }

  return;

}






// ==== FUN_00038e24 @0x38e24 ====  [src: FUN_.c]


void FUN_00038e24(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  ulong uVar5;

  dispatch_time_t dVar6;

  undefined8 extraout_x1;

  float fVar7;

  float fVar8;

  undefined1 auVar9 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  fVar7 = (float)FUN_00295480(uVar3);

  fVar8 = 0.0;

  if (0.0 < fVar7) {

    fVar8 = fVar7;

  }

  fVar7 = 50.0;

  if (fVar8 <= 50.0) {

    fVar7 = fVar8;

  }

  FUN_0029e500(fVar7,*(undefined8 *)(param_1 + 0x28),extraout_x1,*(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002990e0(*(undefined8 *)(param_1 + 0x38));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar9._0_8_,auVar9._8_8_,0x3e9);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar4 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar5 = _objc_opt_isKindOfClass(lVar4,uVar1);

    if ((uVar5 & 1) != 0) {

      FUN_0029b140(lVar4);

    }

  }

  dVar6 = _dispatch_time(0,300000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0003902c;

  puStack_50 = &DAT_00388e60;

  local_48 = *(undefined8 *)(param_1 + 0x38);

  _dispatch_after(dVar6,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(lVar4);

  _objc_release(uVar3);

  return;

}






// ==== FUN_0003963c @0x3963c ====  [src: FUN_.c]


void FUN_0003963c(undefined8 param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar1 [16];

  

  _objc_retain(param_2);

  FUN_002a06e0(param_2,extraout_x1,&cf_Lte<P);

  FUN_0029f1e0(param_2,extraout_x1_00,2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf___0f);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(param_2,auVar1._8_8_,auVar1._0_8_);

  _objc_release(auVar1._0_8_);

  _objc_release(param_2);

  return;

}






// ==== FUN_000396f4 @0x396f4 ====  [src: FUN_.c]


void FUN_000396f4(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  ulong uVar5;

  dispatch_time_t dVar6;

  undefined8 extraout_x1;

  float fVar7;

  float fVar8;

  undefined1 auVar9 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  fVar7 = (float)FUN_00295480(uVar3);

  fVar8 = -20.0;

  if (-20.0 < fVar7) {

    fVar8 = fVar7;

  }

  fVar7 = 10.0;

  if (fVar8 <= 10.0) {

    fVar7 = fVar8;

  }

  FUN_0029e500(fVar7,*(undefined8 *)(param_1 + 0x28),extraout_x1,&cf_mesMsgMergeHeightReduce);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002990e0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar9._0_8_,auVar9._8_8_,0x3ea);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar4 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar5 = _objc_opt_isKindOfClass(lVar4,uVar1);

    if ((uVar5 & 1) != 0) {

      FUN_0029b140(lVar4);

    }

  }

  dVar6 = _dispatch_time(0,300000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_00039900;

  puStack_50 = &DAT_00388e60;

  local_48 = *(undefined8 *)(param_1 + 0x30);

  _dispatch_after(dVar6,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(lVar4);

  _objc_release(uVar3);

  return;

}






// ==== FUN_00039900 @0x39900 ====  [src: FUN_.c]


void FUN_00039900(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_c_y,&cf_n_,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_Sm,1,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_zsS_T,2,

               &PTR___NSConcreteGlobalBlock_003894f0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,uVar1,1,0);

  _objc_release(uVar1);

  return;

}






// ==== FUN_00039e94 @0x39e94 ====  [src: FUN_.c]


void FUN_00039e94(undefined8 param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar1 [16];

  

  _objc_retain(param_2);

  FUN_002a06e0(param_2,extraout_x1,&cf_OPy<P);

  FUN_0029f1e0(param_2,extraout_x1_00,2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf__ld);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(param_2,auVar1._8_8_,auVar1._0_8_);

  _objc_release(auVar1._0_8_);

  _objc_release(param_2);

  return;

}






// ==== FUN_00039f4c @0x39f4c ====  [src: FUN_.c]


void FUN_00039f4c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  dispatch_time_t dVar5;

  undefined8 extraout_x1;

  undefined1 auVar6 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar4 = FUN_002974a0();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar4 < -99) {

    lVar4 = -100;

  }

  if (99 < lVar4) {

    lVar4 = 100;

  }

  FUN_0029efa0(*(undefined8 *)(param_1 + 0x28),extraout_x1,lVar4,

               &cf_mesMsgMergeReverseAvatarDownOffset);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002990e0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar6._0_8_,auVar6._8_8_,0x3ea);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar4 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    auVar6 = _objc_opt_isKindOfClass(lVar4,uVar1);

    if ((auVar6._0_8_ & 1) != 0) {

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar6._8_8_,2);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(lVar4,auVar6._8_8_,auVar6._0_8_,100);

      _objc_release(auVar6._0_8_);

    }

  }

  dVar5 = _dispatch_time(0,300000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0003a17c;

  puStack_50 = &DAT_00388e60;

  local_48 = *(undefined8 *)(param_1 + 0x30);

  _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(lVar4);

  return;

}






// ==== FUN_0003a17c @0x3a17c ====  [src: FUN_.c]


void FUN_0003a17c(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_c_y,&cf_n_,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_Sm,1,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_zsS_T,2,

               &PTR___NSConcreteGlobalBlock_00389530);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,uVar1,1,0);

  _objc_release(uVar1);

  return;

}






// ==== FUN_0003a83c @0x3a83c ====  [src: FUN_.c]


void FUN_0003a83c(undefined8 param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar1 [16];

  

  _objc_retain(param_2);

  FUN_002a06e0(param_2,extraout_x1,&cf_mo_OPy);

  FUN_0029f1e0(param_2,extraout_x1_00,2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf___0f);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(param_2,auVar1._8_8_,auVar1._0_8_);

  _objc_release(auVar1._0_8_);

  _objc_release(param_2);

  return;

}






// ==== FUN_0003a8f4 @0x3a8f4 ====  [src: FUN_.c]


void FUN_0003a8f4(long param_1)



{

  float fVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  dispatch_time_t dVar7;

  undefined8 extraout_x1;

  float fVar8;

  float fVar9;

  undefined1 auVar10 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  _objc_release(uVar2);

  fVar8 = (float)FUN_00295480(uVar4);

  fVar9 = 60.0;

  if (fVar8 <= 60.0) {

    fVar9 = fVar8;

  }

  fVar1 = -60.0;

  if (-60.0 <= fVar8) {

    fVar1 = fVar9;

  }

  FUN_0029e500(fVar1,*(undefined8 *)(param_1 + 0x28),extraout_x1,*(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002990e0(*(undefined8 *)(param_1 + 0x38));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar10._0_8_,auVar10._8_8_,0x3ea);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  if (lVar5 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar6 = _objc_opt_isKindOfClass(lVar5,uVar2);

    if ((uVar6 & 1) != 0) {

      FUN_0029b140(lVar5);

    }

  }

  dVar7 = _dispatch_time(0,300000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0003ab00;

  puStack_50 = &DAT_00388e60;

  local_48 = *(undefined8 *)(param_1 + 0x38);

  _dispatch_after(dVar7,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(lVar5);

  _objc_release(uVar4);

  return;

}






// ==== FUN_0003aec4 @0x3aec4 ====  [src: FUN_.c]


void FUN_0003aec4(undefined8 param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar1 [16];

  

  _objc_retain(param_2);

  FUN_002a06e0(param_2,extraout_x1,&cf__Q_<P);

  FUN_0029f1e0(param_2,extraout_x1_00,4);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf___0f);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(param_2,auVar1._8_8_,auVar1._0_8_);

  _objc_release(auVar1._0_8_);

  _objc_release(param_2);

  return;

}






// ==== FUN_0003af7c @0x3af7c ====  [src: FUN_.c]


void FUN_0003af7c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  ulong uVar5;

  dispatch_time_t dVar6;

  undefined8 extraout_x1;

  float fVar7;

  float fVar8;

  undefined1 auVar9 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  fVar7 = (float)FUN_00295480(uVar3);

  fVar8 = 0.0;

  if (0.0 < fVar7) {

    fVar8 = fVar7;

  }

  fVar7 = 40.0;

  if (fVar8 <= 40.0) {

    fVar7 = fVar8;

  }

  FUN_0029e500(fVar7,*(undefined8 *)(param_1 + 0x28),extraout_x1,&cf_mesMsgMergeGroupGapReduce);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002990e0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar9._0_8_,auVar9._8_8_,0x3ea);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar4 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar5 = _objc_opt_isKindOfClass(lVar4,uVar1);

    if ((uVar5 & 1) != 0) {

      FUN_0029b140(lVar4);

    }

  }

  dVar6 = _dispatch_time(0,300000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0003b18c;

  puStack_50 = &DAT_00388e60;

  local_48 = *(undefined8 *)(param_1 + 0x30);

  _dispatch_after(dVar6,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(lVar4);

  _objc_release(uVar3);

  return;

}






// ==== FUN_0003b18c @0x3b18c ====  [src: FUN_.c]


void FUN_0003b18c(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_c_y,&cf_n_,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_Sm,1,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_zsS_T,2,

               &PTR___NSConcreteGlobalBlock_003895b0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,uVar1,1,0);

  _objc_release(uVar1);

  return;

}






// ==== FUN_0003b550 @0x3b550 ====  [src: FUN_.c]


void FUN_0003b550(undefined8 param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar1 [16];

  

  _objc_retain(param_2);

  FUN_002a06e0(param_2,extraout_x1,&cf_yJ_Q_<P);

  FUN_0029f1e0(param_2,extraout_x1_00,2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf___0f);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(param_2,auVar1._8_8_,auVar1._0_8_);

  _objc_release(auVar1._0_8_);

  _objc_release(param_2);

  return;

}






// ==== FUN_0003b608 @0x3b608 ====  [src: FUN_.c]


void FUN_0003b608(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  ulong uVar5;

  dispatch_time_t dVar6;

  undefined8 extraout_x1;

  float fVar7;

  float fVar8;

  undefined1 auVar9 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  fVar7 = (float)FUN_00295480(uVar3);

  fVar8 = -40.0;

  if (-40.0 < fVar7) {

    fVar8 = fVar7;

  }

  fVar7 = 20.0;

  if (fVar8 <= 20.0) {

    fVar7 = fVar8;

  }

  FUN_0029e500(fVar7,*(undefined8 *)(param_1 + 0x28),extraout_x1,&cf_mesMsgMergePrivateGapReduce);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002990e0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar9._0_8_,auVar9._8_8_,0x3ea);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar4 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar5 = _objc_opt_isKindOfClass(lVar4,uVar1);

    if ((uVar5 & 1) != 0) {

      FUN_0029b140(lVar4);

    }

  }

  dVar6 = _dispatch_time(0,300000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0003b818;

  puStack_50 = &DAT_00388e60;

  local_48 = *(undefined8 *)(param_1 + 0x30);

  _dispatch_after(dVar6,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(lVar4);

  _objc_release(uVar3);

  return;

}






// ==== FUN_0003b818 @0x3b818 ====  [src: FUN_.c]


void FUN_0003b818(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_c_y,&cf_n_,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_Sm,1,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_zsS_T,2,

               &PTR___NSConcreteGlobalBlock_003895f0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,uVar1,1,0);

  _objc_release(uVar1);

  return;

}






// ==== FUN_0003cd80 @0x3cd80 ====  [src: FUN_.c]


void FUN_0003cd80(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 uStack_48;

  undefined8 local_40;

  undefined8 local_38;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  local_80 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = 0xc2000000;

  local_70 = FUN_0003ce7c;

  puStack_68 = &DAT_00389660;

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar1);

  uVar2 = *(undefined8 *)(param_1 + 0x28);

  local_60 = uVar1;

  local_58 = param_3;

  _objc_retain(uVar2);

  uStack_48 = *(undefined8 *)(param_1 + 0x30);

  uVar1 = *(undefined8 *)(param_1 + 0x38);

  local_50 = uVar2;

  local_40 = param_2;

  _objc_retain(uVar1);

  local_38 = uVar1;

  _objc_retain(param_2);

  _objc_retain(param_3);

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_80);

  _objc_release(local_38);

  _objc_release(local_40);

  _objc_release(local_50);

  _objc_release(local_58);

  _objc_release(local_60);

  _objc_release(param_2);

  _objc_release(param_3);

  return;

}






// ==== FUN_0003ce7c @0x3ce7c ====  [src: FUN_.c]


void FUN_0003ce7c(long param_1)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 uStack_40;

  undefined8 local_38;

  

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc2000000;

  local_68 = FUN_0003cf78;

  puStack_60 = &DAT_00389630;

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  uVar2 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(uVar2);

  uVar3 = *(undefined8 *)(param_1 + 0x30);

  local_58 = uVar2;

  _objc_retain(uVar3);

  uVar5 = *(undefined8 *)(param_1 + 0x40);

  uVar4 = *(undefined8 *)(param_1 + 0x38);

  local_50 = uVar3;

  _objc_retain(*(undefined8 *)(param_1 + 0x40));

  uVar2 = *(undefined8 *)(param_1 + 0x48);

  local_48 = uVar4;

  uStack_40 = uVar5;

  _objc_retain(uVar2);

  local_38 = uVar2;

  FUN_00294700(uVar1,extraout_x1,1,&local_78);

  _objc_release(local_38);

  _objc_release(uStack_40);

  _objc_release(local_50);

  _objc_release(local_58);

  return;

}






// ==== FUN_0003cf78 @0x3cf78 ====  [src: FUN_.c]


void FUN_0003cf78(long param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  undefined8 local_38;

  

  if (*(long *)(param_1 + 0x20) == 0) {

    auVar2 = FUN_00292c60(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38));

    if ((auVar2._0_8_ & 1) != 0) {

      FUN_0029d080(*(undefined8 *)(param_1 + 0x40),auVar2._8_8_,1,&cf_mesMsgMergeCreatorPermission);

      FUN_002a4a40(*(undefined8 *)(param_1 + 0x40));

      FUN_0029af00(*(undefined8 *)(param_1 + 0x30));

      local_58 = PTR___NSConcreteStackBlock_003886f0;

      local_50 = 0xc2000000;

      local_48 = FUN_0003d178;

      puStack_40 = &DAT_00388e60;

      local_38 = *(undefined8 *)(param_1 + 0x30);

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

      return;

    }

    FUN_002a0120(*(undefined8 *)(param_1 + 0x28),auVar2._8_8_,0);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_01,&cf__gcCg,&cf_R_OCgP,1);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar2._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_nx_,0,0);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

    _objc_release(auVar2._0_8_);

    FUN_0029a500(*(undefined8 *)(param_1 + 0x30),extraout_x1_02,uVar1,1,0);

  }

  else {

    FUN_002a0120(*(undefined8 *)(param_1 + 0x28),param_2,0);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_cCghg1Y_,&cf_elc0RcCggRhVhgQ__c,1)

    ;

    auVar2 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar2._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_nx_,0,0);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

    _objc_release(auVar2._0_8_);

    FUN_0029a500(*(undefined8 *)(param_1 + 0x30),extraout_x1_00,uVar1,1,0);

  }

  _objc_release(uVar1);

  return;

}






// ==== FUN_0003d178 @0x3d178 ====  [src: FUN_.c]


void FUN_0003d178(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  

  FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar4._0_8_,auVar4._8_8_,0x3ea);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar3 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    auVar4 = _objc_opt_isKindOfClass(lVar3,uVar1);

    if ((auVar4._0_8_ & 1) != 0) {

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar4._8_8_,6);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(lVar3,auVar4._8_8_,auVar4._0_8_,5);

      _objc_release(auVar4._0_8_);

    }

  }

  _objc_release(lVar3);

  return;

}






// ==== FUN_0003d334 @0x3d334 ====  [src: FUN_.c]


void FUN_0003d334(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  

  FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar4._0_8_,auVar4._8_8_,0x3ea);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar3 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    auVar4 = _objc_opt_isKindOfClass(lVar3,uVar1);

    if ((auVar4._0_8_ & 1) != 0) {

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar4._8_8_,6);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(lVar3,auVar4._8_8_,auVar4._0_8_,5);

      _objc_release(auVar4._0_8_);

    }

  }

  _objc_release(lVar3);

  return;

}






// ==== FUN_0003d8f4 @0x3d8f4 ====  [src: FUN_.c]


void FUN_0003d8f4(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_c_y,&cf_n_,1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar8._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar8._8_8_,&cf_Sm,1,0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_zsS_T,2,

               &PTR___NSConcreteGlobalBlock_003896c0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  uVar7 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar7);

  _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),"bubbleNavController");

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    lVar3 = 0;

LAB_0003da30:

    FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar8._8_8_;

    if (auVar8._0_8_ == 0) goto LAB_0003dac0;

    FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5520();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar6);

    _objc_release(auVar8._0_8_);

    uVar6 = extraout_x1_00;

    if (lVar4 == 0) goto LAB_0003dac0;

    FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5520();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar7);

    uVar7 = uVar5;

  }

  else {

    FUN_00299260(lVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) goto LAB_0003da30;

    FUN_002a5520(lVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 == 0) goto LAB_0003da30;

    FUN_002a5520(lVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar6 = uVar7;

    uVar7 = uVar5;

  }

  _objc_release(uVar6);

  uVar6 = extraout_x1_01;

LAB_0003dac0:

  FUN_0029a500(uVar7,uVar6,uVar1,1,0);

  _objc_release(lVar3);

  _objc_release(lVar2);

  _objc_release(uVar7);

  _objc_release(uVar1);

  return;

}






// ==== FUN_0003dca8 @0x3dca8 ====  [src: FUN_.c]


void FUN_0003dca8(void)



{

  undefined8 uVar1;

  

  uVar1 = DAT_003e7488;

  DAT_003e7488 = &cf___;

  _objc_release(uVar1);

  DAT_003e7678 = 0;

  DAT_003e7680 = 0;

  DAT_003e7688 = 0;

  if (DAT_003e7668 != 0) {

    FUN_0029b240();

    return;

  }

  return;

}






// ==== FUN_0003dcfc @0x3dcfc ====  [src: FUN_.c]


void FUN_0003dcfc(void)



{

  int iVar1;

  

  iVar1 = FUN_00297960(&_OBJC_CLASS___NSThread);

  if (iVar1 != 0) {

    FUN_00089c08();

    return;

  }

  _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038a640);

  return;

}






// ==== FUN_0003e6a0 @0x3e6a0 ====  [src: FUN_.c]


void FUN_0003e6a0(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_0029efa0(uVar1,auVar3._8_8_,param_2,*(undefined8 *)(param_1 + 0x20));

  FUN_002a4a40(uVar1);

  if (*(ulong *)(param_1 + 0x30) < 4) {

    *(undefined8 *)(&PTR_DAT_0038b998)[*(ulong *)(param_1 + 0x30)] = param_2;

  }

  DAT_003e74e0 = DAT_003e74e0 + 1;

  FUN_0003dcfc();

  if (*(long *)(param_1 + 0x28) != 0) {

    FUN_001941b8(param_2);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(*(undefined8 *)(param_1 + 0x28));

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar3._0_8_,auVar3._8_8_,uVar2);

    _objc_release(auVar3._0_8_);

    _objc_release(uVar2);

  }

  _objc_release(uVar1);

  return;

}






// ==== FUN_0003e7a8 @0x3e7a8 ====  [src: FUN_.c]


void FUN_0003e7a8(long param_1)



{

                    /* WARNING: Could not recover jumptable at 0x0003e7b4. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))

            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));

  return;

}






// ==== FUN_0003e7b8 @0x3e7b8 ====  [src: FUN_.c]


void FUN_0003e7b8(long param_1)



{

                    /* WARNING: Could not recover jumptable at 0x0003e7c4. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))

            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));

  return;

}






// ==== FUN_0003ede4 @0x3ede4 ====  [src: FUN_.c]


void FUN_0003ede4(long param_1,long param_2)



{

  undefined8 uVar1;

  cfstringStruct *pcVar2;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_0029efa0(uVar1,auVar3._8_8_,param_2,&cf_mesMsgMergeWrapReferAlignment);

  FUN_002a4a40(uVar1);

  DAT_003e74e0 = DAT_003e74e0 + 1;

  DAT_003e7508 = param_2;

  if (*(long *)(param_1 + 0x20) != 0) {

    if (param_2 - 1U < 3) {

      pcVar2 = (cfstringStruct *)(&PTR_cf____0038b9b8)[param_2 - 1U];

    }

    else {

      pcVar2 = &cf_E__N;

    }

    FUN_002944a0(*(undefined8 *)(param_1 + 0x20));

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar3._0_8_,auVar3._8_8_,pcVar2);

    _objc_release(auVar3._0_8_);

  }

  FUN_0003dcfc();

  _objc_release(uVar1);

  return;

}






// ==== FUN_0003eed8 @0x3eed8 ====  [src: FUN_.c]


void FUN_0003eed8(long param_1)



{

                    /* WARNING: Could not recover jumptable at 0x0003eee4. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))

            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));

  return;

}






// ==== FUN_0003f50c @0x3f50c ====  [src: FUN_.c]


void FUN_0003f50c(long param_1,long param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar3._0_8_;

  FUN_0029efa0(uVar2,auVar3._8_8_,param_2,&cf_mesMsgMergeWrapReferDividerLength);

  FUN_002a4a40(uVar2);

  DAT_003e74e0 = DAT_003e74e0 + 1;

  DAT_003e7510 = param_2;

  FUN_0003dcfc();

  if (*(long *)(param_1 + 0x20) != 0) {

    FUN_002944a0();

    auVar3 = _objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf_w__u;

    if (param_2 != 1) {

      pcVar1 = &cf__ll_Nz;

    }

    FUN_002a1d60(auVar3._0_8_,auVar3._8_8_,pcVar1);

    _objc_release(auVar3._0_8_);

  }

  _objc_release(uVar2);

  return;

}






// ==== FUN_0003f5e4 @0x3f5e4 ====  [src: FUN_.c]


void FUN_0003f5e4(long param_1)



{

                    /* WARNING: Could not recover jumptable at 0x0003f5f0. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))

            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));

  return;

}






// ==== FUN_0003fd38 @0x3fd38 ====  [src: FUN_.c]


void FUN_0003fd38(long param_1)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined1 auVar5 [16];

  

  _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),"bubbleNavController");

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 == 0) {

    lVar4 = 0;

    lVar2 = 0;

  }

  else {

    FUN_00299260(lVar1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

      lVar4 = 0;

    }

    else {

      FUN_002a5520(lVar2);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6220();

      auVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002a62a0(auVar5._0_8_,auVar5._8_8_,0x3eb);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar5._0_8_);

      _objc_release(uVar3);

      if (lVar4 != 0) {

        uVar3 = _objc_opt_class(&_OBJC_CLASS___UITableView);

        auVar5 = _objc_opt_isKindOfClass(lVar4,uVar3);

        if ((auVar5._0_8_ & 1) != 0) {

          FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar5._8_8_,2);

          auVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_0029b1c0(lVar4,auVar5._8_8_,auVar5._0_8_,5);

          _objc_release(auVar5._0_8_);

        }

      }

    }

  }

  _objc_release(lVar2);

  _objc_release(lVar1);

  _objc_release(lVar4);

  return;

}






// ==== FUN_000822c8 @0x822c8 ====  [src: FUN_.c]


void FUN_000822c8(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined1 auVar6 [16];

  

  _objc_retain();

  if (param_1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

    if ((uVar3 & 1) != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6308);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      uVar2 = auVar6._8_8_;

      lVar4 = auVar6._0_8_;

      if (lVar4 == 0) {

LAB_00082364:

        FUN_002a6080(param_1,uVar2,&cf_m_bgImageView);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 != 0) {

          _objc_setAssociatedObject(param_1,PTR_LOOP_003e6308,lVar5,1);

        }

      }

      else {

        FUN_002a4880(lVar4);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if ((lVar5 == 0) || (auVar6 = FUN_002978a0(lVar4), (auVar6._0_8_ & 1) != 0)) {

          _objc_release(lVar5);

LAB_00082350:

          _objc_setAssociatedObject(param_1,PTR_LOOP_003e6308,0,1);

          uVar2 = extraout_x1;

          goto LAB_00082364;

        }

        iVar1 = FUN_00297700(lVar4,auVar6._8_8_,param_1);

        _objc_release(lVar5);

        if (iVar1 == 0) goto LAB_00082350;

        _objc_retain(lVar4);

        lVar5 = lVar4;

      }

      _objc_release(lVar4);

      goto LAB_000823a8;

    }

  }

  lVar5 = 0;

LAB_000823a8:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar5);

  return;

}






// ==== FUN_00082510 @0x82510 ====  [src: FUN_.c]


void FUN_00082510(undefined8 param_1,undefined8 param_2)



{

  byte bVar1;

  byte bVar2;

  int iVar3;

  uint uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar7;

  byte bVar8;

  long lVar9;

  uint uVar10;

  undefined8 uVar11;

  bool bVar12;

  long lVar13;

  undefined1 auVar14 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a5f80(param_2);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar14._0_8_,auVar14._8_8_,&cf_keys);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar14._0_8_);

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain(uVar5);

  lVar6 = FUN_00293880(uVar5,extraout_x1,&local_130,auStack_f0,0x10);

  if (lVar6 == 0) {

    _objc_release(uVar5);

  }

  else {

    bVar12 = false;

    uVar10 = 0;

    lVar13 = *local_120;

    do {

      lVar9 = 0;

      do {

        if (*local_120 != lVar13) {

          _objc_enumerationMutation(uVar5);

        }

        uVar11 = *(undefined8 *)(lStack_128 + lVar9 * 8);

        _objc_retain(uVar11);

        auVar14 = FUN_00297820(uVar11,extraout_x1_00,&cf_coversEnabled);

        if ((auVar14._0_8_ & 1) == 0) {

          iVar3 = FUN_00295f60(uVar11,auVar14._8_8_,&cf_mesMsgMerge);

          if (iVar3 != 0) {

            auVar14 = FUN_00297820(uVar11,extraout_x1_01,&cf_mesMsgMergeBubbleEnabled);

            if ((auVar14._0_8_ & 1) == 0) {

              auVar14 = FUN_00297820(uVar11,auVar14._8_8_,&cf_mesMsgMergePayBubbleEnabled);

              if ((auVar14._0_8_ & 1) != 0) goto LAB_00082684;

              auVar14 = FUN_00297820(uVar11,auVar14._8_8_,&cf_mesMsgMergeDefaultBubblePosition);

              if ((auVar14._0_8_ & 1) != 0) goto LAB_00082684;

              auVar14 = FUN_00297820(uVar11,auVar14._8_8_,&cf_mesMsgMergeSelectedBubble);

              if ((auVar14._0_8_ & 1) != 0) goto LAB_00082684;

              auVar14 = FUN_00297820(uVar11,auVar14._8_8_,&cf_mesMsgMergeSelectedSubPackage);

              if ((auVar14._0_8_ & 1) != 0) goto LAB_00082684;

              uVar4 = FUN_00297820(uVar11,auVar14._8_8_,&cf_mesMsgMergeCreatorPermission);

            }

            else {

LAB_00082684:

              uVar4 = 1;

            }

            uVar10 = uVar4 ^ 1 | uVar10;

          }

        }

        else {

          uVar10 = 1;

        }

        _objc_release(uVar11);

        auVar14 = FUN_00295f60(uVar11,extraout_x1_02,&cf_cover);

        uVar7 = auVar14._8_8_;

        if ((auVar14._0_8_ & 1) == 0) {

          auVar14 = FUN_00295f60(uVar11,uVar7,&cf_covers);

          uVar7 = auVar14._8_8_;

          if ((auVar14._0_8_ & 1) != 0) goto LAB_0008270c;

          auVar14 = FUN_00295f60(uVar11,uVar7,&cf_selectedCover);

          uVar7 = auVar14._8_8_;

          if ((auVar14._0_8_ & 1) != 0) goto LAB_0008270c;

          auVar14 = FUN_00295f60(uVar11,uVar7,&cf_personalCover_);

          uVar7 = auVar14._8_8_;

          if ((auVar14._0_8_ & 1) != 0) goto LAB_0008270c;

          auVar14 = FUN_00295f60(uVar11,uVar7,&cf_peerCover_);

          uVar7 = auVar14._8_8_;

          if (((auVar14._0_8_ & 1) != 0) ||

             (iVar3 = FUN_00295f60(uVar11,uVar7,&cf_CoverSelectedCard), uVar7 = extraout_x1_03,

             iVar3 != 0)) goto LAB_0008270c;

        }

        else {

LAB_0008270c:

          bVar12 = true;

        }

        lVar9 = lVar9 + 1;

      } while (lVar6 != lVar9);

      lVar6 = FUN_00293880(uVar5,uVar7,&local_130,auStack_f0,0x10);

    } while (lVar6 != 0);

    _objc_release(uVar5);

    if ((uVar10 & 1) != 0) {

      DAT_003e7670 = 0;

      FUN_000828e0();

      DAT_003e7a2c = 0;

      FUN_0003dca8();

    }

    bVar2 = DAT_003e74d8;

    bVar1 = DAT_003e74b9;

    if (bVar12) {

      DAT_003e7671 = 0;

      FUN_00082ce4();

      DAT_003e7672 = 0;

      FUN_00082e7c();

      FUN_00007f9c();

      if (DAT_003e74b9 == 1) {

        if (DAT_003e7778 != -1) {

          FUN_0028ee60();

        }

        if (DAT_003e7bc8 != -1) {

          FUN_0028ee74();

        }

        if (DAT_003e7c50 != -1) {

          FUN_0028ee88();

        }

        bVar8 = DAT_003e74b9;

        if (DAT_003e7c68 != -1) {

          FUN_0028ee9c();

          bVar8 = DAT_003e74b9;

        }

      }

      else {

        bVar8 = 0;

      }

      if (((bVar1 & bVar2 & 1) != 0) && ((bVar8 & DAT_003e74d8 & 1) == 0)) {

        FUN_0000b684();

      }

    }

  }

  _objc_release(uVar5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}






// ==== FUN_000828e0 @0x828e0 ====  [src: FUN_.c]


void FUN_000828e0(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

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

  undefined8 extraout_x1_13;

  float fVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  undefined1 auVar9 [16];

  

  if ((DAT_003e7670 & 1) != 0) {

    return;

  }

  DAT_003e7670 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar9._0_8_;

  fVar5 = (float)FUN_00295460(uVar1,auVar9._8_8_,&cf_mesMsgMergeHeightReduce);

  DAT_003e7b48 = (double)fVar5;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  DAT_003e7b30 = FUN_0001cc90(uVar2,&cf_mesMsgMergeMessageOffsetOther);

  DAT_003e7b28 = FUN_0001cc90(uVar2,&cf_mesMsgMergeMessageOffsetSelf);

  _objc_release(uVar2);

  DAT_003e7b38 = FUN_00297480(uVar1,extraout_x1,&cf_mesMsgMergeReverseAvatarDownOffset);

  if (DAT_003e7b38 < -99) {

    DAT_003e7b38 = -100;

  }

  if (99 < DAT_003e7b38) {

    DAT_003e7b38 = 100;

  }

  DAT_003e7b50 = _objc_getClass("ImageMessageViewModel");

  auVar9 = _objc_getClass("VideoMessageViewModel");

  DAT_003e7b58 = auVar9._0_8_;

  FUN_00299520(uVar1,auVar9._8_8_,&cf_mesMsgMergeGroupGapReduce);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 == 0) {

    DAT_003e6488 = 10.0;

    uVar2 = extraout_x1_00;

  }

  else {

    fVar5 = (float)FUN_00295460(uVar1,extraout_x1_00,&cf_mesMsgMergeGroupGapReduce);

    DAT_003e6488 = (double)fVar5;

    uVar2 = extraout_x1_01;

  }

  FUN_00299520(uVar1,uVar2,&cf_mesMsgMergePrivateGapReduce);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 == 0) {

    DAT_003e6490 = -10.0;

    uVar2 = extraout_x1_02;

  }

  else {

    fVar5 = (float)FUN_00295460(uVar1,extraout_x1_02,&cf_mesMsgMergePrivateGapReduce);

    DAT_003e6490 = (double)fVar5;

    uVar2 = extraout_x1_03;

  }

  DAT_003e74db = FUN_002924c0(uVar1,uVar2,&cf_mesMsgMergeSmoothScrollEnabled);

  DAT_003e74dc = FUN_002924c0(uVar1,extraout_x1_04,&cf_mesMsgMergeBubbleWrapRefer);

  DAT_003e74dd = FUN_002924c0(uVar1,extraout_x1_05,&cf_mesMsgMergeWrapReferDivider);

  uVar4 = FUN_00297480(uVar1,extraout_x1_06,&cf_mesMsgMergeWrapReferAlignment);

  DAT_003e7508 = 0;

  if (uVar4 < 4) {

    DAT_003e7508 = uVar4;

  }

  DAT_003e74e8 = FUN_0001ce48(uVar1,2);

  DAT_003e74f0 = FUN_0001ce48(uVar1,3);

  DAT_003e74f8 = FUN_0001ce48(uVar1,0);

  auVar9 = FUN_0001ce48(uVar1,1);

  DAT_003e7500 = auVar9._0_8_;

  auVar9 = FUN_00297480(uVar1,auVar9._8_8_,&cf_mesMsgMergeWrapReferDividerLength);

  DAT_003e7510 = auVar9._0_8_;

  auVar9 = FUN_00297480(uVar1,auVar9._8_8_,&cf_mesMsgMergeWrapReferDividerLeftExtendPt);

  lVar3 = auVar9._0_8_;

  auVar9 = FUN_00297480(uVar1,auVar9._8_8_,&cf_mesMsgMergeWrapReferDividerRightExtendPt);

  DAT_003e7520 = auVar9._0_8_;

  if (lVar3 < -0x13) {

    lVar3 = -0x14;

  }

  if (0x13 < lVar3) {

    lVar3 = 0x14;

  }

  if (DAT_003e7520 < -0x13) {

    DAT_003e7520 = -0x14;

  }

  if (0x13 < DAT_003e7520) {

    DAT_003e7520 = 0x14;

  }

  DAT_003e7518 = lVar3;

  dVar6 = (double)FUN_00294840(uVar1,auVar9._8_8_,&cf_mesMsgMergeWrapReferOffsetOtherX);

  dVar7 = (double)FUN_00294840(uVar1,extraout_x1_07,&cf_mesMsgMergeWrapReferOffsetSelfX);

  dVar8 = -10.0;

  if (-10.0 <= dVar6) {

    dVar8 = dVar6;

  }

  DAT_003e74c0 = 10.0;

  if (dVar8 <= 10.0) {

    DAT_003e74c0 = dVar8;

  }

  dVar8 = -10.0;

  if (-10.0 <= dVar7) {

    dVar8 = dVar7;

  }

  DAT_003e74c8 = 10.0;

  if (dVar8 <= 10.0) {

    DAT_003e74c8 = dVar8;

  }

  DAT_003e7bc0 = FUN_002924c0(uVar1,extraout_x1_08,&cf_mesMsgMergeReverse);

  DAT_003e7a2a = FUN_002924c0(uVar1,extraout_x1_09,&cf_mesMsgMergeHideGroupOtherAvatar);

  DAT_003e7a2b = FUN_002924c0(uVar1,extraout_x1_10,&cf_mesMsgMergeHidePrivateOtherAvatar);

  DAT_003e7a28 = FUN_002924c0(uVar1,extraout_x1_11,&cf_mesMsgMergeHideGroupSelfAvatar);

  DAT_003e7a29 = FUN_002924c0(uVar1,extraout_x1_12,&cf_mesMsgMergeHidePrivateSelfAvatar);

  DAT_003e7bc1 = FUN_002924c0(uVar1,extraout_x1_13,&cf_mesMsgMergeAvatarAboveBubble);

  _objc_release(uVar1);

  return;

}






// ==== FUN_00082ce4 @0x82ce4 ====  [src: FUN_.c]


void FUN_00082ce4(void)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  float fVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  if ((DAT_003e7671 & 1) != 0) {

    return;

  }

  DAT_003e7671 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  DAT_003e7951 = FUN_002924c0(uVar1,auVar5._8_8_,&cf_coverAvatarCornerEnabled);

  FUN_00299520(uVar1,extraout_x1,&cf_coverAvatarCornerRadius);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar5._8_8_;

  if (auVar5._0_8_ != 0) {

    FUN_00299520(uVar1,uVar4,&cf_coverAvatarCornerRadiusSelf);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(auVar5._0_8_);

    uVar4 = extraout_x1_00;

    if (lVar2 == 0) {

      uVar4 = FUN_00295460(uVar1,extraout_x1_00,&cf_coverAvatarCornerRadius);

      FUN_0029e500(uVar1,extraout_x1_01,&cf_coverAvatarCornerRadiusSelf);

      FUN_0029e500(uVar4,uVar1,extraout_x1_02,&cf_coverAvatarCornerRadiusOther);

      FUN_0029b4a0(uVar1,extraout_x1_03,&cf_coverAvatarCornerRadius);

      FUN_002a4a40(uVar1);

      uVar4 = extraout_x1_04;

    }

  }

  fVar3 = (float)FUN_00295460(uVar1,uVar4,&cf_coverAvatarCornerRadiusSelf);

  DAT_003e7970 = (double)fVar3;

  fVar3 = (float)FUN_00295460(uVar1,extraout_x1_05,&cf_coverAvatarCornerRadiusOther);

  DAT_003e7978 = (double)fVar3;

  fVar3 = (float)FUN_00295460(uVar1,extraout_x1_06,&cf_coverAvatarCornerRadiusGlobal);

  DAT_003e7980 = (double)fVar3;

  _objc_release(uVar1);

  return;

}






// ==== FUN_00082e7c @0x82e7c ====  [src: FUN_.c]


void FUN_00082e7c(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 uVar5;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  float fVar6;

  undefined1 auVar7 [16];

  

  if ((DAT_003e7672 & 1) != 0) {

    return;

  }

  DAT_003e7672 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar7._0_8_;

  FUN_00299520(uVar1,auVar7._8_8_,&cf_coversEnabled);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  if (auVar7._0_8_ == 0) {

    DAT_003e74b9 = 0;

  }

  else {

    DAT_003e74b9 = FUN_002924c0(uVar1,auVar7._8_8_,&cf_coversEnabled);

  }

  _objc_release(auVar7._0_8_);

  DAT_003e74d8 = FUN_002924c0(uVar1,extraout_x1,&cf_coverFunctionEnabled);

  DAT_003e74d9 = FUN_002924c0(uVar1,extraout_x1_00,&cf_coverDisableOnMainPage);

  DAT_003e74da = FUN_002924c0(uVar1,extraout_x1_01,&cf_coverDisableHomeCardContactMask);

  FUN_000904f4();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_002937a0();

  uVar5 = DAT_003e7550;

  DAT_003e7550 = uVar3;

  _objc_release(uVar5);

  _objc_release(uVar2);

  FUN_00299520(uVar1,extraout_x1_02,&cf_coverImageSize);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar7._8_8_;

  if (auVar7._0_8_ != 0) {

    FUN_00299520(uVar1,uVar5,&cf_coverImageSizeSelf);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(auVar7._0_8_);

    uVar5 = extraout_x1_03;

    if (lVar4 == 0) {

      fVar6 = (float)FUN_00295460(uVar1,extraout_x1_03,&cf_coverImageSize);

      if (fVar6 <= 0.0) {

        fVar6 = 100.0;

      }

      FUN_0029e500(fVar6,uVar1,extraout_x1_04,&cf_coverImageSizeSelf);

      FUN_0029e500(fVar6,uVar1,extraout_x1_05,&cf_coverImageSizeOther);

      FUN_002a4a40(uVar1);

      uVar5 = extraout_x1_06;

    }

  }

  fVar6 = (float)FUN_00295460(uVar1,uVar5,&cf_coverImageSizeSelf);

  DAT_003e63b0 = (double)fVar6;

  fVar6 = (float)FUN_00295460(uVar1,extraout_x1_07,&cf_coverImageSizeOther);

  DAT_003e63b8 = (double)fVar6;

  fVar6 = (float)FUN_00295460(uVar1,extraout_x1_08,&cf_coverImageSizeGlobal);

  DAT_003e79b0 = (double)fVar6;

  DAT_003e63c0 = DAT_003e79b0;

  if (fVar6 <= 0.0) {

    DAT_003e63c0 = 100.0;

  }

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  uVar5 = DAT_003e7558;

  DAT_003e7558 = uVar2;

  _objc_release(uVar5);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  uVar5 = DAT_003e7560;

  DAT_003e7560 = uVar2;

  _objc_release(uVar5);

  DAT_003e7753 = FUN_001331c4();

  _objc_release(uVar1);

  return;

}






// ==== FUN_00083134 @0x83134 ====  [src: FUN_.c]


void FUN_00083134(long param_1,long param_2)



{

  uint uVar1;

  uint uVar2;

  int iVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  

  _objc_retain();

  lVar8 = 0;

  if ((param_1 == 0) || (param_2 == 0)) goto LAB_000832f0;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6328);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = FUN_0008336c(param_1);

  if ((lVar4 == 0) || (uVar2 = FUN_002924e0(lVar4), ((uVar1 | uVar2) & 1) != 0)) {

    FUN_00083564(param_1,param_2);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if ((lVar5 == 0) || (iVar3 = FUN_002978a0(lVar5), iVar3 != 0)) {

      if (uVar1 == 0) {

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6328,PTR____kCFBooleanFalse_00388318,1);

      }

      else {

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6328,0,1);

        FUN_00083714(param_1);

        FUN_000839f4(param_1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_000856e8();

        lVar8 = _objc_retainAutoreleasedReturnValue();

        if (lVar8 == 0) {

          _objc_release(uVar6);

        }

        else {

          iVar3 = FUN_00298760(lVar8);

          _objc_release(lVar8);

          _objc_release(uVar6);

          if (iVar3 == 0x22) goto LAB_000832dc;

        }

        FUN_00083a80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                     *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                     *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                     *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18),param_1);

      }

LAB_000832dc:

      lVar8 = 0;

    }

    else {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e6330,0,1);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e6338,0,1);

      if ((lVar4 == 0) || (uVar7 = FUN_002924e0(lVar4), (uVar7 & 1) == 0)) {

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6328,PTR____kCFBooleanTrue_00388320,1);

      }

      _objc_retain(lVar5);

      lVar8 = lVar5;

    }

    _objc_release(lVar5);

  }

  else {

    lVar8 = 0;

  }

  _objc_release(lVar4);

LAB_000832f0:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar8);

  return;

}






// ==== FUN_0008336c @0x8336c ====  [src: FUN_.c]


undefined8 FUN_0008336c(undefined8 param_1)



{

  long lVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  FUN_000839f4(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    _objc_retain(lVar1);

    uVar2 = _objc_opt_respondsToSelector(lVar1,"canShowReplyMessage");

    if ((uVar2 & 1) != 0) {

      uVar2 = FUN_00292840(lVar1);

      _objc_release(lVar1);

      if ((uVar2 & 1) == 0) goto LAB_00083400;

LAB_000833d8:

      uVar4 = 1;

      goto LAB_000834cc;

    }

    _objc_release(lVar1);

LAB_00083400:

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar3 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar3);

    auVar5 = _objc_opt_isKindOfClass(lVar1,lVar3);

    if ((auVar5._0_8_ & 1) != 0) {

      FUN_002a6080(lVar1,auVar5._8_8_,&cf_parentModel);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _objc_retain(lVar3);

        uVar2 = _objc_opt_respondsToSelector(lVar3,"canShowReplyMessage");

        if ((uVar2 & 1) == 0) {

          _objc_release(lVar3);

        }

        else {

          uVar2 = FUN_00292840(lVar3);

          _objc_release(lVar3);

          if ((uVar2 & 1) != 0) {

            _objc_release(lVar3);

            goto LAB_000833d8;

          }

        }

      }

      _objc_release(lVar3);

    }

  }

  uVar4 = 0;

LAB_000834cc:

  _objc_release(lVar1);

  _objc_release(param_1);

  return uVar4;

}






// ==== FUN_00083564 @0x83564 ====  [src: FUN_.c]


void FUN_00083564(long param_1,undefined8 param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined8 local_120;

  long lStack_118;

  long *local_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if ((param_1 == 0) || (uVar1 = FUN_002978a0(param_1), (uVar1 & 1) != 0)) {

    lVar5 = 0;

  }

  else {

    uStack_f8 = 0;

    local_100 = 0;

    uStack_e8 = 0;

    uStack_f0 = 0;

    lStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    local_110 = (long *)0x0;

    FUN_002a4840(param_1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar8._0_8_;

    lVar3 = FUN_00293880(uVar2,auVar8._8_8_,&local_120,auStack_d8,0x10);

    if (lVar3 != 0) {

      lVar6 = *local_110;

      do {

        lVar7 = 0;

        do {

          if (*local_110 != lVar6) {

            _objc_enumerationMutation(uVar2);

          }

          lVar5 = *(long *)(lStack_118 + lVar7 * 8);

          uVar1 = _objc_opt_isKindOfClass(lVar5,param_2);

          if ((uVar1 & 1) == 0) {

            FUN_00083564(lVar5,param_2);

            auVar8 = _objc_retainAutoreleasedReturnValue();

            uVar4 = auVar8._8_8_;

            lVar5 = auVar8._0_8_;

            if (lVar5 != 0) goto LAB_0008368c;

          }

          else {

            auVar8 = FUN_002978a0(lVar5);

            uVar4 = auVar8._8_8_;

            if ((auVar8._0_8_ & 1) == 0) {

              _objc_retain(lVar5);

              goto LAB_0008368c;

            }

          }

          lVar7 = lVar7 + 1;

        } while (lVar3 != lVar7);

        lVar3 = FUN_00293880(uVar2,uVar4,&local_120,auStack_d8,0x10);

      } while (lVar3 != 0);

    }

    lVar5 = 0;

LAB_0008368c:

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_58) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(lVar5);

  return;

}






// ==== FUN_00083714 @0x83714 ====  [src: FUN_.c]


void FUN_00083714(undefined8 param_1)



{

  undefined *puVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  dispatch_time_t dVar5;

  undefined8 extraout_x1;

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined8 local_60;

  undefined1 auStack_58 [8];

  undefined4 local_50;

  undefined1 auStack_48 [8];

  

  _objc_retain();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

  if ((uVar3 & 1) != 0) {

    _objc_retain(param_1);

    FUN_002a6520(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6338);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uVar3 = FUN_002924e0();

      _objc_release(uVar2);

      if ((uVar3 & 1) == 0) {

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e6330);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        lVar4 = FUN_002974a0();

        _objc_release(uVar2);

        puVar1 = PTR_LOOP_003e6330;

        if (lVar4 < 4) {

          FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1,lVar4 + 1);

          uVar2 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_1,puVar1,uVar2,1);

          _objc_release(uVar2);

          _objc_setAssociatedObject(param_1,PTR_LOOP_003e6338,PTR____kCFBooleanTrue_00388320,1);

          FUN_000839f4(param_1);

          uVar2 = _objc_retainAutoreleasedReturnValue();

          FUN_000856e8();

          lVar4 = _objc_retainAutoreleasedReturnValue();

          if (lVar4 == 0) {

            local_50 = 0;

          }

          else {

            local_50 = FUN_00298740(lVar4);

          }

          _objc_release(lVar4);

          _objc_initWeak(auStack_48,param_1);

          dVar5 = _dispatch_time(0,35000000);

          local_80 = PTR___NSConcreteStackBlock_003886f0;

          local_78 = 0xc2000000;

          local_70 = FUN_000c3220;

          puStack_68 = &DAT_0038b138;

          _objc_copyWeak(auStack_58,auStack_48);

          local_60 = uVar2;

          _objc_retain(uVar2);

          _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_80);

          _objc_release(local_60);

          _objc_release(uVar2);

          _objc_destroyWeak(auStack_58);

          _objc_destroyWeak(auStack_48);

        }

      }

    }

    _objc_release(param_1);

  }

  _objc_release(param_1);

  return;

}






// ==== FUN_00083990 @0x83990 ====  [src: FUN_.c]


bool FUN_00083990(void)



{

  bool bVar1;

  int iVar2;

  long lVar3;

  

  FUN_000856e8();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    bVar1 = false;

  }

  else {

    iVar2 = FUN_00298760(lVar3);

    bVar1 = iVar2 == 0x22;

  }

  _objc_release(lVar3);

  return bVar1;

}






// ==== FUN_000839f4 @0x839f4 ====  [src: FUN_.c]


void FUN_000839f4(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  

  _objc_retain();

  if ((param_1 == 0) ||

     (uVar1 = _objc_opt_respondsToSelector(param_1,"viewModel"), (uVar1 & 1) == 0)) {

    uVar2 = 0;

  }

  else {

    FUN_002a6280(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}






// ==== FUN_00083a80 @0x83a80 ====  [src: FUN_.c]


void FUN_00083a80(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5

                 )



{

  bool bVar1;

  bool bVar2;

  int iVar3;

  long lVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  double dVar13;

  double local_a8;

  undefined1 uStack_99;

  double local_98;

  

  dVar11 = param_3;

  dVar12 = param_4;

  _objc_retain();

  if ((param_3 <= 0.0) || (param_4 <= 0.0)) {

    _objc_setAssociatedObject(param_5,PTR_LOOP_003e6340,0,1);

    FUN_000822c8(param_5);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e6400);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(uVar6,PTR_LOOP_003e6310,lVar4,1);

  }

  else {

    lVar4 = _objc_getClass("VoiceMessageCellView");

    if ((lVar4 == 0) || (uVar5 = _objc_opt_isKindOfClass(param_5), (uVar5 & 1) == 0)) {

      bVar2 = false;

      bVar1 = false;

    }

    else {

      uVar6 = _objc_opt_class(&_OBJC_CLASS___UIView);

      uVar5 = _objc_opt_isKindOfClass(param_5,uVar6);

      uVar6 = param_5;

      if ((uVar5 & 1) == 0) {

        uVar6 = 0;

      }

      _objc_retain(uVar6);

      FUN_002925a0(uVar6);

      local_98 = 0.0;

      dVar13 = dVar11;

      iVar3 = FUN_000b2180(uVar6,&local_98,&uStack_99);

      dVar9 = ABS(local_98) + 2.0;

      local_a8 = 0.0;

      if (iVar3 == 0) {

        dVar9 = 0.0;

      }

      if (dVar11 <= 0.5) {

        bVar1 = true;

      }

      else {

        if (-1.0 - dVar9 <= param_1) {

          dVar12 = param_4;

          dVar10 = (double)_CGRectGetMaxX(param_1,param_2,param_3,param_4);

          local_a8 = dVar11 + 1.0;

          dVar13 = local_a8 + dVar9;

          if (dVar10 <= dVar13) {

            bVar1 = param_3 <= local_a8;

            goto LAB_00083c20;

          }

        }

        bVar1 = false;

      }

LAB_00083c20:

      _objc_getAssociatedObject(param_5,PTR_LOOP_003e6408);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 == 0) {

        dVar11 = *(double *)PTR__CGRectZero_00388bf0;

        local_a8 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

        dVar13 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

        dVar12 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

      }

      else {

        dVar11 = (double)FUN_00290aa0(lVar4);

      }

      FUN_000839f4(param_5);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(uVar7,PTR_LOOP_003e6540);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_002924e0();

      _objc_release(uVar8);

      if ((uVar5 & 1) == 0) {

        iVar3 = FUN_000b16e0(param_5);

      }

      else {

        iVar3 = 1;

      }

      bVar2 = false;

      if ((((iVar3 != 0) && (0.5 < dVar13)) && (bVar2 = true, param_3 <= dVar13 + 12.0)) &&

         (dVar11 + -6.0 <= param_1)) {

        dVar9 = (double)_CGRectGetMaxX(param_1,param_2,param_3,param_4);

        dVar12 = (double)_CGRectGetMaxX(dVar11,local_a8,dVar13,dVar12);

        bVar2 = dVar12 + 6.0 < dVar9;

      }

      if (!(bool)(0.5 < dVar13 & (bVar1 ^ 1U | bVar2))) {

        dVar13 = param_3;

        dVar11 = param_1;

      }

      param_1 = dVar11;

      bVar1 = (bool)(bVar1 & (bVar2 ^ 1U));

      _objc_release(uVar7);

      _objc_release(lVar4);

      _objc_release(uVar6);

      bVar2 = true;

      param_3 = dVar13;

    }

    FUN_002a6100(param_1,param_2,param_3,param_4,&_OBJC_CLASS___NSValue);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_5,PTR_LOOP_003e6340,uVar6,1);

    if (!bVar2) goto LAB_00083e0c;

    FUN_000822c8(param_5);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 != 0) {

      _objc_setAssociatedObject(lVar4,PTR_LOOP_003e6310,uVar6,1);

    }

    if (bVar1) {

      _objc_setAssociatedObject(param_5,PTR_LOOP_003e6408,uVar6,1);

    }

  }

  _objc_release(lVar4);

LAB_00083e0c:

  _objc_release(uVar6);

  _objc_release(param_5);

  return;

}






// ==== FUN_00083ee4 @0x83ee4 ====  [src: FUN_.c]


bool FUN_00083ee4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 long param_5,undefined8 *param_6)



{

  long lVar1;

  bool bVar2;

  undefined8 uVar3;

  double dVar4;

  

  _objc_retain();

  if (param_5 == 0) {

    bVar2 = false;

  }

  else {

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e6340);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 == 0) {

      bVar2 = false;

    }

    else {

      uVar3 = FUN_00290aa0(lVar1);

      dVar4 = (double)NEON_fminnm(param_3,param_4);

      bVar2 = 0.0 < dVar4;

      if ((param_6 != (undefined8 *)0x0) && (0.0 < dVar4)) {

        *param_6 = uVar3;

        param_6[1] = param_2;

        bVar2 = true;

        param_6[2] = param_3;

        param_6[3] = param_4;

      }

    }

    _objc_release(lVar1);

  }

  _objc_release(param_5);

  return bVar2;

}






// ==== FUN_00084490 @0x84490 ====  [src: FUN_.c]


undefined8

FUN_00084490(undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,long param_5,

            undefined8 *param_6)



{

  uint uVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  

  _objc_retain();

  if (param_5 == 0) {

    uVar4 = 0;

    goto LAB_0008450c;

  }

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6400);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

LAB_000844f8:

    uVar4 = 0;

  }

  else {

    uVar5 = FUN_00290aa0(lVar2);

    uVar3 = _CGRectIsNull();

    if ((uVar3 & 1) != 0) goto LAB_000844f8;

    uVar1 = _CGRectIsInfinite(uVar5,param_2,param_3,param_4);

    uVar4 = 0;

    if (param_3 <= 0.0) {

      uVar1 = 1;

    }

    if (((uVar1 & 1) == 0) && (0.0 < param_4)) {

      if (param_6 == (undefined8 *)0x0) {

        uVar4 = 1;

      }

      else {

        *param_6 = uVar5;

        param_6[1] = param_2;

        uVar4 = 1;

        param_6[2] = param_3;

        param_6[3] = param_4;

      }

    }

  }

  _objc_release(lVar2);

LAB_0008450c:

  _objc_release(param_5);

  return uVar4;

}






// ==== FUN_0008459c @0x8459c ====  [src: FUN_.c]


ulong FUN_0008459c(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 local_60;

  undefined8 uStack_58;

  undefined8 local_50;

  undefined8 uStack_48;

  

  _objc_retain();

  if (param_1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

    if ((uVar3 & 1) != 0) {

      FUN_000843d8(param_1);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 == 0) {

        uVar3 = 0;

      }

      else {

        FUN_000822c8(lVar4);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 == 0) {

LAB_000846a4:

          uVar3 = 0;

        }

        else {

          FUN_002a4880(lVar5);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          uVar3 = 0;

          if (lVar6 != 0) {

            iVar1 = FUN_0008471c(lVar5);

            if (iVar1 == 0) goto LAB_000846a4;

            FUN_00295600(lVar5);

            uStack_58 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

            local_60 = *(undefined8 *)PTR__CGRectZero_00388bf0;

            uStack_48 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18);

            local_50 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10);

            uVar3 = FUN_00083fa4(lVar5,&local_60);

            if ((uVar3 & 1) != 0) {

              FUN_00292180(&_OBJC_CLASS___CATransaction);

              FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

              FUN_0029e5e0(local_60,uStack_58,local_50,uStack_48,lVar5);

              FUN_002930a0(&_OBJC_CLASS___CATransaction);

            }

          }

        }

        _objc_release(lVar5);

      }

      _objc_release(lVar4);

      goto LAB_000846b8;

    }

  }

  uVar3 = 0;

LAB_000846b8:

  _objc_release(param_1);

  return uVar3;

}






// ==== FUN_00084b98 @0x84b98 ====  [src: FUN_.c]


void FUN_00084b98(long param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  

  _objc_retain();

  _objc_retain(param_1);

  lVar4 = param_1;

  if (param_1 == 0) {

    lVar3 = 0;

  }

  else {

    do {

      uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

      uVar2 = _objc_opt_isKindOfClass(lVar4,uVar1);

      lVar3 = lVar4;

      if ((uVar2 & 1) != 0) break;

      FUN_002a4880(lVar4);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar4);

      lVar4 = lVar3;

    } while (lVar3 != 0);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar3);

  return;

}






// ==== FUN_00084e3c @0x84e3c ====  [src: FUN_.c]


undefined8 FUN_00084e3c(void)



{

  int iVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  if ((DAT_003e74dc & 1) == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_002924c0(auVar3._0_8_,auVar3._8_8_,&cf_mesMsgMergeBubbleWrapRefer);

    _objc_release(auVar3._0_8_);

    if (iVar1 == 0) {

      uVar2 = 0;

    }

    else {

      uVar2 = 1;

      DAT_003e74dc = 1;

    }

  }

  else {

    uVar2 = 1;

  }

  return uVar2;

}






// ==== FUN_00084ec8 @0x84ec8 ====  [src: FUN_.c]


void FUN_00084ec8(long param_1)



{

  _objc_retain();

  _objc_retain(param_1);

  if (param_1 != 0) {

    FUN_000a98e4(param_1);

    FUN_002254e4(param_1);

  }

  _objc_release(param_1);

  _objc_release(param_1);

  return;

}






// ==== FUN_00084f2c @0x84f2c ====  [src: FUN_.c]


void FUN_00084f2c(void)



{

  int iVar1;

  undefined1 auVar2 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924c0(auVar2._0_8_,auVar2._8_8_,&cf_coversEnabled);

  _objc_release(auVar2._0_8_);

  if ((iVar1 != 0) && (DAT_003e7bc8 != -1)) {

    FUN_0028eeb0();

  }

  return;

}






// ==== FUN_00084fa4 @0x84fa4 ====  [src: FUN_.c]


void FUN_00084fa4(void)



{

  int iVar1;

  undefined1 auVar2 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924c0(auVar2._0_8_,auVar2._8_8_,&cf_coversEnabled);

  _objc_release(auVar2._0_8_);

  if ((iVar1 != 0) && (DAT_003e7c50 != -1)) {

    FUN_0028eec4();

  }

  return;

}






// ==== FUN_0008501c @0x8501c ====  [src: FUN_.c]


byte FUN_0008501c(undefined8 param_1)



{

  byte bVar1;

  

  _objc_retain();

  FUN_000828e0();

  bVar1 = FUN_000bcd6c(param_1);

  bVar1 = bVar1 | DAT_003e7bc0;

  _objc_release(param_1);

  return bVar1 & 1;

}






// ==== FUN_00085074 @0x85074 ====  [src: FUN_.c]


byte FUN_00085074(undefined8 param_1)



{

  byte bVar1;

  

  _objc_retain();

  FUN_000828e0();

  bVar1 = FUN_000bcd6c(param_1);

  if (((bVar1 | DAT_003e7bc0) & 1) == 0) {

    bVar1 = FUN_000bce54(param_1);

    bVar1 = bVar1 | DAT_003e7bc1;

  }

  else {

    bVar1 = 0;

  }

  _objc_release(param_1);

  return bVar1 & 1;

}






// ==== FUN_000850ec @0x850ec ====  [src: FUN_.c]


void FUN_000850ec(void)



{

  int iVar1;

  undefined1 auVar2 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924c0(auVar2._0_8_,auVar2._8_8_,&cf_coversEnabled);

  _objc_release(auVar2._0_8_);

  if ((iVar1 != 0) && (DAT_003e7c68 != -1)) {

    FUN_0028eed8();

  }

  return;

}






// ==== FUN_00085164 @0x85164 ====  [src: FUN_.c]


undefined8 FUN_00085164(undefined8 param_1)



{

  undefined4 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  cfstringStruct *pcVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

  if ((uVar3 & 1) == 0) {

LAB_000851e8:

    uVar2 = 0;

    goto switchD_000851d8_caseD_49;

  }

  auVar6 = FUN_00297fa0(param_1);

  if (auVar6._0_8_ == 0) goto LAB_000851e8;

  uVar1 = FUN_00292be0(param_1,auVar6._8_8_,0);

  uVar2 = 0;

  pcVar5 = &cf_xzy;

  uVar4 = extraout_x1;

  switch(uVar1) {

  case 0x41:

    pcVar5 = &cf_AmpLify;

    break;

  case 0x42:

    pcVar5 = &cf_BottomNav;

    break;

  case 0x43:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_Cadis);

    if ((auVar6._0_8_ & 1) == 0) {

      auVar6 = FUN_00295f60(param_1,auVar6._8_8_,&cf_Contacts);

      if ((auVar6._0_8_ & 1) == 0) {

        auVar6 = FUN_00295f60(param_1,auVar6._8_8_,&cf_Corner);

        uVar4 = auVar6._8_8_;

        if ((auVar6._0_8_ & 1) == 0) {

          pcVar5 = &cf_CoverSelectedCard;

          break;

        }

      }

    }

    goto LAB_000853c4;

  case 0x44:

    pcVar5 = &cf_Discovery;

    break;

  case 0x45:

    uVar2 = FUN_00297820(param_1,extraout_x1,&cf_EnablePlugin);

    goto switchD_000851d8_caseD_49;

  case 0x46:

    pcVar5 = &cf_FriendsCircle;

    break;

  case 0x47:

    pcVar5 = &cf_GroupedCorner;

    break;

  case 0x48:

    pcVar5 = &cf_Honeycomb;

    break;

  default:

    goto switchD_000851d8_caseD_49;

  case 0x4d:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_MorePage);

    if ((auVar6._0_8_ & 1) == 0) {

      auVar6 = FUN_00295f60(param_1,auVar6._8_8_,&cf_MMAsset);

      uVar4 = auVar6._8_8_;

      if ((auVar6._0_8_ & 1) == 0) {

        pcVar5 = &cf_MainPageCorner;

        break;

      }

    }

    goto LAB_000853c4;

  case 0x53:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_SHTM);

    if ((auVar6._0_8_ & 1) == 0) {

      auVar6 = FUN_00295f60(param_1,auVar6._8_8_,&cf_SectionHeader);

      uVar4 = auVar6._8_8_;

      if ((auVar6._0_8_ & 1) == 0) {

        pcVar5 = &cf_SelectedTheme;

        break;

      }

    }

    goto LAB_000853c4;

  case 0x54:

    pcVar5 = &cf_ThemeColors;

    break;

  case 0x57:

    pcVar5 = &cf_WCSearchBar;

    break;

  case 0x58:

    pcVar5 = &cf_XZY;

    break;

  case 0x61:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_aab);

    uVar4 = auVar6._8_8_;

    if ((auVar6._0_8_ & 1) != 0) goto LAB_000853c4;

    pcVar5 = &cf_aiChat;

    break;

  case 0x62:

    pcVar5 = &cf_bubble;

    break;

  case 99:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_cover);

    if ((auVar6._0_8_ & 1) == 0) {

      auVar6 = FUN_00295f60(param_1,auVar6._8_8_,&cf_cadis);

      uVar4 = auVar6._8_8_;

      if ((auVar6._0_8_ & 1) == 0) {

        pcVar5 = &cf_clg;

        break;

      }

    }

LAB_000853c4:

    uVar2 = 1;

    goto switchD_000851d8_caseD_49;

  case 0x67:

    pcVar5 = &cf_grayTest;

    break;

  case 0x69:

    pcVar5 = &cf_imageDrop;

    break;

  case 0x6d:

    pcVar5 = &cf_mes;

    break;

  case 0x70:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_personalCover);

    uVar4 = auVar6._8_8_;

    if ((auVar6._0_8_ & 1) != 0) goto LAB_000853c4;

    pcVar5 = &cf_peerCover;

    break;

  case 0x73:

    pcVar5 = &cf_selected;

    break;

  case 0x74:

    pcVar5 = &cf_tts;

    break;

  case 0x78:

    break;

  }

  uVar2 = FUN_00295f60(param_1,uVar4,pcVar5);

switchD_000851d8_caseD_49:

  _objc_release(param_1);

  return uVar2;

}






// ==== FUN_000856e8 @0x856e8 ====  [src: FUN_.c]


void FUN_000856e8(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  cfstringStruct *pcVar5;

  undefined **ppuVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  if (param_1 != 0) {

    if (DAT_003e76d8 != -1) {

      FUN_0028eeec();

    }

    uVar1 = _objc_opt_isKindOfClass(param_1,DAT_003e76c8);

    if ((uVar1 & 1) != 0) {

      _objc_retain(param_1);

      lVar3 = param_1;

      goto LAB_000859f4;

    }

    uVar2 = _objc_opt_class(param_1);

    auVar7 = _CFDictionaryGetValue(DAT_003e76e0,uVar2);

    lVar3 = auVar7._0_8_;

    if (0 < lVar3) {

      if (lVar3 < 5) {

        if (2 < lVar3) {

          if (lVar3 == 3) {

            pcVar5 = &cf_messageWrap;

          }

          else {

            if (lVar3 != 4) goto LAB_0008584c;

            pcVar5 = &cf_m_msgWrap;

          }

          goto LAB_00085830;

        }

        if (lVar3 == 1) {

          ppuVar6 = &PTR_s_messageWrap_003de4e0;

        }

        else {

          if (lVar3 != 2) goto LAB_0008584c;

          ppuVar6 = &PTR_s_msgWrap_003db820;

        }

        _objc_msgSend(param_1,*ppuVar6);

        lVar3 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        if (lVar3 < 7) {

          if (lVar3 == 5) {

            pcVar5 = &cf_m_messageWrap;

          }

          else {

            if (lVar3 != 6) goto LAB_0008584c;

            pcVar5 = &cf_msgWrap;

          }

        }

        else if (lVar3 == 7) {

          pcVar5 = &cf_m_oMsgWrap;

        }

        else {

          if (lVar3 != 8) goto LAB_0008584c;

          pcVar5 = &cf_m_oMessageWrap;

        }

LAB_00085830:

        FUN_002a6080(param_1,auVar7._8_8_,pcVar5);

        lVar3 = _objc_retainAutoreleasedReturnValue();

      }

      if (lVar3 != 0) goto LAB_000859f4;

    }

LAB_0008584c:

    uVar1 = _objc_opt_respondsToSelector(param_1,"messageWrap");

    if ((uVar1 & 1) != 0) {

      _objc_msgSend(param_1,"messageWrap");

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _CFDictionarySetValue(DAT_003e76e0,uVar2,1);

        goto LAB_000859f4;

      }

    }

    uVar1 = _objc_opt_respondsToSelector(param_1,"msgWrap");

    if ((uVar1 & 1) != 0) {

      _objc_msgSend(param_1,"msgWrap");

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _CFDictionarySetValue(DAT_003e76e0,uVar2,2);

        goto LAB_000859f4;

      }

    }

    if (DAT_003e76f0 != -1) {

      FUN_0028ef00();

    }

    for (uVar1 = 0; auVar7 = FUN_00293860(DAT_003e76e8), uVar1 < auVar7._0_8_; uVar1 = uVar1 + 1) {

      FUN_00299500(DAT_003e76e8,auVar7._8_8_,uVar1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6080(param_1,auVar7._8_8_,auVar7._0_8_);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar7._0_8_);

      if (lVar3 != 0) {

        _CFDictionarySetValue(DAT_003e76e0,uVar2,(&DAT_00308158)[uVar1]);

        goto LAB_000859f4;

      }

    }

    auVar7 = _objc_opt_isKindOfClass(param_1,DAT_003e76d0);

    if ((auVar7._0_8_ & 1) != 0) {

      FUN_002a6080(param_1,auVar7._8_8_,&cf_parentModel);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 != 0) {

        FUN_000856e8(lVar4);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar4);

        goto LAB_000859f4;

      }

    }

  }

  lVar3 = 0;

LAB_000859f4:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar3);

  return;

}






// ==== FUN_00085afc @0x85afc ====  [src: FUN_.c]


void FUN_00085afc(undefined8 param_1)



{

  undefined8 extraout_x1;

  undefined1 auVar1 [16];

  cfstringStruct *local_58;

  cfstringStruct *pcStack_50;

  cfstringStruct *local_48;

  cfstringStruct *pcStack_40;

  cfstringStruct *local_38;

  cfstringStruct *pcStack_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  local_58 = &cf_xzySettingsRevision;

  pcStack_50 = &cf_ttsVoiceListCache;

  local_48 = &cf_xzy_fontLaunchGuardCount;

  pcStack_40 = &cf_CadisWeatherCache;

  local_38 = &cf_CadisWeatherError;

  pcStack_30 = &cf_CadisXZYSettingsRevision;

  FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1,&local_58,6);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4c0(param_1,auVar1._8_8_,auVar1._0_8_);

  _objc_release(auVar1._0_8_);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_28) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_00085cac @0x85cac ====  [src: FUN_.c]


void FUN_00085cac(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_ck_WSMn_,&cf_ck_Wy_hv_QeQzP_,1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar9 = _objc_alloc(&_OBJC_CLASS___UIActivityIndicatorView);

  auVar9 = FUN_00296920(auVar9._0_8_,auVar9._8_8_,100);

  uVar2 = auVar9._0_8_;

  FUN_002a21e0(uVar2,auVar9._8_8_,0);

  FUN_002a6220(uVar1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar9._0_8_,auVar9._8_8_,uVar2);

  _objc_release(auVar9._0_8_);

  FUN_00292b20(uVar2);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00292b20();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00293460(uVar3);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_78 = uVar6;

  FUN_00292540(uVar2);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00292540();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0xc032000000000000,uVar7,auVar9._8_8_,auVar9._0_8_);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  local_70 = auVar10._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar10._8_8_,&local_78,2);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar11._8_8_,auVar11._0_8_);

  _objc_release(auVar11._0_8_);

  _objc_release(auVar10._0_8_);

  _objc_release(auVar9._0_8_);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar3);

  FUN_002a4160(uVar2);

  _objc_release(uVar2);

  local_b0 = PTR___NSConcreteStackBlock_003886f0;

  local_a8 = 0xc2000000;

  local_a0 = FUN_00086038;

  puStack_98 = &DAT_0038a3c0;

  uVar2 = *(undefined8 *)(param_1 + 0x20);

  uVar3 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(uVar3);

  uVar4 = *(undefined8 *)(param_1 + 0x30);

  local_90 = uVar3;

  local_88 = uVar1;

  _objc_retain(uVar4);

  local_80 = uVar4;

  _objc_retain(uVar1);

  FUN_0029a500(uVar2,extraout_x1,uVar1,1,&local_b0);

  _objc_release(local_80);

  _objc_release(local_88);

  _objc_release(local_90);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_00086108 @0x86108 ====  [src: FUN_.c]


void FUN_00086108(long param_1)



{

  undefined *puVar1;

  undefined1 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 *puStack_b0;

  undefined1 local_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  undefined8 *puStack_78;

  undefined8 local_70;

  undefined8 *puStack_68;

  undefined8 local_60;

  code *local_58;

  code *pcStack_50;

  undefined8 local_48;

  

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0;

  local_60 = 0x3032000000;

  local_58 = FUN_00030178;

  pcStack_50 = FUN_00030188;

  local_48 = 0;

  local_a0 = PTR___NSConcreteStackBlock_003886f0;

  local_98 = 0xc2000000;

  local_90 = FUN_00086254;

  puStack_88 = &DAT_0038a580;

  uVar3 = *(undefined8 *)(param_1 + 0x20);

  puStack_68 = &local_70;

  _objc_retain(uVar3);

  local_80 = uVar3;

  puStack_78 = &local_70;

  uVar2 = FUN_000042e4(&local_a0);

  local_e0 = puVar1;

  local_d8 = 0xc2000000;

  local_d0 = FUN_000884bc;

  puStack_c8 = &DAT_0038a5e0;

  uVar4 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(uVar4);

  uVar3 = *(undefined8 *)(param_1 + 0x30);

  local_c0 = uVar4;

  _objc_retain(uVar3);

  local_b8 = uVar3;

  puStack_b0 = &local_70;

  local_a8 = uVar2;

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_e0);

  _objc_release(local_b8);

  _objc_release(local_c0);

  _objc_release(local_80);

  __Block_object_dispose(&local_70,8);

  _objc_release(local_48);

  return;

}






// ==== FUN_00086254 @0x86254 ====  [src: FUN_.c]


undefined8 FUN_00086254(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 local_38;

  

  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);

  local_38 = *(undefined8 *)(lVar4 + 0x28);

  uVar2 = FUN_000862b8(*(undefined8 *)(param_1 + 0x20),&local_38);

  uVar1 = local_38;

  _objc_retain(local_38);

  uVar3 = *(undefined8 *)(lVar4 + 0x28);

  *(undefined8 *)(lVar4 + 0x28) = uVar1;

  _objc_release(uVar3);

  return uVar2;

}






// ==== FUN_000862b8 @0x862b8 ====  [src: FUN__part2.c]


uint FUN_000862b8(undefined8 param_1,long *param_2)



{

  undefined *puVar1;

  byte bVar2;

  byte bVar3;

  int iVar4;

  int iVar5;

  uint uVar6;

  uint uVar7;

  undefined8 uVar8;

  ulong uVar9;

  long lVar10;

  long lVar11;

  undefined8 uVar12;

  long lVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  undefined8 uVar24;

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

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  undefined8 extraout_x1_19;

  undefined8 extraout_x1_20;

  undefined8 extraout_x1_21;

  undefined8 extraout_x1_22;

  undefined8 extraout_x1_23;

  undefined8 extraout_x1_24;

  undefined8 extraout_x1_25;

  undefined8 extraout_x1_26;

  undefined8 extraout_x1_27;

  undefined8 extraout_x1_28;

  undefined8 extraout_x1_29;

  undefined8 extraout_x1_30;

  undefined8 extraout_x1_31;

  undefined8 extraout_x1_32;

  undefined8 extraout_x1_33;

  undefined8 extraout_x1_34;

  undefined8 extraout_x1_35;

  undefined8 extraout_x1_36;

  undefined8 extraout_x1_37;

  undefined8 extraout_x1_38;

  undefined8 extraout_x1_39;

  undefined8 extraout_x1_40;

  undefined8 extraout_x1_41;

  undefined8 extraout_x1_42;

  undefined8 extraout_x1_43;

  undefined8 extraout_x1_44;

  undefined8 extraout_x1_45;

  undefined8 extraout_x1_46;

  undefined8 extraout_x1_47;

  undefined8 extraout_x1_48;

  undefined8 extraout_x1_49;

  undefined8 uVar25;

  long lVar26;

  cfstringStruct *pcVar27;

  long lVar28;

  undefined1 auVar29 [16];

  undefined1 auVar30 [16];

  undefined1 auVar31 [16];

  undefined8 local_970;

  long local_940;

  undefined8 local_930;

  undefined8 local_910;

  undefined8 local_900;

  long lStack_8f8;

  long *local_8f0;

  undefined8 uStack_8e8;

  undefined8 local_8e0;

  undefined8 uStack_8d8;

  undefined8 uStack_8d0;

  undefined8 uStack_8c8;

  undefined8 local_8c0;

  long lStack_8b8;

  long *local_8b0;

  undefined8 uStack_8a8;

  undefined8 local_8a0;

  undefined8 uStack_898;

  undefined8 uStack_890;

  undefined8 uStack_888;

  undefined8 local_880;

  long lStack_878;

  long *local_870;

  undefined8 uStack_868;

  undefined8 local_860;

  undefined8 uStack_858;

  undefined8 uStack_850;

  undefined8 uStack_848;

  undefined8 local_840;

  long lStack_838;

  long *local_830;

  undefined8 uStack_828;

  undefined8 local_820;

  undefined8 uStack_818;

  undefined8 uStack_810;

  undefined8 uStack_808;

  undefined8 local_800;

  long lStack_7f8;

  long *local_7f0;

  undefined8 uStack_7e8;

  undefined8 local_7e0;

  undefined8 uStack_7d8;

  undefined8 uStack_7d0;

  undefined8 uStack_7c8;

  undefined8 local_7c0;

  long lStack_7b8;

  long *local_7b0;

  undefined8 uStack_7a8;

  undefined8 local_7a0;

  undefined8 uStack_798;

  undefined8 uStack_790;

  undefined8 uStack_788;

  undefined8 local_778;

  undefined8 local_770;

  undefined8 local_768;

  undefined8 local_760;

  long lStack_758;

  long *local_750;

  undefined8 uStack_748;

  undefined8 local_740;

  undefined8 uStack_738;

  undefined8 uStack_730;

  undefined8 uStack_728;

  undefined8 local_720;

  long lStack_718;

  long *local_710;

  undefined8 uStack_708;

  undefined8 local_700;

  undefined8 uStack_6f8;

  undefined8 uStack_6f0;

  undefined8 uStack_6e8;

  undefined8 local_6e0;

  long lStack_6d8;

  long *local_6d0;

  undefined8 uStack_6c8;

  undefined8 local_6c0;

  undefined8 uStack_6b8;

  undefined8 uStack_6b0;

  undefined8 uStack_6a8;

  byte local_691;

  undefined8 local_690;

  long lStack_688;

  long *local_680;

  undefined8 uStack_678;

  undefined8 local_670;

  undefined8 uStack_668;

  undefined8 uStack_660;

  undefined8 uStack_658;

  undefined8 local_650;

  long lStack_648;

  long *local_640;

  undefined8 uStack_638;

  undefined8 local_630;

  undefined8 uStack_628;

  undefined8 uStack_620;

  undefined8 uStack_618;

  undefined1 auStack_600 [128];

  undefined1 auStack_580 [128];

  undefined1 auStack_500 [128];

  undefined1 auStack_480 [128];

  undefined8 local_400;

  cfstringStruct *local_3f8;

  undefined1 auStack_3f0 [128];

  undefined1 auStack_370 [128];

  undefined1 auStack_2f0 [128];

  undefined1 auStack_270 [128];

  undefined8 local_1f0 [16];

  cfstringStruct *local_170;

  long lStack_168;

  long *local_160;

  undefined8 uStack_158;

  undefined8 local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  cfstringStruct *local_f0 [16];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_1);

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar29 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(param_1,auVar29._8_8_,auVar29._0_8_);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar29._0_8_);

  uVar9 = FUN_00297fa0(uVar8);

  lVar10 = FUN_00297fa0(&cf_xos_);

  auVar29 = FUN_00297fa0(&cf__config);

  uVar12 = auVar29._8_8_;

  if ((uVar9 < (ulong)(auVar29._0_8_ + lVar10)) ||

     (iVar4 = FUN_00295f60(uVar8,uVar12,&cf_xos_), uVar12 = extraout_x1, iVar4 == 0)) {

LAB_000864a4:

    local_170 = *(cfstringStruct **)PTR__NSLocalizedDescriptionKey_00388218;

    local_f0[0] = &cf_jR4_g_NlggHev;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar12,local_f0,&local_170,1);

    auVar29 = _objc_retainAutoreleasedReturnValue();

    uVar12 = auVar29._0_8_;

    FUN_00294de0(&_OBJC_CLASS___NSError,auVar29._8_8_,&cf_XZYSettings,4,uVar12);

    _objc_retainAutoreleasedReturnValue();

    lVar10 = _objc_autorelease();

    local_940 = 0;

    *param_2 = lVar10;

  }

  else {

    auVar29 = FUN_00295fa0(uVar8,extraout_x1,&cf__config);

    uVar12 = auVar29._8_8_;

    if ((auVar29._0_8_ & 1) == 0) goto LAB_000864a4;

    lVar10 = FUN_00297fa0(&cf_xos_);

    lVar11 = FUN_00297fa0(uVar8);

    auVar29 = FUN_00297fa0(&cf__config);

    FUN_002a4800(uVar8,auVar29._8_8_,lVar10,lVar11 - (lVar10 + auVar29._0_8_));

    uVar12 = _objc_retainAutoreleasedReturnValue();

    auVar29 = _objc_alloc(&_OBJC_CLASS___NSData);

    auVar29 = FUN_00296980(auVar29._0_8_,auVar29._8_8_,uVar12,0);

    lVar10 = auVar29._0_8_;

    if (lVar10 == 0) {

      local_170 = *(cfstringStruct **)PTR__NSLocalizedDescriptionKey_00388218;

      local_f0[0] = &cf_jR4_g_Nv;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar29._8_8_,local_f0,&local_170,1);

      auVar29 = _objc_retainAutoreleasedReturnValue();

      pcVar27 = auVar29._0_8_;

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar29._8_8_,&cf_XZYSettings,5,pcVar27);

      _objc_retainAutoreleasedReturnValue();

      lVar11 = _objc_autorelease();

      local_940 = 0;

      *param_2 = lVar11;

    }

    else {

      local_f0[0] = (cfstringStruct *)0x0;

      FUN_0029aa00(&_OBJC_CLASS___NSPropertyListSerialization,auVar29._8_8_,lVar10,0,0,local_f0);

      lVar13 = _objc_retainAutoreleasedReturnValue();

      pcVar27 = local_f0[0];

      _objc_retain(local_f0[0]);

      uVar14 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      uVar9 = _objc_opt_isKindOfClass(lVar13,uVar14);

      lVar11 = lVar13;

      if ((uVar9 & 1) == 0) {

        lVar11 = 0;

      }

      _objc_retain(lVar11);

      FUN_00299540(lVar11,extraout_x1_00,&cf_settings);

      auVar29 = _objc_retainAutoreleasedReturnValue();

      uVar14 = auVar29._8_8_;

      if (lVar11 == 0) {

LAB_00087aac:

        if (pcVar27 == (cfstringStruct *)0x0) {

          local_1f0[0] = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

          local_170 = &cf_jR4_g_Nv;

          FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar14,&local_170,local_1f0,1);

          auVar30 = _objc_retainAutoreleasedReturnValue();

          FUN_00294de0(&_OBJC_CLASS___NSError,auVar30._8_8_,&cf_XZYSettings,6,auVar30._0_8_);

          _objc_retainAutoreleasedReturnValue();

          lVar28 = _objc_retainAutorelease();

          *param_2 = lVar28;

          _objc_release();

          _objc_release(auVar30._0_8_);

          local_940 = 0;

        }

        else {

          _objc_retainAutorelease(pcVar27);

          local_940 = 0;

          *param_2 = (long)pcVar27;

        }

      }

      else {

        uVar14 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

        auVar30 = _objc_opt_isKindOfClass(auVar29._0_8_,uVar14);

        uVar14 = auVar30._8_8_;

        if ((auVar30._0_8_ & 1) == 0) goto LAB_00087aac;

        _objc_retain(lVar13);

        local_940 = lVar13;

      }

      _objc_release(auVar29._0_8_);

      _objc_release(lVar11);

      _objc_release(lVar13);

    }

    _objc_release(pcVar27);

    _objc_release(lVar10);

  }

  _objc_release(uVar12);

  _objc_release(uVar8);

  _objc_release(param_1);

  FUN_00299540(local_940,extraout_x1_01,&cf_settings);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  if (lVar10 == 0) {

    uVar6 = 0;

    goto LAB_00087a58;

  }

  auVar29 = FUN_00299020();

  uVar15 = auVar29._0_8_;

  FUN_0029b4a0(uVar15,auVar29._8_8_,&cf_xzySettingsRevision);

  FUN_00299540(uVar15,extraout_x1_02,&cf_aabCustomDashStyles);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  local_768 = 0;

  FUN_00088be0(uVar12,&local_768);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  uVar14 = local_768;

  _objc_retain();

  FUN_002a00a0(uVar15,extraout_x1_03,uVar8,&cf_aabCustomDashStyles);

  _objc_release(uVar8);

  _objc_release(uVar12);

  FUN_00088df0(uVar15,&PTR__OBJC_CLASS___NSConstantArray_003bdc78,uVar14,10,99);

  FUN_00299540(uVar15,extraout_x1_04,&cf_aabCustomGuideLineStyles);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  local_770 = 0;

  FUN_00088be0(uVar12,&local_770);

  uVar16 = _objc_retainAutoreleasedReturnValue();

  uVar8 = local_770;

  _objc_retain();

  FUN_002a00a0(uVar15,extraout_x1_05,uVar16,&cf_aabCustomGuideLineStyles);

  _objc_release(uVar16);

  _objc_release(uVar12);

  FUN_00088df0(uVar15,&PTR__OBJC_CLASS___NSConstantArray_003bdc90,uVar8,10,99);

  FUN_00299540(uVar15,extraout_x1_06,&cf_xzyHomeDockCustomStyles);

  uVar16 = _objc_retainAutoreleasedReturnValue();

  local_778 = 0;

  FUN_00088be0(uVar16,&local_778);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  uVar12 = local_778;

  _objc_retain();

  FUN_002a00a0(uVar15,extraout_x1_07,uVar17,&cf_xzyHomeDockCustomStyles);

  _objc_release(uVar17);

  _objc_release(uVar16);

  FUN_00088df0(uVar15,&PTR__OBJC_CLASS___NSConstantArray_003bdca8,uVar12,100,0xffffffffffffffff);

  _objc_retain(uVar15);

  FUN_00299540(uVar15,extraout_x1_08,&cf_CoverSelectedCardPath);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_00089348();

  uVar16 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar17);

  auVar29 = FUN_00297fa0(uVar16);

  if (auVar29._0_8_ == 0) {

    FUN_00299540(uVar15,auVar29._8_8_,&cf_CoverSelectedCard);

    uVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00089348();

    uVar18 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar16);

    _objc_release(uVar17);

    uVar16 = uVar18;

  }

  auVar29 = FUN_00297fa0();

  if (auVar29._0_8_ == 0) {

    FUN_0029b4c0(uVar15,auVar29._8_8_,&PTR__OBJC_CLASS___NSConstantArray_003bdcc0);

    uVar17 = extraout_x1_10;

  }

  else {

    FUN_002a00a0(uVar15,auVar29._8_8_,uVar16,&cf_CoverSelectedCardPath);

    FUN_00297da0(uVar16);

    auVar29 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar15,auVar29._8_8_,auVar29._0_8_,&cf_CoverSelectedCard);

    _objc_release(auVar29._0_8_);

    uVar17 = extraout_x1_09;

  }

  uStack_628 = 0;

  local_630 = 0;

  uStack_618 = 0;

  uStack_620 = 0;

  lStack_648 = 0;

  local_650 = 0;

  uStack_638 = 0;

  local_640 = (long *)0x0;

  auVar29 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdcf0,uVar17,&local_650,local_f0,0x10

                        );

  uVar17 = auVar29._8_8_;

  lVar11 = auVar29._0_8_;

  if (lVar11 != 0) {

    lVar13 = *local_640;

    do {

      lVar28 = 0;

      do {

        if (*local_640 != lVar13) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdcf0);

        }

        FUN_00089454(uVar15,*(undefined8 *)(lStack_648 + lVar28 * 8),

                     &PTR__OBJC_CLASS___NSConstantArray_003bdcd8);

        lVar28 = lVar28 + 1;

      } while (lVar11 != lVar28);

      auVar29 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdcf0,extraout_x1_11,&local_650,

                             local_f0,0x10);

      uVar17 = auVar29._8_8_;

      lVar11 = auVar29._0_8_;

    } while (lVar11 != 0);

  }

  uStack_668 = 0;

  local_670 = 0;

  uStack_658 = 0;

  uStack_660 = 0;

  lStack_688 = 0;

  local_690 = 0;

  uStack_678 = 0;

  local_680 = (long *)0x0;

  lVar11 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdd08,uVar17,&local_690,&local_170,

                        0x10);

  if (lVar11 != 0) {

    lVar13 = *local_680;

    do {

      lVar28 = 0;

      do {

        if (*local_680 != lVar13) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdd08);

        }

        FUN_00089454(uVar15,*(undefined8 *)(lStack_688 + lVar28 * 8),

                     &PTR__OBJC_CLASS___NSConstantArray_003bdd20);

        lVar28 = lVar28 + 1;

      } while (lVar11 != lVar28);

      lVar11 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdd08,extraout_x1_12,&local_690,

                            &local_170,0x10);

    } while (lVar11 != 0);

  }

  uVar9 = FUN_00089454(uVar15,&cf_SHTM_SELECTED_IMAGE_NAME,

                       &PTR__OBJC_CLASS___NSConstantArray_003bdd38);

  auVar29 = FUN_00089454(uVar15,&cf_SHTM_SELECTED_VIDEO_NAME,

                         &PTR__OBJC_CLASS___NSConstantArray_003bdd50);

  uVar17 = auVar29._8_8_;

  if ((uVar9 & 1) == 0) {

    FUN_0029b4a0(uVar15,uVar17,&cf_SHTM_IMAGE_SOURCE);

    uVar17 = extraout_x1_13;

  }

  if ((auVar29._0_8_ & 1) == 0) {

    FUN_0029b4a0(uVar15,uVar17,&cf_SHTM_VIDEO_SOURCE);

    uVar17 = extraout_x1_14;

  }

  FUN_00299540(uVar15,uVar17,&cf_mesMsgMergeSelectedBubble);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  uVar18 = _objc_opt_class(&_OBJC_CLASS___NSString);

  auVar29 = _objc_opt_isKindOfClass(uVar17,uVar18);

  if ((auVar29._0_8_ & 1) == 0) {

    local_970 = 0;

  }

  else {

    FUN_00299540(uVar15,auVar29._8_8_,&cf_mesMsgMergeSelectedBubble);

    uVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00297da0();

    local_970 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar18);

  }

  _objc_release(uVar17);

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar18 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar17);

  auVar29 = FUN_00297fa0(local_970);

  uVar17 = 0;

  if (auVar29._0_8_ != 0) {

    FUN_002a4460(uVar18,auVar29._8_8_,&cf_CoverRes_Bubbles);

    auVar29 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(auVar29._0_8_,auVar29._8_8_,local_970);

    uVar19 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45a0();

    uVar17 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar19);

    _objc_release(auVar29._0_8_);

  }

  local_691 = 0;

  auVar29 = FUN_00297fa0();

  uVar19 = auVar29._8_8_;

  if (auVar29._0_8_ == 0) {

LAB_00086b98:

    FUN_0029b4c0(uVar15,uVar19,&PTR__OBJC_CLASS___NSConstantArray_003bdd68);

  }

  else {

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar29 = _objc_retainAutoreleasedReturnValue();

    uVar19 = auVar29._0_8_;

    uVar9 = FUN_00295180(uVar19,auVar29._8_8_,uVar17,&local_691);

    bVar2 = local_691;

    if ((uVar9 & 1) == 0) {

      _objc_release(uVar19);

      uVar19 = extraout_x1_17;

      goto LAB_00086b98;

    }

    _objc_release(uVar19);

    uVar19 = extraout_x1_15;

    if ((bVar2 & 1) == 0) goto LAB_00086b98;

    FUN_002a00a0(uVar15,extraout_x1_15,local_970,&cf_mesMsgMergeSelectedBubble);

    FUN_00299540(uVar15,extraout_x1_16,&cf_mesMsgMergeSelectedSubPackage);

    uVar19 = _objc_retainAutoreleasedReturnValue();

    uVar20 = _objc_opt_class(&_OBJC_CLASS___NSString);

    auVar29 = _objc_opt_isKindOfClass(uVar19,uVar20);

    if ((auVar29._0_8_ & 1) == 0) {

      uVar20 = 0;

    }

    else {

      FUN_00299540(uVar15,auVar29._8_8_,&cf_mesMsgMergeSelectedSubPackage);

      uVar21 = _objc_retainAutoreleasedReturnValue();

      FUN_00297da0();

      uVar20 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar21);

    }

    _objc_release(uVar19);

    auVar29 = FUN_00297fa0(uVar20);

    if (auVar29._0_8_ != 0) {

      FUN_002a4460(uVar17,auVar29._8_8_,&cf_sub);

      auVar29 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4460(auVar29._0_8_,auVar29._8_8_,uVar20);

      uVar19 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45a0();

      uVar21 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar19);

      _objc_release(auVar29._0_8_);

      local_691 = 0;

      FUN_00294240(&_OBJC_CLASS___NSFileManager);

      auVar29 = _objc_retainAutoreleasedReturnValue();

      bVar3 = FUN_00295180(auVar29._0_8_,auVar29._8_8_,uVar21,&local_691);

      bVar2 = local_691;

      _objc_release(auVar29._0_8_);

      if ((bVar3 & bVar2 & 1) == 0) {

        FUN_0029b4a0(uVar15,extraout_x1_49,&cf_mesMsgMergeSelectedSubPackage);

      }

      else {

        FUN_002a00a0(uVar15,extraout_x1_49,uVar20,&cf_mesMsgMergeSelectedSubPackage);

      }

      _objc_release(uVar21);

    }

    _objc_release(uVar20);

  }

  auVar29 = FUN_00089454(uVar15,&cf_xzy_customFontFile,&PTR__OBJC_CLASS___NSConstantArray_003bdd80);

  uVar19 = auVar29._8_8_;

  if ((auVar29._0_8_ & 1) == 0) {

    FUN_0029b4a0(uVar15,uVar19,&cf_xzy_customFontEnabled);

    uVar19 = extraout_x1_18;

  }

  uStack_6b8 = 0;

  local_6c0 = 0;

  uStack_6a8 = 0;

  uStack_6b0 = 0;

  lStack_6d8 = 0;

  local_6e0 = 0;

  uStack_6c8 = 0;

  local_6d0 = (long *)0x0;

  auVar29 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdd98,uVar19,&local_6e0,local_1f0,

                         0x10);

  if (auVar29._0_8_ != 0) {

    lVar11 = *local_6d0;

    do {

      uVar19 = auVar29._8_8_;

      lVar13 = 0;

      do {

        if (*local_6d0 != lVar11) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdd98);

          uVar19 = extraout_x1_19;

        }

        uVar21 = *(undefined8 *)(lStack_6d8 + lVar13 * 8);

        FUN_00299540(uVar15,uVar19,uVar21);

        uVar19 = _objc_retainAutoreleasedReturnValue();

        FUN_000895b0(uVar19,&PTR__OBJC_CLASS___NSConstantArray_003bddb0,0);

        uVar20 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar19);

        auVar30 = FUN_00297fa0(uVar20);

        if (auVar30._0_8_ == 0) {

          FUN_0029b4a0(uVar15,auVar30._8_8_,uVar21);

        }

        else {

          FUN_002a00a0(uVar15,auVar30._8_8_,uVar20,uVar21);

        }

        _objc_release(uVar20);

        lVar13 = lVar13 + 1;

        uVar19 = extraout_x1_20;

      } while (auVar29._0_8_ != lVar13);

      auVar29 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdd98,extraout_x1_20,&local_6e0,

                             local_1f0,0x10);

    } while (auVar29._0_8_ != 0);

  }

  FUN_000898ec(uVar15,&cf_xzyChatListGroupingGroupIconPaths);

  FUN_000898ec(uVar15,&cf_xzyChatListGroupingSideRailIconPaths);

  uStack_6f8 = 0;

  local_700 = 0;

  uStack_6e8 = 0;

  uStack_6f0 = 0;

  lStack_718 = 0;

  local_720 = 0;

  uStack_708 = 0;

  local_710 = (long *)0x0;

  FUN_00291600(uVar15);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  uVar20 = FUN_002937a0();

  _objc_release(uVar19);

  auVar29 = FUN_00293880(uVar20,extraout_x1_21,&local_720,auStack_270,0x10);

  if (auVar29._0_8_ != 0) {

    lVar11 = *local_710;

    do {

      uVar19 = auVar29._8_8_;

      lVar13 = 0;

      do {

        if (*local_710 != lVar11) {

          _objc_enumerationMutation(uVar20);

          uVar19 = extraout_x1_22;

        }

        uVar21 = *(undefined8 *)(lStack_718 + lVar13 * 8);

        FUN_00299540(uVar15,uVar19,uVar21);

        auVar30 = _objc_retainAutoreleasedReturnValue();

        uVar19 = auVar30._0_8_;

        iVar4 = FUN_00295f60(uVar21,auVar30._8_8_,&cf_xzyBubblePet_);

        if (iVar4 != 0) {

          uVar22 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

          uVar9 = _objc_opt_isKindOfClass(uVar19,uVar22);

          if ((uVar9 & 1) != 0) {

            auVar30 = FUN_00299020(uVar19);

            uVar22 = auVar30._0_8_;

            uStack_738 = 0;

            local_740 = 0;

            uStack_728 = 0;

            uStack_730 = 0;

            lStack_758 = 0;

            local_760 = 0;

            uStack_748 = 0;

            local_750 = (long *)0x0;

            auVar30 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bddc8,auVar30._8_8_,

                                   &local_760,auStack_2f0,0x10);

            if (auVar30._0_8_ != 0) {

              lVar28 = *local_750;

              do {

                uVar23 = auVar30._8_8_;

                lVar26 = 0;

                do {

                  if (*local_750 != lVar28) {

                    _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bddc8);

                    uVar23 = extraout_x1_23;

                  }

                  uVar25 = *(undefined8 *)(lStack_758 + lVar26 * 8);

                  FUN_00299540(uVar22,uVar23,uVar25);

                  uVar23 = _objc_retainAutoreleasedReturnValue();

                  FUN_000895b0(uVar23,&PTR__OBJC_CLASS___NSConstantArray_003bdde0,0);

                  uVar24 = _objc_retainAutoreleasedReturnValue();

                  _objc_release(uVar23);

                  auVar31 = FUN_00297fa0(uVar24);

                  if (auVar31._0_8_ == 0) {

                    FUN_0029b4a0(uVar22,auVar31._8_8_,uVar25);

                  }

                  else {

                    FUN_00297da0(uVar24);

                    auVar31 = _objc_retainAutoreleasedReturnValue();

                    FUN_002a00a0(uVar22,auVar31._8_8_,auVar31._0_8_,uVar25);

                    _objc_release(auVar31._0_8_);

                  }

                  _objc_release(uVar24);

                  lVar26 = lVar26 + 1;

                  uVar23 = extraout_x1_24;

                } while (auVar30._0_8_ != lVar26);

                auVar30 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bddc8,extraout_x1_24,

                                       &local_760,auStack_2f0,0x10);

              } while (auVar30._0_8_ != 0);

            }

            auVar30 = FUN_002937a0(uVar22);

            FUN_002a00a0(uVar15,auVar30._8_8_,auVar30._0_8_,uVar21);

            _objc_release(auVar30._0_8_);

            _objc_release(uVar22);

          }

        }

        _objc_release(uVar19);

        lVar13 = lVar13 + 1;

        uVar19 = extraout_x1_25;

      } while (lVar13 != auVar29._0_8_);

      auVar29 = FUN_00293880(uVar20,extraout_x1_25,&local_720,auStack_270,0x10);

    } while (auVar29._0_8_ != 0);

  }

  _objc_release(uVar20);

  _objc_release(uVar17);

  _objc_release(uVar18);

  _objc_release(local_970);

  _objc_release(uVar16);

  _objc_release(uVar15);

  _objc_release(uVar12);

  _objc_release(uVar8);

  _objc_release(uVar14);

  FUN_00299540(local_940,extraout_x1_26,&cf_suites);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  uVar8 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  auVar29 = _objc_opt_isKindOfClass(uVar12,uVar8);

  if ((auVar29._0_8_ & 1) == 0) {

    local_930 = 0;

  }

  else {

    FUN_00299540(local_940,auVar29._8_8_,&cf_suites);

    local_930 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    _objc_release(local_930);

  }

  _objc_release(uVar12);

  FUN_00299540(local_930,extraout_x1_27,&cf_com_shtm_cadis);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  _objc_retain();

  uVar8 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  uVar9 = _objc_opt_isKindOfClass(uVar12,uVar8);

  if ((uVar9 & 1) == 0) {

    uVar8 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  }

  else {

    uVar8 = FUN_00299020(uVar12);

  }

  _objc_retain();

  lStack_168 = 0;

  local_170 = (cfstringStruct *)0x0;

  uStack_158 = 0;

  local_160 = (long *)0x0;

  uStack_148 = 0;

  local_150 = 0;

  uStack_138 = 0;

  local_140 = 0;

  lVar11 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bde28,extraout_x1_28,&local_170,

                        local_f0,0x10);

  if (lVar11 != 0) {

    lVar13 = *local_160;

    do {

      lVar28 = 0;

      do {

        if (*local_160 != lVar13) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bde28);

        }

        FUN_00089454(uVar8,*(undefined8 *)(lStack_168 + lVar28 * 8),

                     &PTR__OBJC_CLASS___NSConstantArray_003bde40);

        lVar28 = lVar28 + 1;

      } while (lVar11 != lVar28);

      lVar11 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bde28,extraout_x1_29,&local_170,

                            local_f0,0x10);

    } while (lVar11 != 0);

  }

  _objc_release(uVar8);

  FUN_00299540(uVar8,extraout_x1_30,&cf_CadisCustomCalendarStyles);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  _objc_retain();

  uVar16 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

  uVar17 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  uVar18 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar9 = _objc_opt_isKindOfClass(uVar14,uVar18);

  if ((uVar9 & 1) != 0) {

    _objc_retain(uVar14);

    lVar11 = 0;

    while( true ) {

      auVar29 = FUN_00293860(uVar14);

      if (auVar29._0_8_ <= lVar11) break;

      FUN_00299500(uVar14,auVar29._8_8_,lVar11);

      uVar18 = _objc_retainAutoreleasedReturnValue();

      uVar19 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      uVar9 = _objc_opt_isKindOfClass(uVar18,uVar19);

      if ((uVar9 & 1) != 0) {

        _objc_retain(uVar18);

        uVar9 = FUN_00089210(uVar18);

        if ((uVar9 & 1) != 0) {

          auVar29 = FUN_00299020(uVar18);

          uVar19 = auVar29._0_8_;

          FUN_00299540(uVar19,auVar29._8_8_,&cf_name);

          uVar20 = _objc_retainAutoreleasedReturnValue();

          uVar21 = _objc_opt_class(&_OBJC_CLASS___NSString);

          auVar29 = _objc_opt_isKindOfClass(uVar20,uVar21);

          if ((auVar29._0_8_ & 1) == 0) {

            local_910 = 0;

          }

          else {

            FUN_00299540(uVar19,auVar29._8_8_,&cf_name);

            local_910 = _objc_retainAutoreleasedReturnValue();

          }

          _objc_release(uVar20);

          FUN_00299540(uVar19,extraout_x1_31,&cf_cardDir);

          uVar20 = _objc_retainAutoreleasedReturnValue();

          uVar21 = _objc_opt_class(&_OBJC_CLASS___NSString);

          auVar29 = _objc_opt_isKindOfClass(uVar20,uVar21);

          if ((auVar29._0_8_ & 1) == 0) {

            uVar21 = 0;

          }

          else {

            FUN_00299540(uVar19,auVar29._8_8_,&cf_cardDir);

            uVar21 = _objc_retainAutoreleasedReturnValue();

          }

          _objc_release(uVar20);

          auVar29 = FUN_00297fa0(uVar21);

          if (auVar29._0_8_ == 0) {

            iVar4 = FUN_00295f60(local_910,auVar29._8_8_,&cf_aSGr_);

          }

          else {

            iVar4 = 1;

          }

          FUN_00089348(uVar21);

          uVar22 = _objc_retainAutoreleasedReturnValue();

          auVar29 = FUN_00297fa0();

          uVar20 = uVar22;

          if ((auVar29._0_8_ == 0) &&

             (iVar5 = FUN_00295f60(local_910,auVar29._8_8_,&cf_aSGr_), iVar5 != 0)) {

            auVar29 = FUN_00297fa0(&cf_aSGr_);

            FUN_002a47c0(local_910,auVar29._8_8_,auVar29._0_8_);

            uVar23 = _objc_retainAutoreleasedReturnValue();

            FUN_00089348();

            uVar20 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar22);

            _objc_release(uVar23);

          }

          if ((iVar4 == 0) || (lVar13 = FUN_00297fa0(uVar20), lVar13 != 0)) {

            auVar29 = FUN_00297fa0(uVar20);

            if (auVar29._0_8_ != 0) {

              FUN_002a00a0(uVar19,auVar29._8_8_,uVar20,&cf_cardDir);

            }

            auVar29 = FUN_00293860(uVar16);

            FUN_00299480(&_OBJC_CLASS___NSNumber,auVar29._8_8_,auVar29._0_8_);

            auVar29 = _objc_retainAutoreleasedReturnValue();

            FUN_00299400(&_OBJC_CLASS___NSNumber,auVar29._8_8_,lVar11);

            auVar30 = _objc_retainAutoreleasedReturnValue();

            FUN_002a00a0(uVar17,auVar30._8_8_,auVar29._0_8_,auVar30._0_8_);

            _objc_release(auVar30._0_8_);

            _objc_release(auVar29._0_8_);

            auVar29 = FUN_002937a0(uVar19);

            FUN_00291240(uVar16,auVar29._8_8_,auVar29._0_8_);

            _objc_release(auVar29._0_8_);

          }

          _objc_release(uVar20);

          _objc_release(uVar21);

          _objc_release(local_910);

          _objc_release(uVar19);

        }

        _objc_release(uVar18);

      }

      _objc_release(uVar18);

      lVar11 = lVar11 + 1;

    }

    _objc_release(uVar14);

  }

  uVar18 = FUN_002937a0(uVar17);

  _objc_autorelease();

  uVar19 = FUN_002937a0(uVar16);

  _objc_release(uVar17);

  _objc_release(uVar16);

  _objc_release(uVar14);

  _objc_retain(uVar18);

  FUN_002a00a0(uVar8,extraout_x1_32,uVar19,&cf_CadisCustomCalendarStyles);

  _objc_release(uVar19);

  _objc_release(uVar14);

  FUN_00088df0(uVar8,&PTR__OBJC_CLASS___NSConstantArray_003bde10,uVar18,10,0xffffffffffffffff);

  _objc_release(uVar18);

  _objc_release(uVar12);

  _objc_release(uVar12);

  FUN_00298780(&_OBJC_CLASS___NSBundle);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_00292640();

  uVar14 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar12);

  FUN_00088600(uVar14,0);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_00088600(&cf_com_shtm_cadis,1);

  uVar16 = _objc_retainAutoreleasedReturnValue();

  uStack_798 = 0;

  local_7a0 = 0;

  uStack_788 = 0;

  uStack_790 = 0;

  lStack_7b8 = 0;

  local_7c0 = 0;

  uStack_7a8 = 0;

  local_7b0 = (long *)0x0;

  _objc_retain(uVar15);

  lVar11 = FUN_00293880(uVar15,extraout_x1_33,&local_7c0,auStack_370,0x10);

  puVar1 = PTR__kCFPreferencesAnyHost_00388338;

  if (lVar11 != 0) {

    lVar13 = *local_7b0;

    uVar17 = *(undefined8 *)PTR__kCFPreferencesCurrentUser_00388340;

    uVar18 = *(undefined8 *)PTR__kCFPreferencesAnyHost_00388338;

    do {

      lVar28 = 0;

      do {

        if (*local_7b0 != lVar13) {

          _objc_enumerationMutation(uVar15);

        }

        uVar20 = *(undefined8 *)(lStack_7b8 + lVar28 * 8);

        iVar4 = FUN_00085164(uVar20);

        uVar19 = extraout_x1_34;

        if (iVar4 != 0) {

          auVar29 = FUN_00297820(uVar20,extraout_x1_34,&cf_xzySettingsRevision);

          uVar19 = auVar29._8_8_;

          if ((auVar29._0_8_ & 1) == 0) {

            FUN_00299540(uVar15,uVar19,uVar20);

            uVar19 = _objc_retainAutoreleasedReturnValue();

            _CFPreferencesSetValue(uVar20,uVar19,uVar14,uVar17,uVar18);

            _objc_release(uVar19);

            uVar19 = extraout_x1_35;

          }

        }

        lVar28 = lVar28 + 1;

      } while (lVar11 != lVar28);

      lVar11 = FUN_00293880(uVar15,uVar19,&local_7c0,auStack_370,0x10);

    } while (lVar11 != 0);

  }

  _objc_release(uVar15);

  uStack_7d8 = 0;

  local_7e0 = 0;

  uStack_7c8 = 0;

  uStack_7d0 = 0;

  lStack_7f8 = 0;

  local_800 = 0;

  uStack_7e8 = 0;

  local_7f0 = (long *)0x0;

  _objc_retain(uVar8);

  auVar29 = FUN_00293880(uVar8,extraout_x1_36,&local_800,auStack_3f0,0x10);

  if (auVar29._0_8_ != 0) {

    lVar11 = *local_7f0;

    uVar17 = *(undefined8 *)PTR__kCFPreferencesCurrentUser_00388340;

    uVar18 = *(undefined8 *)puVar1;

    do {

      uVar19 = auVar29._8_8_;

      lVar13 = 0;

      do {

        if (*local_7f0 != lVar11) {

          _objc_enumerationMutation(uVar8);

          uVar19 = extraout_x1_37;

        }

        uVar20 = *(undefined8 *)(lStack_7f8 + lVar13 * 8);

        iVar4 = FUN_00295f60(uVar20,uVar19,&cf_Cadis);

        uVar19 = extraout_x1_38;

        if (iVar4 != 0) {

          FUN_00299540(uVar8,extraout_x1_38,uVar20);

          uVar19 = _objc_retainAutoreleasedReturnValue();

          _CFPreferencesSetValue(uVar20,uVar19,&cf_com_shtm_cadis,uVar17,uVar18);

          _objc_release(uVar19);

          uVar19 = extraout_x1_39;

        }

        lVar13 = lVar13 + 1;

      } while (auVar29._0_8_ != lVar13);

      auVar29 = FUN_00293880(uVar8,uVar19,&local_800,auStack_3f0,0x10);

    } while (auVar29._0_8_ != 0);

  }

  _objc_release(uVar8);

  _CFPreferencesAppSynchronize(uVar14);

  _CFPreferencesAppSynchronize(&cf_com_shtm_cadis);

  uVar6 = FUN_0008876c(uVar15,uVar14,0);

  uVar7 = FUN_0008876c(uVar8,&cf_com_shtm_cadis,1);

  uVar6 = uVar6 & uVar7;

  if ((uVar6 & 1) == 0) {

    local_400 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

    local_3f8 = &cf_RMn__gQeQOc_OLTS;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1_40,&local_3f8,&local_400,1);

    auVar29 = _objc_retainAutoreleasedReturnValue();

    FUN_00294de0(&_OBJC_CLASS___NSError,auVar29._8_8_,&cf_XZYSettings,7,auVar29._0_8_);

    _objc_retainAutoreleasedReturnValue();

    lVar11 = _objc_autorelease();

    *param_2 = lVar11;

    uVar17 = auVar29._0_8_;

  }

  else {

    uStack_818 = 0;

    local_820 = 0;

    uStack_808 = 0;

    uStack_810 = 0;

    lStack_838 = 0;

    local_840 = 0;

    uStack_828 = 0;

    local_830 = (long *)0x0;

    _objc_retain(uVar12);

    lVar11 = FUN_00293880(uVar12,extraout_x1_41,&local_840,auStack_480,0x10);

    if (lVar11 != 0) {

      lVar13 = *local_830;

      do {

        lVar28 = 0;

        do {

          if (*local_830 != lVar13) {

            _objc_enumerationMutation(uVar12);

          }

          FUN_00004000(*(undefined8 *)(lStack_838 + lVar28 * 8));

          lVar28 = lVar28 + 1;

        } while (lVar11 != lVar28);

        lVar11 = FUN_00293880(uVar12,extraout_x1_42,&local_840,auStack_480,0x10);

      } while (lVar11 != 0);

    }

    _objc_release(uVar12);

    uStack_858 = 0;

    local_860 = 0;

    uStack_848 = 0;

    uStack_850 = 0;

    lStack_878 = 0;

    local_880 = 0;

    uStack_868 = 0;

    local_870 = (long *)0x0;

    _objc_retain(uVar16);

    lVar11 = FUN_00293880(uVar16,extraout_x1_43,&local_880,auStack_500,0x10);

    if (lVar11 != 0) {

      lVar13 = *local_870;

      do {

        lVar28 = 0;

        do {

          if (*local_870 != lVar13) {

            _objc_enumerationMutation(uVar16);

          }

          FUN_00004000(*(undefined8 *)(lStack_878 + lVar28 * 8));

          lVar28 = lVar28 + 1;

        } while (lVar11 != lVar28);

        lVar11 = FUN_00293880(uVar16,extraout_x1_44,&local_880,auStack_500,0x10);

      } while (lVar11 != 0);

    }

    _objc_release(uVar16);

    uStack_898 = 0;

    local_8a0 = 0;

    uStack_888 = 0;

    uStack_890 = 0;

    lStack_8b8 = 0;

    local_8c0 = 0;

    uStack_8a8 = 0;

    local_8b0 = (long *)0x0;

    _objc_retain(uVar15);

    lVar11 = FUN_00293880(uVar15,extraout_x1_45,&local_8c0,auStack_580,0x10);

    if (lVar11 != 0) {

      lVar13 = *local_8b0;

      do {

        lVar28 = 0;

        do {

          if (*local_8b0 != lVar13) {

            _objc_enumerationMutation(uVar15);

          }

          FUN_00004000(*(undefined8 *)(lStack_8b8 + lVar28 * 8));

          lVar28 = lVar28 + 1;

        } while (lVar11 != lVar28);

        lVar11 = FUN_00293880(uVar15,extraout_x1_46,&local_8c0,auStack_580,0x10);

      } while (lVar11 != 0);

    }

    _objc_release(uVar15);

    uStack_8d8 = 0;

    local_8e0 = 0;

    uStack_8c8 = 0;

    uStack_8d0 = 0;

    lStack_8f8 = 0;

    local_900 = 0;

    uStack_8e8 = 0;

    local_8f0 = (long *)0x0;

    _objc_retain(uVar8);

    lVar11 = FUN_00293880(uVar8,extraout_x1_47,&local_900,auStack_600,0x10);

    uVar17 = uVar8;

    if (lVar11 != 0) {

      lVar13 = *local_8f0;

      do {

        lVar28 = 0;

        do {

          if (*local_8f0 != lVar13) {

            _objc_enumerationMutation(uVar8);

          }

          FUN_00004000(*(undefined8 *)(lStack_8f8 + lVar28 * 8));

          lVar28 = lVar28 + 1;

        } while (lVar11 != lVar28);

        lVar11 = FUN_00293880(uVar8,extraout_x1_48,&local_900,auStack_600,0x10);

      } while (lVar11 != 0);

    }

  }

  _objc_release(uVar17);

  _objc_release(uVar16);

  _objc_release(uVar12);

  _objc_release(uVar14);

  _objc_release(uVar8);

  _objc_release(local_930);

  _objc_release(uVar15);

LAB_00087a58:

  _objc_release(lVar10);

  _objc_release(local_940);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return uVar6;

}






// ==== FUN_00088600 @0x88600 ====  [src: FUN__part2.c]


void FUN_00088600(undefined8 param_1,int param_2)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 extraout_x1;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined1 auVar9 [16];

  

  _objc_retain();

  uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

  lVar2 = FUN_00297fa0(param_1);

  if (lVar2 != 0) {

    uVar6 = *(undefined8 *)PTR__kCFPreferencesCurrentUser_00388340;

    uVar7 = *(undefined8 *)PTR__kCFPreferencesAnyHost_00388338;

    lVar2 = _CFPreferencesCopyKeyList(param_1,uVar6,uVar7);

    if (lVar2 != 0) {

      for (lVar8 = 0; lVar3 = _CFArrayGetCount(lVar2), lVar8 < lVar3; lVar8 = lVar8 + 1) {

        _CFArrayGetValueAtIndex(lVar2,lVar8);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        uVar4 = auVar9._0_8_;

        if (param_2 == 0) {

          uVar5 = FUN_00085164(uVar4);

        }

        else {

          uVar5 = FUN_00295f60(uVar4,auVar9._8_8_,&cf_Cadis);

        }

        if ((uVar5 & 1) != 0) {

          _CFPreferencesSetValue(uVar4,0,param_1,uVar6,uVar7);

          FUN_00291240(uVar1,extraout_x1,uVar4);

        }

        _objc_release(uVar4);

      }

      _CFRelease(lVar2);

    }

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}






// ==== FUN_0008876c @0x8876c ====  [src: FUN__part2.c]


undefined8 FUN_0008876c(undefined8 param_1,undefined8 param_2,int param_3)



{

  int iVar1;

  uint uVar2;

  uint uVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

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

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  lVar4 = FUN_00297fa0(param_2);

  if (lVar4 == 0) {

    uVar7 = 0;

  }

  else {

    _objc_retain(param_2);

    uVar5 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

    lVar4 = FUN_00297fa0(param_2);

    if ((lVar4 != 0) &&

       (lVar4 = _CFPreferencesCopyKeyList

                          (param_2,*(undefined8 *)PTR__kCFPreferencesCurrentUser_00388340,

                           *(undefined8 *)PTR__kCFPreferencesAnyHost_00388338), lVar4 != 0)) {

      for (lVar8 = 0; lVar6 = _CFArrayGetCount(lVar4), lVar8 < lVar6; lVar8 = lVar8 + 1) {

        _CFArrayGetValueAtIndex(lVar4,lVar8);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        auVar11 = _CFPreferencesCopyAppValue(uVar7,param_2);

        lVar6 = auVar11._0_8_;

        if (lVar6 != 0) {

          FUN_002a00a0(uVar5,auVar11._8_8_,lVar6,uVar7);

          _objc_release(lVar6);

        }

        _objc_release(uVar7);

      }

      _CFRelease(lVar4);

    }

    _objc_release(param_2);

    uStack_188 = 0;

    local_190 = 0;

    uStack_178 = 0;

    uStack_180 = 0;

    lStack_1a8 = 0;

    local_1b0 = 0;

    uStack_198 = 0;

    local_1a0 = (long *)0x0;

    _objc_retain(param_1);

    auVar11 = FUN_00293880(param_1,extraout_x1,&local_1b0,auStack_f0,0x10);

    if (auVar11._0_8_ != 0) {

      lVar4 = *local_1a0;

      do {

        uVar7 = auVar11._8_8_;

        lVar8 = 0;

        do {

          if (*local_1a0 != lVar4) {

            _objc_enumerationMutation(param_1);

            uVar7 = extraout_x1_00;

          }

          uVar9 = *(undefined8 *)(lStack_1a8 + lVar8 * 8);

          if (param_3 == 0) {

            iVar1 = FUN_00085164(uVar9);

            uVar7 = extraout_x1_02;

          }

          else {

            iVar1 = FUN_00295f60(uVar9,uVar7,&cf_Cadis);

            uVar7 = extraout_x1_01;

          }

          if (iVar1 != 0) {

            FUN_00299540(uVar5,uVar7,uVar9);

            auVar12 = _objc_retainAutoreleasedReturnValue();

            FUN_00299540(param_1,auVar12._8_8_,uVar9);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            iVar1 = FUN_002977c0(auVar12._0_8_,auVar13._8_8_,auVar13._0_8_);

            _objc_release(auVar13._0_8_);

            _objc_release(auVar12._0_8_);

            uVar7 = extraout_x1_03;

            if (iVar1 == 0) {

              uVar7 = 0;

              uVar9 = param_1;

              goto LAB_00088ab4;

            }

          }

          lVar8 = lVar8 + 1;

        } while (auVar11._0_8_ != lVar8);

        auVar11 = FUN_00293880(param_1,uVar7,&local_1b0,auStack_f0,0x10);

      } while (auVar11._0_8_ != 0);

    }

    _objc_release(param_1);

    uStack_1c8 = 0;

    local_1d0 = 0;

    uStack_1b8 = 0;

    uStack_1c0 = 0;

    lStack_1e8 = 0;

    local_1f0 = 0;

    uStack_1d8 = 0;

    local_1e0 = (long *)0x0;

    _objc_retain(uVar5);

    auVar11 = FUN_00293880(uVar5,extraout_x1_04,&local_1f0,auStack_170,0x10);

    uVar9 = uVar5;

    if (auVar11._0_8_ != 0) {

      lVar4 = *local_1e0;

      do {

        uVar7 = auVar11._8_8_;

        lVar8 = 0;

        do {

          if (*local_1e0 != lVar4) {

            _objc_enumerationMutation(uVar5);

            uVar7 = extraout_x1_05;

          }

          uVar10 = *(undefined8 *)(lStack_1e8 + lVar8 * 8);

          if (param_3 == 0) {

            uVar2 = FUN_00085164(uVar10);

            uVar7 = extraout_x1_07;

          }

          else {

            uVar2 = FUN_00295f60(uVar10,uVar7,&cf_Cadis);

            uVar7 = extraout_x1_06;

          }

          auVar12 = FUN_00297820(uVar10,uVar7,&cf_xzySettingsRevision);

          uVar7 = auVar12._8_8_;

          if (((auVar12._0_8_ & 1) == 0) &&

             (uVar3 = FUN_00297820(uVar10,uVar7,&cf_CadisXZYSettingsRevision),

             uVar7 = extraout_x1_08, ((uVar3 | uVar2 ^ 0xffffffff) & 1) == 0)) {

            FUN_00299540(param_1,extraout_x1_08,uVar10);

            lVar6 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            uVar7 = extraout_x1_09;

            if (lVar6 == 0) {

              uVar7 = 0;

              goto LAB_00088ab4;

            }

          }

          lVar8 = lVar8 + 1;

        } while (auVar11._0_8_ != lVar8);

        auVar11 = FUN_00293880(uVar5,uVar7,&local_1f0,auStack_170,0x10);

      } while (auVar11._0_8_ != 0);

    }

    uVar7 = 1;

LAB_00088ab4:

    _objc_release(uVar9);

    _objc_release(uVar5);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return uVar7;

}






// ==== FUN_00088be0 @0x88be0 ====  [src: FUN__part2.c]


void FUN_00088be0(undefined8 param_1,undefined8 *param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  

  _objc_retain();

  uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

  if ((uVar4 & 1) != 0) {

    _objc_retain(param_1);

    for (lVar6 = 0; auVar7 = FUN_00293860(param_1), lVar6 < auVar7._0_8_; lVar6 = lVar6 + 1) {

      FUN_00299500(param_1,auVar7._8_8_,lVar6);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar5 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      uVar4 = _objc_opt_isKindOfClass(uVar3,uVar5);

      if (((uVar4 & 1) != 0) && (uVar4 = FUN_00089210(uVar3), (uVar4 & 1) != 0)) {

        auVar7 = FUN_00293860(uVar1);

        FUN_00299480(&_OBJC_CLASS___NSNumber,auVar7._8_8_,auVar7._0_8_);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_00299400(&_OBJC_CLASS___NSNumber,auVar7._8_8_,lVar6);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_002a00a0(uVar2,auVar8._8_8_,auVar7._0_8_,auVar8._0_8_);

        _objc_release(auVar8._0_8_);

        _objc_release(auVar7._0_8_);

        FUN_00291240(uVar1,extraout_x1,uVar3);

      }

      _objc_release(uVar3);

    }

    _objc_release(param_1);

  }

  FUN_002937a0(uVar2);

  uVar3 = _objc_autorelease();

  *param_2 = uVar3;

  uVar3 = FUN_002937a0(uVar1);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}






// ==== FUN_00088df0 @0x88df0 ====  [src: FUN__part2.c]


void FUN_00088df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5

                 )



{

  ulong uVar1;

  ulong uVar2;

  long lVar3;

  bool bVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar10;

  undefined8 extraout_x1_05;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  undefined8 uVar16;

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  _objc_retain(param_2);

  auVar17 = FUN_00293880(param_2,extraout_x1,&local_1b0,auStack_f0,0x10);

  if (auVar17._0_8_ != 0) {

    lVar15 = *local_1a0;

    do {

      uVar5 = auVar17._8_8_;

      lVar12 = 0;

      do {

        if (*local_1a0 != lVar15) {

          _objc_enumerationMutation(param_2);

          uVar5 = extraout_x1_00;

        }

        uVar16 = *(undefined8 *)(lStack_1a8 + lVar12 * 8);

        FUN_00299540(param_1,uVar5,uVar16);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        uVar6 = _objc_opt_respondsToSelector(uVar5,"integerValue");

        if ((uVar6 & 1) != 0) {

          auVar18 = FUN_002974a0(uVar5);

          lVar7 = auVar18._0_8_;

          if ((param_4 <= lVar7) && (param_5 < param_4 || lVar7 <= param_5)) {

            FUN_00299400(&_OBJC_CLASS___NSNumber,auVar18._8_8_,lVar7 - param_4);

            auVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_00299540(param_3,auVar18._8_8_,auVar18._0_8_);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            _objc_release(auVar18._0_8_);

            if (lVar8 == 0) {

              auVar18 = FUN_00293860(param_3);

              uVar10 = auVar18._8_8_;

              if (auVar18._0_8_ != 0) {

                uStack_1c8 = 0;

                local_1d0 = 0;

                uStack_1b8 = 0;

                uStack_1c0 = 0;

                lStack_1e8 = 0;

                local_1f0 = 0;

                uStack_1d8 = 0;

                local_1e0 = (long *)0x0;

                _objc_retain(param_3);

                lVar8 = FUN_00293880(param_3,extraout_x1_01,&local_1f0,auStack_170,0x10);

                if (lVar8 == 0) {

                  _objc_release(param_3);

                  uVar10 = extraout_x1_04;

                }

                else {

                  lVar13 = *local_1e0;

                  lVar11 = 0x7fffffffffffffff;

                  uVar6 = 0x7fffffffffffffff;

                  do {

                    lVar14 = 0;

                    do {

                      if (*local_1e0 != lVar13) {

                        _objc_enumerationMutation(param_3);

                      }

                      auVar18 = FUN_002974a0(*(undefined8 *)(lStack_1e8 + lVar14 * 8));

                      lVar9 = auVar18._0_8_;

                      uVar2 = lVar9 - (lVar7 - param_4);

                      uVar1 = -uVar2;

                      if (-1 < (long)uVar2) {

                        uVar1 = uVar2;

                      }

                      uVar2 = uVar6;

                      lVar3 = lVar11;

                      if (uVar1 == uVar6 && lVar9 < lVar11) {

                        uVar2 = uVar1;

                        lVar3 = lVar9;

                      }

                      bVar4 = uVar6 <= uVar1;

                      uVar6 = uVar1;

                      lVar11 = lVar9;

                      if (bVar4) {

                        uVar6 = uVar2;

                        lVar11 = lVar3;

                      }

                      lVar14 = lVar14 + 1;

                    } while (lVar8 != lVar14);

                    lVar8 = FUN_00293880(param_3,auVar18._8_8_,&local_1f0,auStack_170,0x10);

                  } while (lVar8 != 0);

                  _objc_release(param_3);

                  uVar10 = extraout_x1_02;

                  if (lVar11 != 0x7fffffffffffffff) {

                    FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_02,lVar11);

                    auVar18 = _objc_retainAutoreleasedReturnValue();

                    FUN_00299540(param_3,auVar18._8_8_,auVar18._0_8_);

                    lVar8 = _objc_retainAutoreleasedReturnValue();

                    _objc_release(auVar18._0_8_);

                    uVar10 = extraout_x1_03;

                    if (lVar8 != 0) goto LAB_00088f3c;

                  }

                }

              }

              FUN_0029b4a0(param_1,uVar10,uVar16);

            }

            else {

LAB_00088f3c:

              auVar18 = FUN_002974a0(lVar8);

              FUN_00299400(&_OBJC_CLASS___NSNumber,auVar18._8_8_,auVar18._0_8_ + param_4);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_002a00a0(param_1,auVar18._8_8_,auVar18._0_8_,uVar16);

              _objc_release(auVar18._0_8_);

              _objc_release(lVar8);

            }

          }

        }

        _objc_release(uVar5);

        lVar12 = lVar12 + 1;

        uVar5 = extraout_x1_05;

      } while (lVar12 != auVar17._0_8_);

      auVar17 = FUN_00293880(param_2,extraout_x1_05,&local_1b0,auStack_f0,0x10);

    } while (auVar17._0_8_ != 0);

  }

  _objc_release(param_2);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}






// ==== FUN_00089210 @0x89210 ====  [src: FUN__part2.c]


bool FUN_00089210(undefined8 param_1)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  auVar6 = _objc_opt_isKindOfClass(param_1,uVar2);

  if ((auVar6._0_8_ & 1) == 0) {

    uVar2 = 0;

  }

  else {

    FUN_00299540(param_1,auVar6._8_8_,&cf_code);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

  if ((uVar4 & 1) == 0) {

    bVar1 = false;

  }

  else {

    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45c0(uVar2,auVar6._8_8_,auVar6._0_8_);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    lVar5 = FUN_00297fa0(uVar3);

    bVar1 = lVar5 != 0;

    _objc_release(uVar3);

  }

  _objc_release(uVar2);

  _objc_release(param_1);

  return bVar1;

}






// ==== FUN_00089348 @0x89348 ====  [src: FUN__part2.c]


void FUN_00089348(undefined8 param_1)



{

  byte bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  byte local_31;

  

  FUN_000895b0(param_1,&PTR__OBJC_CLASS___NSConstantArray_003bddf8,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_00297fa0();

  if (auVar5._0_8_ == 0) {

    uVar4 = 0;

  }

  else {

    local_31 = 0;

    FUN_002a4460(uVar2,auVar5._8_8_,&cf_theme_xos);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    bVar1 = FUN_00295180(auVar5._0_8_,auVar5._8_8_,uVar3,&local_31);

    _objc_release(auVar5._0_8_);

    uVar4 = 0;

    if (((local_31 | bVar1 ^ 0xff) & 1) == 0) {

      uVar4 = uVar2;

    }

    _objc_retain(uVar4);

    _objc_release(uVar3);

  }

  _objc_release(uVar2);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}






// ==== FUN_00089454 @0x89454 ====  [src: FUN__part2.c]


bool FUN_00089454(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  bool bVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_00299540(param_1,extraout_x1,param_2);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    bVar1 = false;

  }

  else {

    FUN_000895b0(lVar2,param_3,0);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    auVar4 = FUN_00297fa0();

    bVar1 = auVar4._0_8_ != 0;

    if (auVar4._0_8_ == 0) {

      FUN_0029b4a0(param_1,auVar4._8_8_,param_2);

    }

    else {

      FUN_00297da0(uVar3);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(param_1,auVar4._8_8_,auVar4._0_8_,param_2);

      _objc_release(auVar4._0_8_);

    }

    _objc_release(uVar3);

  }

  _objc_release(lVar2);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  return bVar1;

}






// ==== FUN_000895b0 @0x895b0 ====  [src: FUN__part2.c]


void FUN_000895b0(undefined8 param_1,undefined8 param_2,char param_3)



{

  uint uVar1;

  uint uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar9;

  undefined8 uVar10;

  long lVar11;

  undefined1 auVar12 [16];

  char local_131;

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

  if (((uVar4 & 1) == 0) || (lVar5 = FUN_00297fa0(param_1), lVar5 == 0)) {

    uVar3 = 0;

  }

  else {

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_retain(param_1);

    _NSSearchPathForDirectoriesInDomains(9,1,1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00295440();

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar3);

    FUN_00297da0(param_1);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    lVar5 = FUN_00297fa0(uVar7);

    if ((lVar5 == 0) || (lVar5 = FUN_00297fa0(uVar8), lVar5 == 0)) {

      uVar3 = 0;

    }

    else {

      uStack_108 = 0;

      local_110 = 0;

      uStack_f8 = 0;

      uStack_100 = 0;

      lStack_128 = 0;

      local_130 = 0;

      uStack_118 = 0;

      local_120 = (long *)0x0;

      _objc_retain(param_2);

      lVar5 = FUN_00293880(param_2,extraout_x1,&local_130,auStack_f0,0x10);

      if (lVar5 != 0) {

        lVar11 = *local_120;

        do {

          lVar9 = 0;

          do {

            if (*local_120 != lVar11) {

              _objc_enumerationMutation(param_2);

            }

            uVar3 = *(undefined8 *)(lStack_128 + lVar9 * 8);

            auVar12 = FUN_00297fa0(uVar3);

            if (auVar12._0_8_ == 0) {

              _objc_retain(uVar7);

              auVar12._8_8_ = extraout_x1_00;

              auVar12._0_8_ = uVar7;

            }

            else {

              FUN_002a4460(uVar7,auVar12._8_8_,uVar3);

              auVar12 = _objc_retainAutoreleasedReturnValue();

            }

            uVar10 = auVar12._0_8_;

            FUN_002a4460(uVar10,auVar12._8_8_,uVar8);

            auVar12 = _objc_retainAutoreleasedReturnValue();

            uVar3 = auVar12._0_8_;

            local_131 = '\0';

            uVar2 = FUN_00295180(uVar6,auVar12._8_8_,uVar3,&local_131);

            uVar1 = 0;

            if (local_131 == param_3) {

              uVar1 = uVar2;

            }

            if ((uVar1 & 1) != 0) {

              _objc_release(uVar10);

              goto LAB_000897c8;

            }

            _objc_release(uVar3);

            _objc_release(uVar10);

            lVar9 = lVar9 + 1;

          } while (lVar5 != lVar9);

          lVar5 = FUN_00293880(param_2,extraout_x1_01,&local_130,auStack_f0,0x10);

        } while (lVar5 != 0);

      }

      uVar3 = 0;

LAB_000897c8:

      _objc_release(param_2);

    }

    _objc_release(uVar8);

    _objc_release(uVar7);

    _objc_release(param_1);

    _objc_release(uVar6);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    _objc_autoreleaseReturnValue(uVar3);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_000898ec @0x898ec ====  [src: FUN__part2.c]


void FUN_000898ec(undefined8 param_1,undefined8 param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar3 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  cfstringStruct *local_50;

  undefined8 local_48;

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_00299540(param_1,extraout_x1,param_2);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

    auVar3 = _objc_opt_isKindOfClass(lVar1,uVar2);

    if ((auVar3._0_8_ & 1) == 0) {

      FUN_0029b4a0(param_1,auVar3._8_8_,param_2);

    }

    else {

      uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

      local_70 = PTR___NSConcreteStackBlock_003886f0;

      local_68 = 0xc2000000;

      local_60 = FUN_00089a8c;

      puStack_58 = &DAT_0038a610;

      local_50 = &cf_CoverRes_group;

      _objc_retain();

      local_48 = uVar2;

      FUN_00294d60(lVar1,extraout_x1_00,&local_70);

      auVar3 = FUN_002937a0(uVar2);

      FUN_002a00a0(param_1,auVar3._8_8_,auVar3._0_8_,param_2);

      _objc_release(auVar3._0_8_);

      _objc_release(local_48);

      _objc_release(local_50);

      _objc_release(uVar2);

    }

  }

  _objc_release(lVar1);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}






// ==== FUN_0008b3bc @0x8b3bc ====  [src: FUN__part2.c]


void FUN_0008b3bc(long param_1,ulong param_2,cfstringStruct *param_3)



{

  ulong uVar1;

  bool bVar2;

  int iVar3;

  uint uVar4;

  ulong uVar5;

  long lVar6;

  cfstringStruct *pcVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

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

  uint uVar14;

  undefined8 uVar15;

  double dVar16;

  undefined1 auVar17 [16];

  

  _objc_retain(param_3);

  DAT_003e7730 = 0;

  uVar5 = (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();

  if ((uVar5 & 1) == 0) {

    FUN_00077430();

    lVar6 = *(long *)(param_1 + 0x40);

    if (lVar6 == 0) goto LAB_0008b8ac;

    param_2 = 0;

    pcVar7 = &cf_F;

  }

  else {

    auVar17 = FUN_00297fa0(param_3);

    if (auVar17._0_8_ != 0) {

      uVar15 = *(undefined8 *)(param_1 + 0x20);

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar17._8_8_,&cf__);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0060(uVar15,auVar17._8_8_,auVar17._0_8_,&cf_ttsFvLastCheckinMessage);

      _objc_release(auVar17._0_8_);

    }

    uVar14 = (uint)param_2;

    if (uVar14 == 0) {

      uVar5 = DAT_003e7748;

      if (2 < DAT_003e7748) {

        uVar5 = 3;

      }

      uVar1 = 4;

      if (DAT_003e7748 + 1 < 4) {

        uVar1 = DAT_003e7748 + 1;

      }

      DAT_003e7748 = uVar1;

      FUN_002941a0(*(undefined8 *)(&DAT_00308188 + uVar5 * 8),&_OBJC_CLASS___NSDate);

      uVar15 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      uVar15 = *(undefined8 *)(param_1 + 0x30);

      FUN_0008b020(uVar15);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      lVar6 = FUN_00293120(uVar15,auVar17._8_8_,auVar17._0_8_);

      _objc_release(auVar17._0_8_);

      if (lVar6 != -1) {

        FUN_002a0060(*(undefined8 *)(param_1 + 0x20),extraout_x1,*(undefined8 *)(param_1 + 0x28),

                     &cf_ttsFvLastAutoCheckinDateAtNine);

      }

      uVar15 = 0;

      DAT_003e7748 = 0;

    }

    uVar8 = DAT_003e7548;

    DAT_003e7548 = uVar15;

    _objc_release(uVar8);

    FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

    FUN_0006f2c4(0x3ff0000000000000);

    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (iVar3 = FUN_00077244(), iVar3 != 0)) {

      if (uVar14 == 0) {

        if (DAT_003e7748 == 1) goto LAB_0008b578;

      }

      else {

        uVar5 = FUN_002924c0(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,

                             &cf_ttsFvCheckinNoticeEnabled);

        if ((uVar5 & 1) != 0) {

LAB_0008b578:

          auVar17 = FUN_00297fa0(param_3);

          if (auVar17._0_8_ != 0) {

            pcVar7 = param_3;

            if ((param_2 & 1) == 0) {

              FUN_002a4680(&_OBJC_CLASS___NSString,auVar17._8_8_,&cf___0R1Y__);

              pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            }

            _objc_retain(pcVar7);

            lVar6 = FUN_00297fa0(pcVar7);

            if (lVar6 != 0) {

              FUN_002a2e60(&_OBJC_CLASS___UIApplication);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              auVar17 = FUN_00291a00();

              if (auVar17._0_8_ == 0) {

                auVar17 = FUN_00293580(pcVar7,auVar17._8_8_,&cf_1Y_);

                if ((auVar17._0_8_ & 1) == 0) {

                  uVar5 = FUN_00293580(pcVar7,auVar17._8_8_,&cf_format_s_);

                  bVar2 = (uVar5 & 1) != 0;

                  uVar8 = 1;

                  if (bVar2) {

                    uVar8 = 2;

                  }

                  uVar9 = 0x4010000000000000;

                  if (!bVar2) {

                    uVar9 = 0x4004000000000000;

                  }

                }

                else {

                  uVar9 = 0x4010000000000000;

                  uVar8 = 2;

                }

                FUN_0002a854(uVar9,&cf_F,pcVar7,uVar8);

              }

              else {

                lVar6 = _NSClassFromString(&cf_UILocalNotification);

                if ((lVar6 != 0) &&

                   (uVar5 = _objc_opt_respondsToSelector(uVar15,"presentLocalNotificationNow:"),

                   (uVar5 & 1) != 0)) {

                  auVar17 = _objc_alloc_init(lVar6);

                  uVar8 = auVar17._0_8_;

                  FUN_0029c9e0(uVar8,auVar17._8_8_,&cf_F);

                  FUN_0029c9c0(uVar8,extraout_x1_01,pcVar7);

                  FUN_0029a360(uVar15,extraout_x1_02,uVar8);

                  _objc_release(uVar8);

                }

              }

              _objc_release(uVar15);

            }

            _objc_release(pcVar7);

            if ((param_2 & 1) == 0) {

              _objc_release(pcVar7);

            }

          }

        }

      }

    }

    if ((((*(byte *)(param_1 + 0x48) & 1) == 0) && (uVar4 = FUN_00077244(), (uVar14 & uVar4) == 1))

       && (lVar6 = FUN_00297fa0(param_3), lVar6 != 0)) {

      _objc_retain(param_3);

      lVar6 = FUN_00297fa0(param_3);

      if (lVar6 != 0) {

        _objc_getClass("MMServiceCenter");

        FUN_00294200();

        uVar15 = _objc_retainAutoreleasedReturnValue();

        auVar17 = _objc_getClass("CContactMgr");

        FUN_00295b60(uVar15,auVar17._8_8_,auVar17._0_8_);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_00295b20();

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002986c0();

        uVar10 = _objc_retainAutoreleasedReturnValue();

        auVar17 = FUN_00297fa0();

        if (auVar17._0_8_ != 0) {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar17._8_8_,&cf_0F);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          auVar17 = _objc_getClass("CMessageMgr");

          FUN_00295b60(uVar15,auVar17._8_8_,auVar17._0_8_);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          if ((lVar6 != 0) &&

             (uVar5 = _objc_opt_respondsToSelector(lVar6,"AddMsg:MsgWrap:"), (uVar5 & 1) != 0)) {

            _objc_getClass("CMessageWrap");

            auVar17 = _objc_alloc();

            auVar17 = FUN_00296d40(auVar17._0_8_,auVar17._8_8_,1,uVar10);

            uVar12 = auVar17._0_8_;

            FUN_0029f760(uVar12,auVar17._8_8_,uVar10);

            FUN_0029f780(uVar12,extraout_x1_03,uVar10);

            FUN_0029f740(uVar12,extraout_x1_04,uVar11);

            FUN_0029f840(uVar12,extraout_x1_05,0);

            FUN_0029f860(uVar12,extraout_x1_06,1);

            FUN_002940e0(&_OBJC_CLASS___NSDate);

            uVar13 = _objc_retainAutoreleasedReturnValue();

            dVar16 = (double)FUN_002a51c0();

            FUN_0029f7e0(uVar12,extraout_x1_07,(int)dVar16);

            _objc_release(uVar13);

            FUN_002909e0(lVar6,extraout_x1_08,uVar10,uVar12);

            _objc_release(uVar12);

          }

          _objc_release(lVar6);

          _objc_release(uVar11);

        }

        _objc_release(uVar10);

        _objc_release(uVar9);

        _objc_release(uVar8);

        _objc_release(uVar15);

      }

      _objc_release(param_3);

    }

    lVar6 = *(long *)(param_1 + 0x40);

    pcVar7 = param_3;

    if (lVar6 == 0) goto LAB_0008b8ac;

  }

  (**(code **)(lVar6 + 0x10))(lVar6,param_2,pcVar7);

LAB_0008b8ac:

  _objc_release(param_3);

  return;

}






// ==== FUN_0008e0d0 @0x8e0d0 ====  [src: FUN__part2.c]


void FUN_0008e0d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined *puVar4;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined *local_118;

  undefined8 local_110;

  code *local_108;

  undefined *puStack_100;

  long local_f8;

  undefined8 local_f0;

  undefined *local_e8;

  undefined8 local_e0;

  code *local_d8;

  undefined *puStack_d0;

  undefined *local_c8;

  undefined8 local_c0;

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  long local_98;

  undefined8 uStack_90;

  undefined8 local_88;

  cfstringStruct *pcStack_80;

  undefined8 local_78;

  cfstringStruct *pcStack_70;

  long local_68;

  undefined **ppuVar5;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSHTTPURLResponse);

  auVar6 = _objc_opt_isKindOfClass(param_3,uVar1);

  if ((auVar6._0_8_ & 1) == 0) {

    if (param_4 == 0) {

      auVar7._8_8_ = 0;

      auVar7._0_8_ = auVar6._8_8_;

      auVar6 = auVar7 << 0x40;

      goto LAB_0008e2a0;

    }

LAB_0008e290:

    _objc_retain(param_4);

    lVar3 = param_4;

LAB_0008e310:

    local_b8 = PTR___NSConcreteStackBlock_003886f0;

    local_b0 = 0xc2000000;

    local_a8 = FUN_0008e55c;

    puStack_a0 = &DAT_00389f30;

    ppuVar5 = &local_b8;

    uVar1 = *(undefined8 *)(param_1 + 0x20);

    _objc_retain(uVar1);

    local_98 = lVar3;

    uStack_90 = uVar1;

    _objc_retain(lVar3);

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_b8);

    _objc_release(local_98);

  }

  else {

    auVar6 = FUN_002a4280(param_3);

    lVar3 = auVar6._0_8_;

    if ((param_4 != 0) || (lVar3 - 300U < 0xffffffffffffff9c)) {

      if (param_4 != 0) goto LAB_0008e290;

LAB_0008e2a0:

      local_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      pcStack_70 = &cf_F;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar6._8_8_,&pcStack_70,&local_78,1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar7._8_8_,&cf_FishAudio,auVar6._0_8_,auVar7._0_8_);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar7._0_8_);

      goto LAB_0008e310;

    }

    auVar7 = FUN_00297fa0(param_2);

    auVar6._8_8_ = auVar7._8_8_;

    auVar6._0_8_ = lVar3;

    if (auVar7._0_8_ == 0) goto LAB_0008e2a0;

    _NSTemporaryDirectory();

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_00290c60(&_OBJC_CLASS___NSUUID);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00290c80();

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar6._8_8_,&cf_xzy_tts____mp3);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(uVar1,auVar7._8_8_,auVar7._0_8_);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar2);

    _objc_release(uVar1);

    auVar6 = FUN_002a6580(param_2,extraout_x1,lVar3,1);

    if ((auVar6._0_8_ & 1) == 0) {

      local_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      pcStack_80 = &cf_elOX_;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar6._8_8_,&pcStack_80,&local_88,1);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar6._8_8_,&cf_FishAudio,0xfffffffffffffffe,auVar6._0_8_

                  );

      puVar4 = (undefined *)_objc_retainAutoreleasedReturnValue();

      _objc_release(auVar6._0_8_);

      local_e8 = PTR___NSConcreteStackBlock_003886f0;

      local_e0 = 0xc2000000;

      local_d8 = FUN_0008e57c;

      puStack_d0 = &DAT_00389f30;

      uVar1 = *(undefined8 *)(param_1 + 0x20);

      _objc_retain(uVar1);

      local_c8 = puVar4;

      local_c0 = uVar1;

      _objc_retain(puVar4);

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_e8);

      _objc_release(local_c8);

      _objc_release(local_c0);

      goto LAB_0008e374;

    }

    local_118 = PTR___NSConcreteStackBlock_003886f0;

    local_110 = 0xc2000000;

    local_108 = FUN_0008e59c;

    puStack_100 = &DAT_00389f30;

    ppuVar5 = &local_118;

    uVar1 = *(undefined8 *)(param_1 + 0x20);

    _objc_retain(uVar1);

    local_f0 = uVar1;

    _objc_retain(lVar3);

    local_f8 = lVar3;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_118);

    _objc_release(local_f8);

  }

  puVar4 = ppuVar5[5];

LAB_0008e374:

  _objc_release(puVar4);

  _objc_release(lVar3);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_0008e55c @0x8e55c ====  [src: FUN__part2.c]


void FUN_0008e55c(long param_1)



{

  long lVar1;

  

  lVar1 = *(long *)(param_1 + 0x28);

  if (lVar1 != 0) {

                    /* WARNING: Could not recover jumptable at 0x0008e574. Too many branches */

                    /* WARNING: Treating indirect jump as call */

    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));

    return;

  }

  return;

}






// ==== FUN_0008e57c @0x8e57c ====  [src: FUN__part2.c]


void FUN_0008e57c(long param_1)



{

  long lVar1;

  

  lVar1 = *(long *)(param_1 + 0x28);

  if (lVar1 != 0) {

                    /* WARNING: Could not recover jumptable at 0x0008e594. Too many branches */

                    /* WARNING: Treating indirect jump as call */

    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));

    return;

  }

  return;

}






// ==== FUN_0008e59c @0x8e59c ====  [src: FUN__part2.c]


void FUN_0008e59c(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  

  lVar2 = *(long *)(param_1 + 0x28);

  if (lVar2 != 0) {

    FUN_002a44a0(&cf_mp3_file___,param_2,*(undefined8 *)(param_1 + 0x20));

    uVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0);

    _objc_release(uVar1);

    return;

  }

  return;

}






// ==== FUN_0008ef4c @0x8ef4c ====  [src: FUN__part2.c]


void FUN_0008ef4c(undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

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

  undefined1 auVar6 [16];

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  long local_c0;

  undefined1 local_b8;

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  cfstringStruct *pcStack_78;

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_5);

  if (param_3 < 0x28) {

    FUN_00290be0(&_OBJC_CLASS___NSCharacterSet);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4420(param_1,auVar6._8_8_,auVar6._0_8_);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    if (param_4 == 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,

                   &cf_https___voiceai_fineshare_net_api_checkfilechangestatus___);

      auVar6 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf____fvstatus___);

      auVar6 = _objc_retainAutoreleasedReturnValue();

    }

    uVar2 = auVar6._0_8_;

    FUN_00290c20(&_OBJC_CLASS___NSURL,auVar6._8_8_,uVar2);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b720(&_OBJC_CLASS___NSMutableURLRequest,auVar6._8_8_,auVar6._0_8_);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    FUN_002a1ea0(0x4034000000000000,uVar3);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf_Bearer__);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a2480(uVar3,auVar6._8_8_,auVar6._0_8_,&cf_Authorization);

    _objc_release(auVar6._0_8_);

    FUN_002a2480(uVar3,extraout_x1_02,&cf_application_json,&cf_Accept);

    FUN_002a2480(uVar3,extraout_x1_03,&cf_https___finevoice_ai,&cf_Origin);

    FUN_002a2480(uVar3,extraout_x1_04,&cf_https___finevoice_ai_rewards,&cf_Referer);

    FUN_002a2480(uVar3,extraout_x1_05,&cf_Mozilla_5_0FineVoice,&cf_User_Agent);

    FUN_0008a9d4();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    local_f8 = PTR___NSConcreteStackBlock_003886f0;

    local_f0 = 0xc2000000;

    local_e8 = FUN_0008f408;

    puStack_e0 = &DAT_0038a920;

    local_b8 = (undefined1)param_4;

    _objc_retain(param_5);

    local_c8 = param_5;

    _objc_retain(param_1);

    local_d8 = param_1;

    _objc_retain(param_2);

    local_d0 = param_2;

    local_c0 = param_3;

    FUN_00293f60(uVar4,extraout_x1_06,uVar3,&local_f8);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b980();

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(local_d0);

    _objc_release(local_d8);

    _objc_release(local_c8);

    _objc_release(uVar3);

  }

  else {

    local_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

    pcStack_78 = &cf_F;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1,&pcStack_78,&local_80,1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00294de0(&_OBJC_CLASS___NSError,auVar6._8_8_,&cf_FineVoice,0xfffffffffffffffd,auVar6._0_8_);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    local_b0 = PTR___NSConcreteStackBlock_003886f0;

    local_a8 = 0xc2000000;

    local_a0 = FUN_0008f3e8;

    puStack_98 = &DAT_00389f30;

    _objc_retain(param_5);

    local_90 = uVar1;

    local_88 = param_5;

    _objc_retain(uVar1);

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_b0);

    _objc_release(local_90);

    uVar2 = local_88;

  }

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_5);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_0008f408 @0x8f408 ====  [src: FUN__part2.c]


void FUN_0008f408(long param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  dispatch_time_t dVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined *local_118;

  undefined8 local_110;

  code *local_108;

  undefined *puStack_100;

  undefined8 local_f8;

  undefined8 local_f0;

  undefined8 local_e8;

  undefined8 local_e0;

  undefined1 local_d8;

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined8 local_b0;

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  cfstringStruct *pcStack_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  auVar8 = FUN_00297fa0(param_2);

  if (auVar8._0_8_ == 0) {

    auVar9._8_8_ = 0;

    auVar9._0_8_ = auVar8._8_8_;

    auVar9 = auVar9 << 0x40;

  }

  else {

    FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar8._8_8_,param_2,0,0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

  }

  lVar5 = auVar9._0_8_;

  FUN_00299540(lVar5,auVar9._8_8_,&cf_url);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

  auVar8 = _objc_opt_isKindOfClass(uVar1,uVar2);

  if ((auVar8._0_8_ & 1) == 0) {

    uVar2 = 0;

  }

  else {

    FUN_00299540(lVar5,auVar8._8_8_,&cf_url);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(uVar1);

  if (((param_4 == 0) && (lVar5 == 0)) && ((*(byte *)(param_1 + 0x40) & 1) != 0)) {

    auVar8 = FUN_00297fa0(param_2);

    uVar1 = auVar8._8_8_;

    if (auVar8._0_8_ != 0) {

      local_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      pcStack_70 = &cf_F;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar1,&pcStack_70,&local_78,1);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar8._8_8_,&cf_FineVoice,0xfffffffffffffffa,auVar8._0_8_

                  );

      uVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar8._0_8_);

      local_a8 = PTR___NSConcreteStackBlock_003886f0;

      local_a0 = 0xc2000000;

      local_98 = FUN_0008f930;

      puStack_90 = &DAT_00389f30;

      uVar6 = *(undefined8 *)(param_1 + 0x30);

      _objc_retain(uVar6);

      local_88 = uVar1;

      local_80 = uVar6;

      _objc_retain(uVar1);

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_a8);

      _objc_release(local_88);

      _objc_release(local_80);

      goto LAB_0008f818;

    }

LAB_0008f5e4:

    FUN_00299540(lVar5,uVar1,&cf_status);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    lVar3 = FUN_002974a0();

    if (lVar3 == 3) {

      lVar3 = FUN_00297fa0(uVar2);

      _objc_release(uVar1);

      if (lVar3 != 0) {

        _objc_retain(uVar2);

        uVar1 = uVar2;

        if (*(char *)(param_1 + 0x40) == '\x01') {

          FUN_002a4560(uVar2,extraout_x1_00,&cf_https___dlaudio_fineshare_net,

                       &cf_https___ysfd_zyxzy_top);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar2);

          FUN_002a4560(uVar6,extraout_x1_01,&cf_http___dlaudio_fineshare_net,

                       &cf_https___ysfd_zyxzy_top);

          uVar1 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar6);

        }

        FUN_0008a9d4();

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_00290c20(&_OBJC_CLASS___NSURL,auVar8._8_8_,uVar1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        local_d0 = PTR___NSConcreteStackBlock_003886f0;

        local_c8 = 0xc2000000;

        local_c0 = FUN_0008f950;

        puStack_b8 = &DAT_00389860;

        uVar7 = *(undefined8 *)(param_1 + 0x30);

        _objc_retain(uVar7);

        local_b0 = uVar7;

        FUN_00293f80(auVar8._0_8_,extraout_x1_02,uVar6,&local_d0);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b980();

        _objc_release(uVar7);

        _objc_release(uVar6);

        _objc_release(auVar8._0_8_);

        _objc_release(local_b0);

        goto LAB_0008f818;

      }

    }

    else {

      _objc_release(uVar1);

    }

  }

  else {

    uVar1 = extraout_x1;

    if (param_4 == 0) goto LAB_0008f5e4;

  }

  dVar4 = _dispatch_time(0,500000000);

  _dispatch_get_global_queue(0x11,0);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_118 = PTR___NSConcreteStackBlock_003886f0;

  local_110 = 0xc2000000;

  local_108 = FUN_0008fcf8;

  puStack_100 = &DAT_0038a8f0;

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar1);

  uVar7 = *(undefined8 *)(param_1 + 0x28);

  local_f8 = uVar1;

  _objc_retain(uVar7);

  uVar1 = *(undefined8 *)(param_1 + 0x30);

  local_e0 = *(undefined8 *)(param_1 + 0x38);

  local_d8 = *(undefined1 *)(param_1 + 0x40);

  local_f0 = uVar7;

  _objc_retain(uVar1);

  local_e8 = uVar1;

  _dispatch_after(dVar4,uVar6,&local_118);

  _objc_release(uVar6);

  _objc_release(local_e8);

  _objc_release(local_f0);

  uVar1 = local_f8;

LAB_0008f818:

  _objc_release(uVar1);

  _objc_release(uVar2);

  _objc_release(lVar5);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_0008f950 @0x8f950 ====  [src: FUN__part2.c]


void FUN_0008f950(long param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  long local_88;

  undefined8 local_80;

  undefined8 local_78;

  cfstringStruct *pcStack_70;

  undefined8 local_68;

  cfstringStruct *local_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  _objc_retain(param_4);

  _objc_retain(param_4);

  if (param_4 != 0) {

    uVar5 = 0;

    lVar4 = param_4;

    goto LAB_0008fb78;

  }

  auVar6 = FUN_00297fa0(param_2);

  if (auVar6._0_8_ == 0) {

    local_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

    pcStack_70 = &cf_F;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar6._8_8_,&pcStack_70,&local_78,1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar6._0_8_;

    FUN_00294de0(&_OBJC_CLASS___NSError,auVar6._8_8_,&cf_FineVoice,0xfffffffffffffffc,uVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

LAB_0008fb6c:

    uVar5 = 0;

  }

  else {

    _NSTemporaryDirectory();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00290c60(&_OBJC_CLASS___NSUUID);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00290c80();

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar6._8_8_,&cf_xzy_tts____mp3);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(uVar5,auVar7._8_8_,auVar7._0_8_);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar2);

    _objc_release(uVar5);

    iVar1 = FUN_002a6580(param_2,extraout_x1,uVar3,1);

    if (iVar1 == 0) {

      local_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      local_60 = &cf_elOX_;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1_00,&local_60,&local_68,1);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar6._8_8_,&cf_FineVoice,0xfffffffffffffffb,auVar6._0_8_

                  );

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar6._0_8_);

      goto LAB_0008fb6c;

    }

    FUN_002a44a0(&cf_mp3_file___,extraout_x1_00,uVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    lVar4 = 0;

  }

  _objc_release(uVar3);

LAB_0008fb78:

  local_b0 = PTR___NSConcreteStackBlock_003886f0;

  local_a8 = 0xc2000000;

  local_a0 = FUN_0008fcdc;

  puStack_98 = &DAT_0038a3c0;

  uVar3 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar3);

  local_90 = uVar5;

  local_88 = lVar4;

  local_80 = uVar3;

  _objc_retain(lVar4);

  _objc_retain(uVar5);

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_b0);

  _objc_release(local_88);

  _objc_release(local_90);

  _objc_release(local_80);

  _objc_release(lVar4);

  _objc_release(uVar5);

  _objc_release(param_4);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_0008fcdc @0x8fcdc ====  [src: FUN__part2.c]


void FUN_0008fcdc(long param_1)



{

  long lVar1;

  

  lVar1 = *(long *)(param_1 + 0x30);

  if (lVar1 != 0) {

                    /* WARNING: Could not recover jumptable at 0x0008fcf0. Too many branches */

                    /* WARNING: Treating indirect jump as call */

    (**(code **)(lVar1 + 0x10))

              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));

    return;

  }

  return;

}






// ==== FUN_00180018 @0x180018 ====  [src: FUN__part4.c]


void FUN_00180018(long param_1)



{

  long lVar1;

  undefined1 auVar2 [16];

  

  FUN_00136588();

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029efa0(auVar2._0_8_,auVar2._8_8_,0,&cf_CadisCalendarStyle);

  _objc_release(auVar2._0_8_);

  FUN_00136604();

  FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar1 + 0x10))();

    _objc_release(lVar1);

  }

  FUN_0029b140(*(undefined8 *)(param_1 + 0x28));

  return;

}






// ==== FUN_001800bc @0x1800bc ====  [src: FUN__part4.c]


void FUN_001800bc(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined1 auVar3 [16];

  

  FUN_00136588();

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029efa0(auVar3._0_8_,auVar3._8_8_,*(long *)(param_1 + 0x30) + 10,&cf_CadisCalendarStyle);

  _objc_release(auVar3._0_8_);

  FUN_00136588();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_00136604();

  FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar2 + 0x10))();

    _objc_release(lVar2);

  }

  FUN_0029b140(*(undefined8 *)(param_1 + 0x28));

  return;

}






// ==== FUN_00180190 @0x180190 ====  [src: FUN__part4.c]


void FUN_00180190(long param_1)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  undefined8 local_28;

  

  auVar2 = _objc_alloc(&objc::class_t::CadisCustomStyleEditorViewController);

  auVar2 = FUN_00296c80(auVar2._0_8_,auVar2._8_8_,*(undefined8 *)(param_1 + 0x28));

  uVar1 = auVar2._0_8_;

  local_48 = PTR___NSConcreteStackBlock_003886f0;

  local_40 = 0xc2000000;

  local_38 = FUN_00180264;

  puStack_30 = &DAT_00388e60;

  local_28 = *(undefined8 *)(param_1 + 0x20);

  FUN_002a02a0(uVar1,auVar2._8_8_,&local_48);

  FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar2._0_8_,auVar2._8_8_,uVar1,1);

  _objc_release(auVar2._0_8_);

  _objc_release(uVar1);

  return;

}






// ==== FUN_00180264 @0x180264 ====  [src: FUN__part4.c]


void FUN_00180264(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  

  FUN_00136604();

  FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar1 + 0x10))();

    _objc_release(lVar1);

  }

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  return;

}






// ==== FUN_001802f8 @0x1802f8 ====  [src: FUN__part4.c]


void FUN_001802f8(long param_1,undefined8 param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 uStack_80;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf__TT,0,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc2000000;

  local_68 = FUN_001804c8;

  puStack_60 = &DAT_00388f20;

  uVar3 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar3);

  local_58 = uVar3;

  FUN_00291400(uVar2,extraout_x1,&local_78);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  local_b0 = puVar1;

  local_a8 = 0xc2000000;

  local_a0 = FUN_001804d4;

  puStack_98 = &DAT_00389020;

  _objc_retain(uVar2);

  local_88 = *(undefined8 *)(param_1 + 0x28);

  uStack_80 = *(undefined8 *)(param_1 + 0x30);

  local_90 = uVar2;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_b0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_02,uVar2,1,0);

  _objc_release(local_90);

  _objc_release(local_58);

  _objc_release(uVar2);

  return;

}






// ==== FUN_001804d4 @0x1804d4 ====  [src: FUN__part4.c]


void FUN_001804d4(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  lVar4 = FUN_00297fa0(uVar3);

  if (lVar4 != 0) {

    FUN_00167d7c();

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = FUN_00299020();

    _objc_release(uVar1);

    lVar4 = *(long *)(param_1 + 0x30);

    auVar6 = FUN_00293860(uVar2);

    if (lVar4 < auVar6._0_8_) {

      FUN_00299500(uVar2,auVar6._8_8_,*(undefined8 *)(param_1 + 0x30));

      uVar1 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_00299020();

      _objc_release(uVar1);

      FUN_002a00a0(uVar5,extraout_x1,uVar3,&cf_name);

      FUN_002a0040(uVar2,extraout_x1_00,uVar5,*(undefined8 *)(param_1 + 0x30));

      FUN_0017247c(uVar2);

      FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

      uVar1 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b140();

      _objc_release(uVar1);

      _objc_release(uVar5);

    }

    _objc_release(uVar2);

  }

  _objc_release(uVar3);

  return;

}






// ==== FUN_0018068c @0x18068c ====  [src: FUN__part4.c]


void FUN_0018068c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  FUN_00167d7c();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00299020();

  _objc_release(uVar1);

  auVar4 = FUN_00299020(*(undefined8 *)(param_1 + 0x20));

  uVar1 = auVar4._0_8_;

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar4._8_8_,&cf__);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a00a0(uVar1,auVar4._8_8_,auVar4._0_8_,&cf_name);

  _objc_release(auVar4._0_8_);

  FUN_00291240(uVar2,extraout_x1,uVar1);

  FUN_0017247c(uVar2);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  _objc_release(uVar1);

  _objc_release(uVar2);

  return;

}






// ==== FUN_001807ac @0x1807ac ====  [src: FUN__part4.c]


void FUN_001807ac(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined1 auVar5 [16];

  

  FUN_00167d7c();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00299020();

  _objc_release(uVar1);

  lVar4 = *(long *)(param_1 + 0x28);

  auVar5 = FUN_00293860(uVar2);

  if (auVar5._0_8_ <= lVar4) goto LAB_001808d4;

  FUN_0029b480(uVar2,auVar5._8_8_,*(undefined8 *)(param_1 + 0x28));

  FUN_0017247c(uVar2);

  lVar3 = FUN_00138258();

  lVar4 = *(long *)(param_1 + 0x28) + 10;

  if (lVar3 == lVar4) {

    FUN_00136588();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar5._0_8_;

    FUN_0029efa0(uVar1,auVar5._8_8_,0,&cf_CadisCalendarStyle);

LAB_00180868:

    _objc_release(uVar1);

  }

  else if (lVar4 < lVar3) {

    FUN_00136588();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar5._0_8_;

    FUN_0029efa0(uVar1,auVar5._8_8_,lVar3 + -1,&cf_CadisCalendarStyle);

    goto LAB_00180868;

  }

  FUN_00136604();

  FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar4 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar4 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar4 + 0x10))();

    _objc_release(lVar4);

  }

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

LAB_001808d4:

  _objc_release(uVar2);

  return;

}






// ==== FUN_00180c0c @0x180c0c ====  [src: FUN__part4.c]


void FUN_00180c0c(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar2 + 0x10))();

    _objc_release(lVar2);

    return;

  }

  return;

}






// ==== FUN_001815fc @0x1815fc ====  [src: FUN__part4.c]


/* WARNING: Type propagation algorithm not settling */



void FUN_001815fc(long param_1)



{

  bool bVar1;

  uint uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  long lVar8;

  undefined8 uVar9;

  float fVar10;

  float fVar11;

  double dVar12;

  double dVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  long local_88 [2];

  undefined2 local_72;

  

  lVar3 = _objc_loadWeakRetained(param_1 + 0x48);

  if (lVar3 == 0) goto LAB_00181bd4;

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00299500(auVar14._0_8_,auVar14._8_8_,0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  fVar10 = (float)FUN_00295480();

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(auVar14._0_8_);

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00299500(auVar14._0_8_,auVar14._8_8_,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  fVar11 = (float)FUN_00295480();

  dVar13 = (double)fVar11;

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(auVar14._0_8_);

  if (fVar11 <= 0.0) {

    dVar13 = 100.0;

  }

  dVar12 = 50.0;

  if (50.0 <= dVar13) {

    dVar12 = dVar13;

  }

  dVar13 = 150.0;

  if (dVar12 <= 150.0) {

    dVar13 = dVar12;

  }

  auVar14 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x28));

  if (auVar14._0_8_ == 0) {

    lVar8 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x40));

    uVar2 = 0;

    bVar1 = lVar8 != 0;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar14._8_8_,&cf___0f);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar14._8_8_,&cf___0f);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    auVar15 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x30));

    uVar4 = auVar15._8_8_;

    if (auVar15._0_8_ == 0) {

LAB_00181860:

      FUN_0029b4a0(*(undefined8 *)(param_1 + 0x38),uVar4,&cf_bgHeight);

      FUN_0029b4a0(*(undefined8 *)(param_1 + 0x38),extraout_x1_01,&cf_contentScale);

      FUN_002993a0((double)fVar10,&_OBJC_CLASS___NSNumber);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(*(undefined8 *)(param_1 + 0x38),auVar15._8_8_,auVar15._0_8_,&cf_of_);

      _objc_release(auVar15._0_8_);

      FUN_002993a0(dVar13,&_OBJC_CLASS___NSNumber);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(*(undefined8 *)(param_1 + 0x38),auVar15._8_8_,auVar15._0_8_,&cf_Q___>e);

      _objc_release(auVar15._0_8_);

      local_88[0] = 0;

      FUN_00294080(&_OBJC_CLASS___NSJSONSerialization,extraout_x1_02,*(undefined8 *)(param_1 + 0x38)

                   ,1,local_88);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      lVar8 = local_88[0];

      _objc_retain(local_88[0]);

      uVar2 = 0;

      if ((lVar7 != 0) && (lVar8 == 0)) {

        uVar2 = FUN_002a6580(lVar7,extraout_x1_03,*(undefined8 *)(param_1 + 0x28),1);

      }

      _objc_release(lVar7);

      _objc_release(lVar8);

    }

    else {

      local_72 = 0;

      uVar9 = *(undefined8 *)(param_1 + 0x30);

      _objc_retain(uVar9);

      FUN_00181cdc(uVar9,&cf_of_,auVar14._0_8_,(long)&local_72 + 1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar9);

      FUN_00181cdc(uVar4,&cf_Q___>e,uVar5,&local_72);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar4);

      if ((local_72._1_1_ != '\x01') || ((local_72 & 1) == 0)) {

LAB_00181858:

        _objc_release(uVar9);

        uVar4 = extraout_x1_00;

        goto LAB_00181860;

      }

      auVar15 = FUN_00297fa0(uVar9);

      if (auVar15._0_8_ == 0) goto LAB_00181858;

      local_88[1] = 0;

      uVar6 = FUN_002a65a0(uVar9,auVar15._8_8_,*(undefined8 *)(param_1 + 0x28),1,4,local_88 + 1);

      _objc_release(uVar9);

      uVar4 = extraout_x1;

      if ((uVar6 & 1) == 0) goto LAB_00181860;

      uVar2 = 1;

    }

    _objc_release(uVar5);

    _objc_release(auVar14._0_8_);

    bVar1 = false;

  }

  FUN_00167d7c();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = FUN_00299020();

  _objc_release(uVar4);

  lVar8 = *(long *)(param_1 + 0x50);

  auVar14 = FUN_00293860(uVar5);

  if (lVar8 < auVar14._0_8_) {

    FUN_00299500(uVar5,auVar14._8_8_,*(undefined8 *)(param_1 + 0x50));

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar9 = FUN_00299020();

    _objc_release(uVar4);

    FUN_002993a0((double)fVar10,&_OBJC_CLASS___NSNumber);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar9,auVar14._8_8_,auVar14._0_8_,&cf_bgHeight);

    _objc_release(auVar14._0_8_);

    FUN_002993a0(dVar13,&_OBJC_CLASS___NSNumber);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar9,auVar14._8_8_,auVar14._0_8_,&cf_contentScale);

    _objc_release(auVar14._0_8_);

    FUN_002a0040(uVar5,extraout_x1_04,uVar9,*(undefined8 *)(param_1 + 0x50));

    FUN_0017247c(uVar5);

    _objc_release(uVar9);

  }

  FUN_00136604();

  FUN_001728f8();

  FUN_002995c0(lVar3);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar8 != 0) {

    FUN_002995c0(lVar3);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar8 + 0x10))();

    _objc_release(lVar8);

  }

  FUN_002a4dc0(lVar3);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar4);

  if (bVar1) {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_05,&cf__OX_0R7h_,

                 &cf_aSGrvU__RdMn_NU__WS_MR7h__NNOQVaSGrS0Yg_OeN_v___uaSGrOaSGr__vMn_v0,1);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar14._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar14._8_8_,&cf__Y,0,0);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar14._8_8_,auVar14._0_8_);

    _objc_release(auVar14._0_8_);

    FUN_0029a500(lVar3,extraout_x1_06,uVar4,1,0);

LAB_00181bc4:

    _objc_release(uVar4);

  }

  else {

    auVar14 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x28));

    if (auVar14._0_8_ != 0 && (uVar2 & 1) == 0) {

      FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar14._8_8_,&cf_Mn__fX_,&cf_elQeQaSGr,1);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar14._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar14._8_8_,&cf__Y,0,0);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar4,auVar14._8_8_,auVar14._0_8_);

      _objc_release(auVar14._0_8_);

      FUN_0029a500(lVar3,extraout_x1_07,uVar4,1,0);

      goto LAB_00181bc4;

    }

  }

  _objc_release(uVar5);

LAB_00181bd4:

  _objc_release(lVar3);

  return;

}






// ==== FUN_001828e8 @0x1828e8 ====  [src: FUN__part4.c]


void FUN_001828e8(long param_1)



{

  FUN_0016a5a8(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),

               *(long *)(param_1 + 0x30) + -1);

  return;

}






// ==== FUN_001828fc @0x1828fc ====  [src: FUN__part4.c]


void FUN_001828fc(long param_1)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x28);

  if (lVar1 != 0) {

    FUN_0029a580(lVar1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

      FUN_002a6220(lVar1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6520();

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar3);

      if (lVar2 == 0) {

        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();

      }

    }

    else {

      _objc_release();

    }

  }

  _objc_release(lVar1);

  return;

}






// ==== FUN_001836f8 @0x1836f8 ====  [src: FUN__part4.c]


void FUN_001836f8(void)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar4 [16];

  

  if (DAT_003e8a58 == 0) {

    _objc_alloc(&_OBJC_CLASS___UIView);

    lVar1 = FUN_00296b80(0,0,0x3ff0000000000000,0x3ff0000000000000);

    lVar3 = DAT_003e8a58;

    DAT_003e8a58 = lVar1;

    _objc_release(lVar3);

    FUN_0029e8a0(DAT_003e8a58,extraout_x1,1);

    FUN_002a23c0(DAT_003e8a58,extraout_x1_00,0);

    FUN_00297e40(DAT_003e8a58);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a2860(0xc0c3880000000000);

    _objc_release(uVar2);

  }

  FUN_002a4880(DAT_003e8a58);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 != 0) {

    return;

  }

  FUN_00182fa0();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  lVar3 = auVar4._0_8_;

  if (lVar3 != 0) {

    FUN_00291380(lVar3,auVar4._8_8_,DAT_003e8a58);

  }

  _objc_release(lVar3);

  return;

}






// ==== FUN_00183a94 @0x183a94 ====  [src: FUN__part4.c]


void FUN_00183a94(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  double local_58;

  double local_50;

  double local_48;

  double local_40;

  double local_38;

  

  _objc_retain();

  if (param_1 == 0) {

    pcVar3 = &cf_rgba_0_0_0_0_;

  }

  else {

    _objc_retain(param_1);

    FUN_00293e40(&_OBJC_CLASS___UITraitCollection);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b8e0(param_1,auVar5._8_8_,auVar5._0_8_);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(param_1);

    _objc_release(auVar5._0_8_);

    local_40 = 0.0;

    local_38 = 0.0;

    local_50 = 0.0;

    local_48 = 0.0;

    auVar5 = FUN_00295ac0(uVar2,extraout_x1,&local_38,&local_40,&local_48,&local_50);

    uVar4 = auVar5._8_8_;

    if ((auVar5._0_8_ & 1) == 0) {

      local_58 = 0.0;

      iVar1 = FUN_00295bc0(uVar2,uVar4,&local_58,&local_50);

      uVar4 = extraout_x1_00;

      if (iVar1 != 0) {

        local_40 = local_58;

        local_38 = local_58;

        local_48 = local_58;

      }

    }

    FUN_002a4680(&_OBJC_CLASS___NSString,uVar4,&cf_rgba__d__d__d___3f_);

    pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar3);

  return;

}






// ==== FUN_00183c4c @0x183c4c ====  [src: FUN__part4.c]


void FUN_00183c4c(undefined8 param_1)



{

  char cVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  char *pcVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

  if (((uVar3 & 1) != 0) && (lVar4 = FUN_00297fa0(param_1), lVar4 != 0)) {

    _objc_retainAutorelease(param_1);

    auVar6 = FUN_00290c40();

    pcVar5 = auVar6._0_8_;

    if (pcVar5 != (char *)0x0) {

      cVar1 = *pcVar5;

      while (cVar1 != '\0') {

        pcVar5 = pcVar5 + 1;

        cVar1 = *pcVar5;

      }

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar6._8_8_,&cf_s_016llx);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      goto LAB_00183cfc;

    }

  }

  uVar2 = 0;

LAB_00183cfc:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}






// ==== FUN_00183d4c @0x183d4c ====  [src: FUN__part4.c]


undefined8 FUN_00183d4c(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  undefined8 local_120;

  long lStack_118;

  long *local_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);

  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00297fa0(param_1), lVar3 == 0)) {

    uVar1 = 0;

  }

  else {

    uStack_f8 = 0;

    local_100 = 0;

    uStack_e8 = 0;

    uStack_f0 = 0;

    lStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    local_110 = (long *)0x0;

    _objc_retain(param_2);

    auVar5 = FUN_00293880(param_2,extraout_x1,&local_120,auStack_d8,0x10);

    uVar1 = 0;

    if (auVar5._0_8_ != 0) {

      lVar3 = *local_110;

      do {

        uVar1 = auVar5._8_8_;

        lVar4 = 0;

        do {

          if (*local_110 != lVar3) {

            _objc_enumerationMutation(param_2);

            uVar1 = extraout_x1_00;

          }

          auVar6 = FUN_0029aba0(param_1,uVar1,*(undefined8 *)(lStack_118 + lVar4 * 8));

          uVar1 = auVar6._8_8_;

          if (auVar6._0_8_ != 0x7fffffffffffffff) {

            uVar1 = 1;

            goto LAB_00183e5c;

          }

          lVar4 = lVar4 + 1;

        } while (auVar5._0_8_ != lVar4);

        auVar5 = FUN_00293880(param_2,uVar1,&local_120,auStack_d8,0x10);

      } while (auVar5._0_8_ != 0);

      uVar1 = 0;

    }

LAB_00183e5c:

    _objc_release(param_2);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return uVar1;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_001866d8 @0x1866d8 ====  [src: FUN__part4.c]


void FUN_001866d8(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined1 auVar2 [16];

  

  FUN_0029efa0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30),

               &cf_grayTestStackMinCount);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  uVar1 = *(undefined8 *)(param_1 + 0x28);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_S>ewYpe__N);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a3940(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  return;

}






// ==== FUN_00186904 @0x186904 ====  [src: FUN__part4.c]


void FUN_00186904(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),extraout_x1,param_2,&cf_grayTestBorderSelectedLight);

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,param_3,&cf_grayTestBorderSelectedDark

              );

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}






// ==== FUN_00186b40 @0x186b40 ====  [src: FUN__part4.c]


void FUN_00186b40(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),extraout_x1,param_2,&cf_grayTestBorderUnselectedLight

              );

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,param_3,

               &cf_grayTestBorderUnselectedDark);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}






// ==== FUN_00186ed0 @0x186ed0 ====  [src: FUN__part4.c]


void FUN_00186ed0(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  float fVar4;

  float fVar5;

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  fVar4 = (float)FUN_00295480();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  fVar5 = 0.0;

  if (0.0 < fVar4) {

    fVar5 = fVar4;

  }

  fVar4 = 50.0;

  if (fVar5 <= 50.0) {

    fVar4 = fVar5;

  }

  FUN_0029e500(fVar4,*(undefined8 *)(param_1 + 0x28),extraout_x1,&cf_grayTestBorderCornerRadius);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  uVar1 = *(undefined8 *)(param_1 + 0x30);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_W__N);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a3940(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  return;

}






// ==== FUN_001872cc @0x1872cc ====  [src: FUN__part4.c]


void FUN_001872cc(undefined8 param_1,undefined8 param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined8 local_120;

  long lStack_118;

  long *local_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a5f80(param_2);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar7._0_8_,auVar7._8_8_,&cf_keys);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  uStack_f8 = 0;

  local_100 = 0;

  uStack_e8 = 0;

  uStack_f0 = 0;

  lStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  local_110 = (long *)0x0;

  _objc_retain(uVar2);

  auVar7 = FUN_00293880(uVar2,extraout_x1,&local_120,auStack_d8,0x10);

  if (auVar7._0_8_ != 0) {

    lVar5 = *local_110;

    do {

      uVar3 = auVar7._8_8_;

      lVar6 = 0;

      do {

        if (*local_110 != lVar5) {

          _objc_enumerationMutation(uVar2);

          uVar3 = extraout_x1_00;

        }

        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);

        auVar8 = FUN_00295f60(uVar4,uVar3,&cf_grayTest);

        if (((auVar8._0_8_ & 1) != 0) ||

           (iVar1 = FUN_00297820(uVar4,auVar8._8_8_,&cf_coversEnabled), iVar1 != 0)) {

          DAT_003e8d30 = 0;

          FUN_00187694();

          goto LAB_001873f0;

        }

        lVar6 = lVar6 + 1;

        uVar3 = extraout_x1_01;

      } while (auVar7._0_8_ != lVar6);

      auVar7 = FUN_00293880(uVar2,extraout_x1_01,&local_120,auStack_d8,0x10);

    } while (auVar7._0_8_ != 0);

  }

LAB_001873f0:

  _objc_release(uVar2);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_58) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}






// ==== FUN_00187474 @0x187474 ====  [src: FUN__part4.c]


void FUN_00187474(void)



{

  undefined8 uVar1;

  

  FUN_00187694();

  uVar1 = _objc_getClass("MMAssetPickerController");

  _MSHookMessageEx(uVar1,"viewDidAppear:",FUN_00187898,&DAT_003e8cc0);

  uVar1 = _objc_getClass("MsgMediaGroupMgr");

  _MSHookMessageEx(uVar1,"isSenderEnabled",FUN_001879d0,&DAT_003e8cc8);

  _MSHookMessageEx(uVar1,"isReceiverEnabled",FUN_00187a20,&DAT_003e8cd0);

  _objc_getClass("MsgMediaGroupCombineSendView");

  uVar1 = _object_getClass();

  _MSHookMessageEx(uVar1,"minCount",FUN_00187a70,&DAT_003e8cd8);

  uVar1 = _objc_getClass("MMAssetPickerController");

  _MSHookMessageEx(uVar1,"isCombineSendHidden",FUN_00187ac4,&DAT_003e8ce0);

  _MSHookMessageEx(uVar1,"setCombineSendHidden:animated:",FUN_00187b24,&DAT_003e8ce8);

  uVar1 = _objc_getClass("MMImagePreviewBrowserController");

  _MSHookMessageEx(uVar1,"isCombineSendHidden",FUN_00187bc8,&DAT_003e8cf0);

  uVar1 = _objc_getClass("MsgMediaGroupView");

  _MSHookMessageEx(uVar1,"configureWithMediaGroup:index:",FUN_00187cf8,&DAT_003e8cf8);

  _MSHookMessageEx(uVar1,"handlePan:",FUN_00187d6c,&DAT_003e8d00);

  _MSHookMessageEx(uVar1,"updateViewsForPanProgress:",FUN_00187dd8,&DAT_003e8d08);

  _MSHookMessageEx(uVar1,"checkVisibleNodeViews",FUN_00187e04,&DAT_003e8d10);

  _MSHookMessageEx(uVar1,"continueFinishAnimation",FUN_00187e30,&DAT_003e8d18);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00187e5c,&DAT_003e8d20);

  uVar1 = _objc_getClass("MsgMediaGroupCard");

  _MSHookMessageEx(uVar1,"initWithFrame:viewModel:",FUN_00187e88,&DAT_003e8d28);

  return;

}






// ==== FUN_00187694 @0x187694 ====  [src: FUN__part4.c]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */



void FUN_00187694(void)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar4;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  float fVar5;

  undefined1 auVar6 [16];

  

  if ((DAT_003e8d30 & 1) != 0) {

    return;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar6._0_8_;

  iVar1 = FUN_002924c0(uVar2,auVar6._8_8_,&cf_coversEnabled);

  if (iVar1 == 0) {

    DAT_003e8d31 = 0;

    DAT_003e8d32 = 0;

    DAT_003e8d33 = 0;

    uVar4 = extraout_x1;

  }

  else {

    DAT_003e8d31 = FUN_002924c0(uVar2,extraout_x1,&cf_grayTestImageStackEnabled);

    DAT_003e8d32 = FUN_002924c0(uVar2,extraout_x1_00,&cf_grayTestStackCheckEnabled);

    DAT_003e8d33 = FUN_002924c0(uVar2,extraout_x1_01,&cf_grayTestOriginalImageEnabled);

    uVar4 = extraout_x1_02;

  }

  auVar6 = FUN_00297480(uVar2,uVar4,&cf_grayTestStackMinCount);

  _DAT_003e6e10 = 3;

  if (0xfffffffffffffff7 < auVar6._0_8_ - 10U) {

    _DAT_003e6e10 = auVar6._0_8_;

  }

  DAT_003e8d34 = FUN_002924c0(uVar2,auVar6._8_8_,&cf_grayTestImageBlurEnabled);

  DAT_003e8d35 = FUN_002924c0(uVar2,extraout_x1_03,&cf_grayTestCardBorderEnabled);

  FUN_002a45e0(uVar2,extraout_x1_04,&cf_grayTestBorderSelectedLight);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8ca0;

  DAT_003e8ca0 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_05,&cf_grayTestBorderSelectedDark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8ca8;

  DAT_003e8ca8 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_06,&cf_grayTestBorderUnselectedLight);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8cb0;

  DAT_003e8cb0 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_07,&cf_grayTestBorderUnselectedDark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8cb8;

  DAT_003e8cb8 = uVar3;

  _objc_release(uVar4);

  fVar5 = (float)FUN_00295460(uVar2,extraout_x1_08,&cf_grayTestBorderCornerRadius);

  DAT_003e6e18 = (double)fVar5;

  if (fVar5 <= 0.0) {

    DAT_003e6e18 = 8.0;

  }

  DAT_003e8d30 = 1;

  _objc_release(uVar2);

  return;

}






// ==== FUN_00187898 @0x187898 ====  [src: FUN__part4.c]


void FUN_00187898(undefined8 param_1)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar3;

  undefined8 extraout_x1_01;

  undefined1 auVar4 [16];

  

  (*DAT_003e8cc0)();

  FUN_00187694();

  if (DAT_003e8d33 == '\x01') {

    FUN_002a6080(param_1,extraout_x1,&cf_controlCenter);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar4._8_8_;

    lVar1 = auVar4._0_8_;

    if (lVar1 != 0) {

      FUN_002a24a0(lVar1,uVar3,PTR____kCFBooleanTrue_00388320,&cf_isOriginalImage);

      uVar3 = extraout_x1_00;

    }

    FUN_002a24a0(param_1,uVar3,PTR____kCFBooleanTrue_00388320,&cf_isOriginSelected);

    FUN_002a6080(param_1,extraout_x1_01,&cf_m_originImageCheck);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    lVar2 = auVar4._0_8_;

    if (lVar2 != 0) {

      FUN_002a1120(lVar2,auVar4._8_8_,1);

    }

    _objc_release(lVar2);

    _objc_release(lVar1);

    return;

  }

  return;

}






// ==== FUN_001879d0 @0x1879d0 ====  [src: FUN__part4.c]


undefined8 FUN_001879d0(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_00187694();

  if ((DAT_003e8d31 & 1) != 0) {

    return 1;

  }

                    /* WARNING: Could not recover jumptable at 0x00187a1c. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  uVar1 = (*DAT_003e8cc8)(param_1,param_2);

  return uVar1;

}






// ==== FUN_00187a20 @0x187a20 ====  [src: FUN__part4.c]


undefined8 FUN_00187a20(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_00187694();

  if ((DAT_003e8d31 & 1) != 0) {

    return 1;

  }

                    /* WARNING: Could not recover jumptable at 0x00187a6c. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  uVar1 = (*DAT_003e8cd0)(param_1,param_2);

  return uVar1;

}






// ==== FUN_00187a70 @0x187a70 ====  [src: FUN__part4.c]


ulong FUN_00187a70(undefined8 param_1,undefined8 param_2)



{

  ulong uVar1;

  

  FUN_00187694();

  if ((DAT_003e8d31 & 1) != 0) {

    return (ulong)DAT_003e6e10;

  }

                    /* WARNING: Could not recover jumptable at 0x00187ac0. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  uVar1 = (*DAT_003e8cd8)(param_1,param_2);

  return uVar1;

}






// ==== FUN_00187ac4 @0x187ac4 ====  [src: FUN__part4.c]


undefined8 FUN_00187ac4(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_00187694();

  if ((DAT_003e8d31 == '\x01') && ((DAT_003e8d32 & 1) != 0)) {

    return 0;

  }

                    /* WARNING: Could not recover jumptable at 0x00187b20. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  uVar1 = (*DAT_003e8ce0)(param_1,param_2);

  return uVar1;

}






// ==== FUN_00187b24 @0x187b24 ====  [src: FUN__part4.c]


void FUN_00187b24(undefined8 param_1,undefined8 param_2,ulong param_3)



{

  dispatch_time_t dVar1;

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  undefined8 local_28;

  

  (*DAT_003e8ce8)();

  FUN_00187694();

  if ((((param_3 & 1) == 0) && ((DAT_003e8d31 & 1) != 0)) && ((DAT_003e8d32 & 1) != 0)) {

    dVar1 = _dispatch_time(0,500000000);

    local_48 = PTR___NSConcreteStackBlock_003886f0;

    local_40 = 0xc0000000;

    local_38 = FUN_00187fe8;

    puStack_30 = &DAT_0038abe0;

    local_28 = param_1;

    _dispatch_after(dVar1,PTR___dispatch_main_q_00388740,&local_48);

  }

  return;

}






// ==== FUN_00187bc8 @0x187bc8 ====  [src: FUN__part4.c]


undefined8 FUN_00187bc8(undefined8 param_1,undefined8 param_2)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  

  FUN_00187694();

  if ((DAT_003e8d31 == '\x01') && ((DAT_003e8d32 & 1) != 0)) {

    FUN_002a6080(param_1,extraout_x1,&cf_selectedAssetInfos);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if ((lVar1 == 0) || (lVar2 = FUN_00293860(lVar1), lVar2 == 0)) {

      uVar3 = (*DAT_003e8cf0)(param_1,param_2);

      _objc_release(lVar1);

    }

    else {

      _objc_release(lVar1);

      uVar3 = 0;

    }

    return uVar3;

  }

                    /* WARNING: Could not recover jumptable at 0x00187c60. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  uVar3 = (*DAT_003e8cf0)(param_1,param_2);

  return uVar3;

}






// ==== FUN_00187cf8 @0x187cf8 ====  [src: FUN__part4.c]


void FUN_00187cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  _objc_retain(param_3);

  (*DAT_003e8cf8)(param_1,param_2,param_3,param_4);

  FUN_001880c4(param_1);

  _objc_release(param_3);

  return;

}






// ==== FUN_00187d6c @0x187d6c ====  [src: FUN__part4.c]


void FUN_00187d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  _objc_retain(param_3);

  (*DAT_003e8d00)(param_1,param_2,param_3);

  FUN_001880c4(param_1);

  _objc_release(param_3);

  return;

}






// ==== FUN_00187dd8 @0x187dd8 ====  [src: FUN__part4.c]


void FUN_00187dd8(undefined8 param_1)



{

  (*DAT_003e8d08)();

  FUN_001880c4(param_1);

  return;

}






// ==== FUN_00187e04 @0x187e04 ====  [src: FUN__part4.c]


void FUN_00187e04(undefined8 param_1)



{

  (*DAT_003e8d10)();

  FUN_001880c4(param_1);

  return;

}






// ==== FUN_00187e30 @0x187e30 ====  [src: FUN__part4.c]


void FUN_00187e30(undefined8 param_1)



{

  (*DAT_003e8d18)();

  FUN_001880c4(param_1);

  return;

}






// ==== FUN_00187e5c @0x187e5c ====  [src: FUN__part4.c]


void FUN_00187e5c(undefined8 param_1)



{

  (*DAT_003e8d20)();

  FUN_001880c4(param_1);

  return;

}






// ==== FUN_00187e88 @0x187e88 ====  [src: FUN__part4.c]


long FUN_00187e88(void)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  lVar1 = (*DAT_003e8d28)();

  FUN_00187694();

  if (((lVar1 != 0) && ((DAT_003e8d31 & 1) != 0)) && ((DAT_003e8d35 & 1) != 0)) {

    _objc_retain(lVar1);

    uVar3 = DAT_003e6e18;

    FUN_00297e40(lVar1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(uVar3);

    _objc_release(uVar2);

    FUN_00297e40(lVar1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0e0(0x4004000000000000);

    _objc_release(uVar3);

    FUN_00188558(1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar2 = FUN_00290a20();

    FUN_00297e40(lVar1);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0a0(auVar4._0_8_,auVar4._8_8_,uVar2);

    _objc_release(auVar4._0_8_);

    _objc_release(uVar3);

    FUN_0029d4a0(lVar1,extraout_x1,1);

    _objc_release(lVar1);

  }

  return lVar1;

}






// ==== FUN_00187fe8 @0x187fe8 ====  [src: FUN__part4.c]


void FUN_00187fe8(long param_1,undefined8 param_2)



{

  long lVar1;

  long lVar2;

  undefined1 auVar3 [16];

  

  FUN_002a6080(*(undefined8 *)(param_1 + 0x20),param_2,&cf_combineSendView);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  lVar1 = auVar3._0_8_;

  if (lVar1 != 0) {

    FUN_002a6080(lVar1,auVar3._8_8_,&cf_contentView);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if ((lVar2 != 0) && (auVar3 = FUN_00297a40(lVar2), (auVar3._0_8_ & 1) == 0)) {

      FUN_0029c5a0(lVar2,auVar3._8_8_,0x40);

    }

    _objc_release(lVar2);

  }

  _objc_release(lVar1);

  return;

}






// ==== FUN_001880c4 @0x1880c4 ====  [src: FUN__part4.c]


void FUN_001880c4(undefined8 param_1)



{

  byte bVar1;

  char cVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

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

  long lVar10;

  double dVar11;

  double dVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined8 local_90;

  undefined8 local_88;

  

  _objc_retain();

  FUN_00187694();

  cVar2 = DAT_003e8d35;

  bVar1 = DAT_003e8d34;

  if (((DAT_003e8d31 & 1) != 0) && (DAT_003e8d34 != 0 || DAT_003e8d35 != '\0')) {

    FUN_002a6080(param_1,extraout_x1,&cf_currentIndex);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_002984c0();

    _objc_release(uVar3);

    FUN_002a6080(param_1,extraout_x1_00,&cf_itemList);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    if (((bVar1 & 1) != 0) || (lVar6 = DAT_003e6e20, lVar4 != DAT_003e6e20)) {

      if (cVar2 == '\0') {

        local_90 = 0;

        local_88 = 0;

      }

      else {

        FUN_00188558(1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        local_88 = FUN_00290a20();

        _objc_release(uVar5);

        FUN_00188558(0);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        local_90 = FUN_00290a20();

        _objc_release(uVar5);

      }

      lVar10 = 0;

      while( true ) {

        auVar13 = FUN_00293860(uVar3);

        lVar6 = lVar4;

        if (auVar13._0_8_ <= lVar10) break;

        FUN_00299500(uVar3,auVar13._8_8_,lVar10);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_002a6080(auVar13._0_8_,auVar13._8_8_,&cf_view);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        uVar5 = DAT_003e6e18;

        if (lVar6 != 0) {

          if (cVar2 != '\0') {

            FUN_00297e40(lVar6);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d820(uVar5);

            _objc_release(uVar7);

            FUN_00297e40(lVar6);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0e0(0x4004000000000000);

            _objc_release(uVar5);

            FUN_00297e40(lVar6);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            uVar5 = local_88;

            if (lVar4 != lVar10) {

              uVar5 = local_90;

            }

            FUN_0029d0a0(auVar14._0_8_,auVar14._8_8_,uVar5);

            _objc_release(auVar14._0_8_);

          }

          if (bVar1 != 0) {

            _objc_retain(lVar6);

            FUN_002a62a0(lVar6,extraout_x1_01,0x135257f);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar8 == 0) {

              FUN_00294b00(&_OBJC_CLASS___UIBlurEffect,extraout_x1_02,0);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              auVar14 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

              auVar14 = FUN_00296b00(auVar14._0_8_,auVar14._8_8_,uVar5);

              uVar7 = auVar14._0_8_;

              FUN_002a1c80(uVar7,auVar14._8_8_,0x135257f);

              FUN_002925a0(lVar6);

              FUN_0029e5e0(uVar7);

              FUN_0029ce00(uVar7,extraout_x1_03,0x12);

              FUN_002a23c0(uVar7,extraout_x1_04,0);

              FUN_00297e40(uVar7);

              uVar9 = _objc_retainAutoreleasedReturnValue();

              FUN_0029d820(0x4020000000000000);

              _objc_release(uVar9);

              FUN_0029d4a0(uVar7,extraout_x1_05,1);

              FUN_0029cb60(0,uVar7);

              FUN_00291380(lVar6,extraout_x1_06,uVar7);

              _objc_release(uVar7);

              _objc_release(uVar5);

            }

            _objc_release(lVar6);

            FUN_002a62a0(lVar6,extraout_x1_07,0x135257f);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            if (lVar10 - lVar4 < 1) {

              if (lVar8 != 0) {

                FUN_0029cb60(0,lVar8);

              }

            }

            else if (lVar8 != 0) {

              dVar11 = (double)(ulong)(lVar10 - lVar4) * 0.7;

              dVar12 = 1.0;

              if (dVar11 <= 1.0) {

                dVar12 = dVar11;

              }

              FUN_0029cb60(dVar12,lVar8);

              FUN_002925e0(lVar6,extraout_x1_08,lVar8);

            }

            _objc_release(lVar8);

          }

        }

        _objc_release(lVar6);

        _objc_release(auVar13._0_8_);

        lVar10 = lVar10 + 1;

      }

    }

    DAT_003e6e20 = lVar6;

    _objc_release(uVar3);

  }

  _objc_release(param_1);

  return;

}






// ==== FUN_00188558 @0x188558 ====  [src: FUN__part4.c]


void FUN_00188558(int param_1)



{

  long *plVar1;

  long *plVar2;

  uint uVar3;

  bool bVar4;

  int iVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 extraout_x1;

  uint uVar8;

  uint uVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  double dVar14;

  undefined1 auVar15 [16];

  uint local_44;

  

  iVar5 = FUN_001331c4();

  plVar2 = &DAT_003e8ca8;

  if (param_1 == 0) {

    plVar2 = &DAT_003e8cb8;

  }

  plVar1 = &DAT_003e8ca0;

  if (param_1 == 0) {

    plVar1 = &DAT_003e8cb0;

  }

  if (iVar5 == 0) {

    plVar2 = plVar1;

  }

  lVar10 = *plVar2;

  _objc_retain(lVar10);

  _objc_retain(lVar10);

  if ((lVar10 == 0) || (auVar15 = FUN_00297fa0(lVar10), auVar15._0_8_ == 0)) {

    _objc_release(lVar10);

  }

  else {

    FUN_002a4560(lVar10,auVar15._8_8_,&cf__,&cf___);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar10);

    local_44 = 0;

    FUN_0029be20(&_OBJC_CLASS___NSScanner,extraout_x1,uVar6);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029bde0(auVar15._0_8_,auVar15._8_8_,&local_44);

    _objc_release(auVar15._0_8_);

    lVar7 = FUN_00297fa0(uVar6);

    uVar9 = local_44 >> 8;

    if (lVar7 == 8) {

      uVar3 = local_44 >> 0x18;

      dVar14 = (double)(local_44 & 0xff) / 255.0;

      uVar8 = uVar9;

      uVar9 = local_44 >> 0x10;

    }

    else {

      uVar3 = local_44 >> 0x10 & 0xff;

      dVar14 = 1.0;

      uVar8 = local_44;

    }

    FUN_00293040((double)uVar3 / 255.0,(double)(uVar9 & 0xff) / 255.0,(double)(uVar8 & 0xff) / 255.0

                 ,dVar14,&_OBJC_CLASS___UIColor);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar6);

    if (lVar7 != 0) goto LAB_00188714;

  }

  bVar4 = param_1 == 0;

  uVar12 = 0x3fc999999999999a;

  uVar6 = uVar12;

  if (bVar4) {

    uVar6 = 0x3feccccccccccccd;

  }

  uVar11 = 0x3fe999999999999a;

  if (bVar4) {

    uVar11 = uVar12;

  }

  uVar13 = 0x3fd3333333333333;

  if (bVar4) {

    uVar13 = uVar12;

  }

  FUN_00293040(uVar6,uVar11,uVar13,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

  lVar7 = _objc_retainAutoreleasedReturnValue();

LAB_00188714:

  _objc_release(lVar10);

  _objc_autoreleaseReturnValue(lVar7);

  return;

}






// ==== FUN_00188778 @0x188778 ====  [src: FUN__part4.c]


void FUN_00188778(void)



{

  int iVar1;

  undefined8 uVar2;

  

  iVar1 = FUN_00188834();

  if (iVar1 != 0) {

    uVar2 = _objc_getClass("MenuButton");

    _MSHookMessageEx(uVar2,"setTargetWidth:",FUN_001888d0,&DAT_003e8d38);

    uVar2 = _objc_getClass("NewMainFrameCell");

    _MSHookMessageEx(uVar2,"onMenuOffsetChange:menuWidth:",FUN_00188920,&DAT_003e8d40);

    _MSHookMessageEx(uVar2,"layoutSubviews",FUN_00188994,&DAT_003e8d48);

    _MSHookMessageEx(uVar2,"updateMoreMenu:",FUN_00188e38,&DAT_003e8d50);

    return;

  }

  return;

}






// ==== FUN_00188834 @0x188834 ====  [src: FUN__part4.c]


undefined1 FUN_00188834(void)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  if ((DAT_003e8d58 & 1) == 0) {

    DAT_003e8d58 = 1;

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar4._0_8_;

    iVar1 = FUN_002924c0(uVar2,auVar4._8_8_,&cf_xzyHomeNameplateEnabled);

    if (iVar1 == 0) {

      DAT_003e8d59 = false;

    }

    else {

      lVar3 = FUN_00297480(uVar2,extraout_x1,&cf_xzyHomeNameplateMethod);

      DAT_003e8d59 = lVar3 == 1;

    }

    _objc_release(uVar2);

  }

  return DAT_003e8d59;

}






// ==== FUN_001888d0 @0x1888d0 ====  [src: FUN__part4.c]


void FUN_001888d0(double param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  double dVar2;

  

  iVar1 = FUN_00188834();

  dVar2 = param_1 * 0.75;

  if (iVar1 == 0) {

    dVar2 = param_1;

  }

                    /* WARNING: Could not recover jumptable at 0x0018891c. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (*DAT_003e8d38)(dVar2,param_2,param_3);

  return;

}






// ==== FUN_00188920 @0x188920 ====  [src: FUN__part4.c]


void FUN_00188920(double param_1,double param_2,undefined8 param_3,undefined8 param_4)



{

  int iVar1;

  

  iVar1 = FUN_00188834();

  if ((iVar1 != 0) && (param_2 = param_2 * 0.75, param_2 <= param_1)) {

    param_1 = param_2;

  }

                    /* WARNING: Could not recover jumptable at 0x00188990. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (*DAT_003e8d40)(param_1,param_2,param_3,param_4);

  return;

}






// ==== FUN_00188994 @0x188994 ====  [src: FUN__part4.c]


void FUN_00188994(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4)



{

  byte bVar1;

  int iVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 uVar6;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar7;

  undefined8 extraout_x1_02;

  long lVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  double dVar14;

  double dVar15;

  undefined1 auVar16 [16];

  undefined8 local_2c8;

  undefined8 local_2c0;

  long lStack_2b8;

  long *local_2b0;

  undefined8 uStack_2a8;

  undefined8 local_2a0;

  undefined8 uStack_298;

  undefined8 uStack_290;

  undefined8 uStack_288;

  undefined8 local_280;

  long lStack_278;

  long *local_270;

  undefined8 uStack_268;

  undefined8 local_260;

  undefined8 uStack_258;

  undefined8 uStack_250;

  undefined8 uStack_248;

  undefined8 local_240;

  long lStack_238;

  long *local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 uStack_208;

  undefined1 auStack_200 [128];

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  (*DAT_003e8d48)();

  iVar2 = FUN_00188834();

  if (iVar2 == 0) goto LAB_00188d50;

  if (DAT_003e8d68 != -1) {

    FUN_0028f6e4();

  }

  if (DAT_003e8d60 == 0) goto LAB_00188d50;

  _objc_getAssociatedObject(param_4,PTR_LOOP_003e6e28);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

LAB_00188a3c:

    uStack_258 = 0;

    local_260 = 0;

    uStack_248 = 0;

    uStack_250 = 0;

    lStack_278 = 0;

    local_280 = 0;

    uStack_268 = 0;

    local_270 = (long *)0x0;

    FUN_002a4840(param_4);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    local_2c8 = auVar16._0_8_;

    lVar4 = FUN_00293880(local_2c8,auVar16._8_8_,&local_280,auStack_180,0x10);

    if (lVar4 != 0) {

      lVar8 = *local_270;

      do {

        lVar9 = 0;

        do {

          if (*local_270 != lVar8) {

            _objc_enumerationMutation(local_2c8);

          }

          uVar12 = *(undefined8 *)(lStack_278 + lVar9 * 8);

          lStack_2b8 = 0;

          local_2c0 = 0;

          uStack_2a8 = 0;

          local_2b0 = (long *)0x0;

          uStack_298 = 0;

          local_2a0 = 0;

          uStack_288 = 0;

          uStack_290 = 0;

          FUN_002a4840(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          uVar7 = auVar16._0_8_;

          lVar5 = FUN_00293880(uVar7,auVar16._8_8_,&local_2c0,auStack_200,0x10);

          if (lVar5 == 0) {

            _objc_release(uVar7);

            uVar7 = extraout_x1_01;

          }

          else {

            bVar1 = 0;

            lVar10 = *local_2b0;

            dVar15 = 0.0;

            do {

              lVar11 = 0;

              dVar14 = dVar15;

              do {

                if (*local_2b0 != lVar10) {

                  _objc_enumerationMutation(uVar7);

                }

                uVar13 = *(undefined8 *)(lStack_2b8 + lVar11 * 8);

                auVar16 = _objc_opt_isKindOfClass(uVar13,DAT_003e8d60);

                uVar6 = auVar16._8_8_;

                dVar15 = dVar14;

                if ((auVar16._0_8_ & 1) != 0) {

                  FUN_00295600(uVar13);

                  dVar15 = (double)_CGRectGetMaxX();

                  if (dVar15 <= dVar14) {

                    dVar15 = dVar14;

                  }

                  bVar1 = 1;

                  uVar6 = extraout_x1;

                }

                lVar11 = lVar11 + 1;

                dVar14 = dVar15;

              } while (lVar5 != lVar11);

              lVar5 = FUN_00293880(uVar7,uVar6,&local_2c0,auStack_200,0x10);

            } while (lVar5 != 0);

            _objc_release(uVar7);

            uVar7 = extraout_x1_00;

            if ((bool)(bVar1 & 1.0 <= dVar15)) {

              _objc_setAssociatedObject(param_4,PTR_LOOP_003e6e28,uVar12,0);

              dVar14 = (double)FUN_00295600(uVar12);

              if (2.0 < param_3 - dVar15) {

                FUN_0029e5e0(dVar14 + (param_3 - dVar15),param_2,dVar15,uVar12);

              }

              auVar16 = _objc_opt_respondsToSelector(param_4,"rightMaskView");

              if ((auVar16._0_8_ & 1) != 0) {

                FUN_00299c80(param_4,auVar16._8_8_,"rightMaskView");

                auVar16 = _objc_retainAutoreleasedReturnValue();

                lVar4 = auVar16._0_8_;

                if (lVar4 != 0) {

                  FUN_0029e8a0(lVar4,auVar16._8_8_,1);

                }

                _objc_release(lVar4);

              }

              goto LAB_00188d40;

            }

          }

          lVar9 = lVar9 + 1;

        } while (lVar9 != lVar4);

        lVar4 = FUN_00293880(local_2c8,uVar7,&local_280,auStack_180,0x10);

      } while (lVar4 != 0);

    }

LAB_00188d40:

    _objc_release(local_2c8);

  }

  else {

    FUN_002a4880(lVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != param_4) goto LAB_00188a3c;

    uStack_218 = 0;

    local_220 = 0;

    uStack_208 = 0;

    uStack_210 = 0;

    lStack_238 = 0;

    local_240 = 0;

    uStack_228 = 0;

    local_230 = (long *)0x0;

    FUN_002a4840(lVar3);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    local_2c8 = auVar16._0_8_;

    lVar4 = FUN_00293880(local_2c8,auVar16._8_8_,&local_240,auStack_100,0x10);

    if (lVar4 == 0) goto LAB_00188d40;

    lVar8 = *local_230;

    dVar15 = 0.0;

    do {

      lVar9 = 0;

      dVar14 = dVar15;

      do {

        if (*local_230 != lVar8) {

          _objc_enumerationMutation(local_2c8);

        }

        uVar12 = *(undefined8 *)(lStack_238 + lVar9 * 8);

        auVar16 = _objc_opt_isKindOfClass(uVar12,DAT_003e8d60);

        uVar7 = auVar16._8_8_;

        dVar15 = dVar14;

        if ((auVar16._0_8_ & 1) != 0) {

          FUN_00295600(uVar12);

          dVar15 = (double)_CGRectGetMaxX();

          uVar7 = extraout_x1_02;

          if (dVar15 <= dVar14) {

            dVar15 = dVar14;

          }

        }

        lVar9 = lVar9 + 1;

        dVar14 = dVar15;

      } while (lVar4 != lVar9);

      lVar4 = FUN_00293880(local_2c8,uVar7,&local_240,auStack_100,0x10);

    } while (lVar4 != 0);

    _objc_release(local_2c8);

    if (1.0 < dVar15) {

      dVar14 = (double)FUN_00295600(lVar3);

      if (2.0 < param_3 - dVar15) {

        FUN_0029e5e0(dVar14 + (param_3 - dVar15),param_2,dVar15,lVar3);

      }

    }

  }

  _objc_release(lVar3);

LAB_00188d50:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== FUN_00188e38 @0x188e38 ====  [src: FUN__part4.c]


void FUN_00188e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  ulong uVar1;

  long lVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined1 auVar7 [16];

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined *local_108;

  undefined8 local_100;

  code *local_f8;

  undefined *puStack_f0;

  undefined1 auStack_e8 [8];

  undefined1 auStack_e0 [8];

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  (*DAT_003e8d50)(param_1,param_2,param_3);

  uVar1 = FUN_00188834();

  if ((uVar1 & 1) != 0) {

    FUN_00291d00(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if ((lVar2 != 0) && (lVar3 = FUN_00293860(lVar2), lVar3 != 0)) {

      uStack_128 = 0;

      local_130 = 0;

      uStack_118 = 0;

      uStack_120 = 0;

      lStack_148 = 0;

      local_150 = 0;

      uStack_138 = 0;

      local_140 = (long *)0x0;

      _objc_retain(lVar2);

      lVar3 = FUN_00293880(lVar2,extraout_x1,&local_150,auStack_d8,0x10);

      if (lVar3 != 0) {

        lVar5 = *local_140;

        do {

          lVar6 = 0;

          do {

            if (*local_140 != lVar5) {

              _objc_enumerationMutation(lVar2);

            }

            auVar7 = FUN_00294ac0(*(undefined8 *)(lStack_148 + lVar6 * 8));

            lVar4 = lVar2;

            if (auVar7._0_8_ == 0x1869e) goto LAB_00189098;

            lVar6 = lVar6 + 1;

          } while (lVar3 != lVar6);

          lVar3 = FUN_00293880(lVar2,auVar7._8_8_,&local_150,auStack_d8,0x10);

        } while (lVar3 != 0);

      }

      _objc_release(lVar2);

      _objc_retain(param_1);

      _objc_getClass("MMMultiMenuItem");

      auVar7 = _objc_alloc_init();

      lVar4 = auVar7._0_8_;

      FUN_0029ffa0(lVar4,auVar7._8_8_,&cf_Lr);

      FUN_0029df60(lVar4,extraout_x1_00,0x1869e);

      FUN_0029d100(lVar4,extraout_x1_01,0);

      FUN_002a1bc0(lVar4,extraout_x1_02,0);

      FUN_002a1fe0(0x402e000000000000,lVar4);

      FUN_002a64a0(&_OBJC_CLASS___UIColor);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1fa0(lVar4,auVar7._8_8_,auVar7._0_8_);

      _objc_release(auVar7._0_8_);

      FUN_00293000(&_OBJC_CLASS___UIColor,extraout_x1_03,&PTR___NSConcreteGlobalBlock_0038de80);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(lVar4,auVar7._8_8_,auVar7._0_8_);

      _objc_initWeak(auStack_e0,param_1);

      local_108 = PTR___NSConcreteStackBlock_003886f0;

      local_100 = 0xc2000000;

      local_f8 = FUN_00189260;

      puStack_f0 = &DAT_0038a150;

      _objc_copyWeak(auStack_e8,auStack_e0);

      FUN_0029d480(lVar4,extraout_x1_04,&local_108);

      _objc_destroyWeak(auStack_e8);

      _objc_destroyWeak(auStack_e0);

      _objc_release(auVar7._0_8_);

      _objc_release(param_1);

      FUN_00297000(lVar2,extraout_x1_05,lVar4,0);

LAB_00189098:

      _objc_release(lVar4);

    }

    _objc_release(lVar2);

  }

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_58) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}






// ==== FUN_00189528 @0x189528 ====  [src: FUN__part4.c]


void FUN_00189528(void)



{

  FUN_00189574();

  if ((DAT_003e8db8 == '\x01') && (DAT_003e8dc0 != -1)) {

    FUN_0028f6f8();

  }

  _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038dea0);

  return;

}






// ==== FUN_00189574 @0x189574 ====  [src: FUN__part4.c]


void FUN_00189574(void)



{

  undefined1 uVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar5;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  float fVar6;

  undefined1 auVar7 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar7._0_8_;

  iVar2 = FUN_002924c0(uVar3,auVar7._8_8_,&cf_coversEnabled);

  uVar5 = extraout_x1;

  uVar1 = 0;

  if (iVar2 != 0) {

    uVar1 = FUN_002924c0(uVar3,extraout_x1,&cf_xzyBubbleShadowEnabled);

    uVar5 = extraout_x1_00;

  }

  DAT_003e8db8 = uVar1;

  DAT_003e8db9 = FUN_002924c0(uVar3,uVar5,&cf_xzyBubbleShadowBreathEnabled);

  FUN_00299520(uVar3,extraout_x1_01,&cf_xzyBubbleShadowRadius);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  if (auVar7._0_8_ == 0) {

    DAT_003e6e30 = 8.0;

  }

  else {

    fVar6 = (float)FUN_00295460(uVar3,auVar7._8_8_,&cf_xzyBubbleShadowRadius);

    DAT_003e6e30 = (double)fVar6;

  }

  _objc_release(auVar7._0_8_);

  FUN_00299520(uVar3,extraout_x1_02,&cf_xzyBubbleShadowOpacity);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  if (auVar7._0_8_ == 0) {

    DAT_003e6e38 = 0.5;

  }

  else {

    fVar6 = (float)FUN_00295460(uVar3,auVar7._8_8_,&cf_xzyBubbleShadowOpacity);

    DAT_003e6e38 = (double)fVar6;

  }

  _objc_release(auVar7._0_8_);

  FUN_00299520(uVar3,extraout_x1_03,&cf_xzyBubbleShadowGap);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  if (auVar7._0_8_ == 0) {

    DAT_003e6e40 = 0.1;

  }

  else {

    fVar6 = (float)FUN_00295460(uVar3,auVar7._8_8_,&cf_xzyBubbleShadowGap);

    DAT_003e6e40 = (double)fVar6;

  }

  _objc_release(auVar7._0_8_);

  FUN_002a45e0(uVar3,extraout_x1_04,&cf_xzyBubbleShadowColorLight);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d70;

  DAT_003e8d70 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_05,&cf_xzyBubbleShadowColorDark);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d78;

  DAT_003e8d78 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_06,&cf_xzyBubbleShadowBreathFromLight);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d80;

  DAT_003e8d80 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_07,&cf_xzyBubbleShadowBreathFromDark);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d88;

  DAT_003e8d88 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_08,&cf_xzyBubbleShadowBreathToLight);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d90;

  DAT_003e8d90 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_09,&cf_xzyBubbleShadowBreathToDark);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d98;

  DAT_003e8d98 = uVar4;

  _objc_release(uVar5);

  DAT_003e8dba = 0;

  _objc_release(uVar3);

  return;

}






// ==== FUN_001898bc @0x1898bc ====  [src: FUN__part4.c]


void FUN_001898bc(undefined8 param_1,undefined8 param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined8 local_120;

  long lStack_118;

  long *local_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a5f80(param_2);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar7._0_8_,auVar7._8_8_,&cf_keys);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  uStack_f8 = 0;

  local_100 = 0;

  uStack_e8 = 0;

  uStack_f0 = 0;

  lStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  local_110 = (long *)0x0;

  _objc_retain(uVar2);

  auVar7 = FUN_00293880(uVar2,extraout_x1,&local_120,auStack_d8,0x10);

  if (auVar7._0_8_ != 0) {

    lVar5 = *local_110;

    do {

      uVar3 = auVar7._8_8_;

      lVar6 = 0;

      do {

        if (*local_110 != lVar5) {

          _objc_enumerationMutation(uVar2);

          uVar3 = extraout_x1_00;

        }

        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);

        auVar8 = FUN_00295f60(uVar4,uVar3,&cf_xzyBubbleShadow);

        if (((auVar8._0_8_ & 1) != 0) ||

           (iVar1 = FUN_00297820(uVar4,auVar8._8_8_,&cf_coversEnabled), iVar1 != 0)) {

          FUN_00189574();

          if ((DAT_003e8db8 == '\x01') && (DAT_003e8dc0 != -1)) {

            FUN_0028f70c();

          }

          goto LAB_001899f8;

        }

        lVar6 = lVar6 + 1;

        uVar3 = extraout_x1_01;

      } while (auVar7._0_8_ != lVar6);

      auVar7 = FUN_00293880(uVar2,extraout_x1_01,&local_120,auStack_d8,0x10);

    } while (auVar7._0_8_ != 0);

  }

LAB_001899f8:

  _objc_release(uVar2);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_58) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}






// ==== FUN_00189a84 @0x189a84 ====  [src: FUN__part4.c]


void FUN_00189a84(void)



{

  undefined8 uVar1;

  

  uVar1 = _objc_getClass("CommonMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189be8,&DAT_003e8dc8);

  uVar1 = _objc_getClass("VoiceMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189c14,&DAT_003e8dd0);

  uVar1 = _objc_getClass("BizAppReaderMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189c40,&DAT_003e8dd8);

  uVar1 = _objc_getClass("WAAppPageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189c6c,&DAT_003e8de0);

  uVar1 = _objc_getClass("AppFileMessageCellViewV2");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189c98,&DAT_003e8de8);

  uVar1 = _objc_getClass("AppNodeCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189cc4,&DAT_003e8df0);

  uVar1 = _objc_getClass("AppUrlMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189cf0,&DAT_003e8df8);

  uVar1 = _objc_getClass("BaseMessageCellView");

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_00189d1c,&DAT_003e8e00);

  uVar1 = _objc_getClass("YYAsyncImageView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189e28,&DAT_003e8e08);

  return;

}






// ==== FUN_00189be8 @0x189be8 ====  [src: FUN__part4.c]


void FUN_00189be8(undefined8 param_1)



{

  (*DAT_003e8dc8)();

  FUN_00189fa0(param_1);

  return;

}






// ==== FUN_00189c14 @0x189c14 ====  [src: FUN__part4.c]


void FUN_00189c14(undefined8 param_1)



{

  (*DAT_003e8dd0)();

  FUN_00189fa0(param_1);

  return;

}






// ==== FUN_00189c40 @0x189c40 ====  [src: FUN__part4.c]


void FUN_00189c40(undefined8 param_1)



{

  (*DAT_003e8dd8)();

  FUN_00189fa0(param_1);

  return;

}






// ==== FUN_00189c6c @0x189c6c ====  [src: FUN__part4.c]


void FUN_00189c6c(undefined8 param_1)



{

  (*DAT_003e8de0)();

  FUN_00189fa0(param_1);

  return;

}






// ==== FUN_00189c98 @0x189c98 ====  [src: FUN__part4.c]


void FUN_00189c98(undefined8 param_1)



{

  (*DAT_003e8de8)();

  FUN_00189fa0(param_1);

  return;

}






// ==== FUN_00189cc4 @0x189cc4 ====  [src: FUN__part4.c]


void FUN_00189cc4(undefined8 param_1)



{

  (*DAT_003e8df0)();

  FUN_00189fa0(param_1);

  return;

}






// ==== FUN_00189cf0 @0x189cf0 ====  [src: FUN__part4.c]


void FUN_00189cf0(undefined8 param_1)



{

  (*DAT_003e8df8)();

  FUN_00189fa0(param_1);

  return;

}






// ==== FUN_00189e28 @0x189e28 ====  [src: FUN__part4.c]


void FUN_00189e28(long param_1)



{

  long lVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  uint uVar5;

  

  (*DAT_003e8e08)();

  if ((DAT_003e8db8 & 1) == 0) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6e58);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar1 == 0) {

      return;

    }

  }

  FUN_002a4880(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    if (DAT_003e8e40 != -1) {

      FUN_0028f730();

    }

    if (DAT_003e8e38 != 0) {

      _objc_retain(lVar1);

      uVar5 = 0;

      lVar4 = lVar1;

      while (uVar2 = _objc_opt_isKindOfClass(lVar4,DAT_003e8e38), (uVar2 & 1) == 0) {

        FUN_002a4880(lVar4);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar4);

        if ((1 < uVar5) || (uVar5 = uVar5 + 1, lVar4 = lVar3, lVar3 == 0)) goto LAB_00189f48;

      }

      FUN_000822c8(lVar4);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 == param_1) {

        FUN_00189fa0(lVar4);

      }

      _objc_release(lVar3);

      lVar3 = lVar4;

LAB_00189f48:

      _objc_release(lVar3);

    }

  }

  _objc_release(lVar1);

  return;

}






// ==== FUN_00189fa0 @0x189fa0 ====  [src: FUN__part4.c]


void FUN_00189fa0(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5)



{

  bool bVar1;

  ulong uVar2;

  double dVar3;

  double dVar4;

  bool bVar5;

  bool bVar6;

  undefined *puVar7;

  bool bVar8;

  int iVar9;

  uint uVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  ulong uVar15;

  long lVar16;

  long lVar17;

  undefined8 uVar18;

  ulong uVar19;

  long lVar20;

  undefined8 uVar21;

  code *pcVar22;

  long lVar23;

  undefined8 uVar24;

  undefined8 uVar25;

  long lVar26;

  long lVar27;

  long lVar28;

  ulong uVar29;

  long lVar30;

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

  undefined8 uVar31;

  ulong uVar32;

  ulong uVar33;

  ulong uVar34;

  ulong uVar35;

  ulong uVar36;

  float fVar37;

  double dVar38;

  double dVar39;

  double dVar40;

  double dVar41;

  double dVar42;

  double dVar43;

  undefined1 auVar44 [16];

  long local_158;

  ulong local_140;

  ulong local_138;

  long local_130;

  ulong local_d8;

  long local_b0;

  

  _objc_retain();

  if ((DAT_003e8db8 & 1) == 0) {

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e6e48);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar11 == 0) goto LAB_0018aff4;

  }

  FUN_000822c8(param_5);

  lVar11 = _objc_retainAutoreleasedReturnValue();

  if (lVar11 == 0) {

    if ((DAT_003e8db8 & 1) == 0) {

      _objc_setAssociatedObject(param_5,PTR_LOOP_003e6e48,0,1);

    }

  }

  else {

    FUN_002a4880(lVar11);

    lVar12 = _objc_retainAutoreleasedReturnValue();

    if (lVar12 != 0) {

      if ((DAT_003e8db8 & 1) == 0) {

        FUN_00297e40(lVar12);

        uVar18 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14a0(0);

        _objc_release(uVar18);

        FUN_00297e40(lVar12);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14c0(auVar44._0_8_,auVar44._8_8_,0);

        _objc_release(auVar44._0_8_);

        FUN_00297e40(lVar12);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b260(auVar44._0_8_,auVar44._8_8_,&cf_xzyBreath);

        _objc_release(auVar44._0_8_);

        FUN_0018b7e8(lVar12);

        _objc_setAssociatedObject(param_5,PTR_LOOP_003e6e50,0,1);

        _objc_setAssociatedObject(param_5,PTR_LOOP_003e6e48,0,1);

        _objc_setAssociatedObject(lVar11,PTR_LOOP_003e6e58,0,1);

      }

      else {

        _objc_setAssociatedObject(param_5,PTR_LOOP_003e6e48,PTR____kCFBooleanTrue_00388320,1);

        _objc_setAssociatedObject(lVar11,PTR_LOOP_003e6e58,PTR____kCFBooleanTrue_00388320,1);

        auVar44._8_8_ = extraout_x1;

        auVar44._0_8_ = DAT_003e8e10;

        if ((DAT_003e8e10 == 0) &&

           (auVar44 = _objc_getClass("TextMessageSubViewModel"), auVar44._0_8_ == 0)) {

          lVar14 = 0;

          lVar16 = 0;

          DAT_003e8e10 = 0;

        }

        else {

          DAT_003e8e10 = auVar44._0_8_;

          FUN_002a6080(param_5,auVar44._8_8_,&cf_viewModel);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          if (lVar13 == 0) {

LAB_0018a248:

            lVar14 = 0;

            lVar16 = 0;

          }

          else {

            auVar44 = _objc_opt_isKindOfClass(lVar13,DAT_003e8e10);

            if ((auVar44._0_8_ & 1) == 0) goto LAB_0018a248;

            FUN_002a6080(lVar13,auVar44._8_8_,&cf_parentModel);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            lVar20 = auVar44._0_8_;

            if (lVar20 == 0) {

LAB_0018a268:

              lVar16 = 0;

LAB_0018a26c:

              lVar14 = 0;

            }

            else {

              FUN_002a6080(lVar20,auVar44._8_8_,&cf_subViewModels);

              lVar14 = _objc_retainAutoreleasedReturnValue();

              if ((lVar14 == 0) || (uVar15 = FUN_00293860(lVar14), uVar15 < 2)) {

                _objc_release(lVar14);

                goto LAB_0018a268;

              }

              FUN_00295440(lVar14);

              lVar16 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              if (lVar13 == lVar16) {

                lVar16 = 1;

              }

              else {

                FUN_00297d80(lVar14);

                lVar17 = _objc_retainAutoreleasedReturnValue();

                _objc_release();

                lVar16 = 2;

                if (lVar13 == lVar17) {

                  lVar16 = 3;

                }

              }

              _objc_release(lVar14);

              auVar44 = _objc_opt_respondsToSelector(lVar13,"isSender");

              if (((auVar44._0_8_ & 1) == 0) ||

                 (pcVar22 = (code *)FUN_00298d20(lVar13,auVar44._8_8_,"isSender"),

                 pcVar22 == (code *)0x0)) goto LAB_0018a26c;

              iVar9 = (*pcVar22)(lVar13,"isSender");

              lVar14 = -1;

              if (iVar9 != 0) {

                lVar14 = 1;

              }

            }

            _objc_release(lVar20);

          }

          _objc_release(lVar13);

        }

        uVar15 = FUN_002978a0(lVar11);

        if ((uVar15 & 1) == 0) {

          dVar38 = (double)FUN_002916a0(lVar11);

          param_2 = 0.1;

          if (dVar38 < 0.1) goto LAB_0018a2b8;

          FUN_00295600(lVar11);

          uVar15 = _CGRectIsEmpty();

          if ((uVar15 & 1) != 0) goto LAB_0018a2b8;

          FUN_00295600(lVar11);

          if ((lVar16 == 0) && (param_3 < 30.0)) goto LAB_0018a47c;

        }

        else {

LAB_0018a2b8:

          if (lVar16 == 0) {

LAB_0018a47c:

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14a0(0);

            _objc_release(uVar18);

            FUN_00297e40(lVar12);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14c0(auVar44._0_8_,auVar44._8_8_,0);

            _objc_release(auVar44._0_8_);

            FUN_0018b7e8(lVar12);

            _objc_setAssociatedObject(param_5,PTR_LOOP_003e6e50,0,1);

            goto LAB_0018afe4;

          }

        }

        FUN_00295600(lVar11);

        dVar39 = (double)FUN_00293720(lVar12,extraout_x1_00,param_5);

        uVar15 = 0x10000000;

        dVar38 = param_4;

        if (lVar16 == 0) {

LAB_0018a32c:

          uVar19 = 0;

        }

        else {

          uVar15 = 0x20000000;

          uVar18 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

          uVar19 = _objc_opt_isKindOfClass(lVar11,uVar18);

          if ((uVar19 & 1) == 0) goto LAB_0018a32c;

          FUN_00296480(lVar11);

          uVar19 = _objc_retainAutoreleasedReturnValue();

          uVar19 = uVar19 >> 4;

          _objc_release();

        }

        iVar9 = FUN_001331c4();

        uVar34 = 0x40000000;

        if (iVar9 == 0) {

          uVar34 = 0;

        }

        _objc_getAssociatedObject(param_5,PTR_LOOP_003e6e50);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        uVar18 = auVar44._8_8_;

        lVar13 = auVar44._0_8_;

        uVar34 = uVar15 ^ lVar14 * 0x1000000 + 0x1000000U ^ (long)(param_2 * 100.0) ^

                 (long)(dVar39 * 100.0) ^ (long)(param_3 * 100.0) ^

                 (long)(param_4 * 100.0) << 0x10 ^ uVar19 ^ uVar34;

        if (lVar13 == 0) {

          bVar8 = false;

        }

        else {

          auVar44 = FUN_002a5a20(lVar13);

          uVar18 = auVar44._8_8_;

          bVar8 = auVar44._0_8_ == uVar34;

        }

        puVar7 = PTR_LOOP_003e6e50;

        FUN_00299480(&_OBJC_CLASS___NSNumber,uVar18,uVar34);

        uVar18 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,puVar7,uVar18,1);

        _objc_release(uVar18);

        _objc_release(lVar13);

        if (bVar8) {

          if (lVar16 == 0) {

            FUN_00297e40(lVar12);

            local_b0 = _objc_retainAutoreleasedReturnValue();

          }

          else {

            _objc_getAssociatedObject(lVar12,"xzyShadowInner");

            lVar13 = _objc_retainAutoreleasedReturnValue();

            if (lVar13 == 0) {

              local_b0 = 0;

            }

            else {

              FUN_00297e40(lVar13);

              local_b0 = _objc_retainAutoreleasedReturnValue();

              _objc_retain();

              _objc_release(local_b0);

            }

            _objc_release(lVar13);

          }

          if (local_b0 == 0) {

LAB_0018a578:

            _objc_release(local_b0);

            goto LAB_0018a580;

          }

          fVar37 = (float)FUN_002a2e00(local_b0);

          if ((lVar16 == 0) || ((double)fVar37 < DAT_003e6e38 + -0.01)) {

            if ((lVar16 != 0) || ((double)fVar37 < DAT_003e6e38 + -0.01)) goto LAB_0018a578;

          }

          else {

            lVar13 = FUN_002a2e20(local_b0);

            if (lVar13 == 0) goto LAB_0018a578;

          }

          if (DAT_003e8db9 == '\x01') {

            FUN_0018b898(local_b0);

          }

        }

        else {

LAB_0018a580:

          FUN_0018c134();

          lVar13 = DAT_003e8da0;

          local_b0 = DAT_003e8da0;

          _objc_retain();

          if (lVar16 == 0) {

            _objc_getAssociatedObject(lVar12,"xzyShadowContainer");

            lVar16 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar16 != 0) {

              FUN_0018b7e8(lVar12);

            }

            iVar9 = FUN_00292e20(lVar12);

            if (iVar9 != 0) {

              FUN_0029d4a0(lVar12,extraout_x1_08,0);

            }

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            iVar9 = FUN_00298a60();

            _objc_release(uVar18);

            if (iVar9 != 0) {

              FUN_00297e40(lVar12);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              FUN_0029f960(auVar44._0_8_,auVar44._8_8_,0);

              _objc_release(auVar44._0_8_);

            }

            _objc_retainAutorelease(lVar13);

            uVar18 = FUN_00290a20();

            FUN_00297e40(lVar12);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1460(auVar44._0_8_,auVar44._8_8_,uVar18);

            _objc_release(auVar44._0_8_);

            dVar38 = DAT_003e6e38;

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14a0((float)dVar38);

            _objc_release(uVar18);

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1480(0,0);

            _objc_release(uVar18);

            dVar38 = DAT_003e6e30;

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14e0(dVar38);

            _objc_release(uVar18);

            FUN_00297e40(lVar12);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1520(auVar44._0_8_,auVar44._8_8_,1);

            _objc_release(auVar44._0_8_);

            uVar21 = FUN_0018ba50();

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a0bc0(uVar21);

            _objc_release(uVar18);

            FUN_002a4880(lVar12);

            lVar13 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar13 != 0) {

              FUN_002a4880(lVar12);

              uVar18 = _objc_retainAutoreleasedReturnValue();

              iVar9 = FUN_00292e20();

              _objc_release(uVar18);

              if (iVar9 != 0) {

                FUN_002a4880(lVar12);

                auVar44 = _objc_retainAutoreleasedReturnValue();

                FUN_0029d4a0(auVar44._0_8_,auVar44._8_8_,0);

                _objc_release(auVar44._0_8_);

              }

              FUN_002a4880(lVar12);

              uVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_00297e40();

              uVar21 = _objc_retainAutoreleasedReturnValue();

              iVar9 = FUN_00298a60();

              _objc_release(uVar21);

              _objc_release(uVar18);

              if (iVar9 != 0) {

                FUN_002a4880(lVar12);

                uVar18 = _objc_retainAutoreleasedReturnValue();

                FUN_00297e40();

                auVar44 = _objc_retainAutoreleasedReturnValue();

                FUN_0029f960(auVar44._0_8_,auVar44._8_8_,0);

                _objc_release(auVar44._0_8_);

                _objc_release(uVar18);

              }

            }

            if (DAT_003e8db9 == '\x01') {

              FUN_00297e40(lVar12);

              lVar20 = _objc_retainAutoreleasedReturnValue();

              FUN_0018b898();

            }

            else {

              FUN_00297e40(lVar12);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              lVar20 = auVar44._0_8_;

              FUN_0029b260(lVar20,auVar44._8_8_,&cf_xzyBreath);

            }

          }

          else {

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14a0(0);

            _objc_release(uVar18);

            FUN_00297e40(lVar12);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14c0(auVar44._0_8_,auVar44._8_8_,0);

            _objc_release(auVar44._0_8_);

            FUN_00297e40(lVar12);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_0029b260(auVar44._0_8_,auVar44._8_8_,&cf_xzyBreath);

            _objc_release(auVar44._0_8_);

            iVar9 = FUN_00292e20(param_5);

            if (iVar9 != 0) {

              FUN_0029d4a0(param_5,extraout_x1_01,0);

            }

            FUN_00297e40(param_5);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            iVar9 = FUN_00298a60();

            _objc_release(uVar18);

            if (iVar9 != 0) {

              FUN_00297e40(param_5);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              FUN_0029f960(auVar44._0_8_,auVar44._8_8_,0);

              _objc_release(auVar44._0_8_);

            }

            if (lVar12 != param_5) {

              iVar9 = FUN_00292e20(lVar12);

              if (iVar9 != 0) {

                FUN_0029d4a0(lVar12,extraout_x1_02,0);

              }

              FUN_00297e40(lVar12);

              uVar18 = _objc_retainAutoreleasedReturnValue();

              iVar9 = FUN_00298a60();

              _objc_release(uVar18);

              if (iVar9 != 0) {

                FUN_00297e40(lVar12);

                auVar44 = _objc_retainAutoreleasedReturnValue();

                FUN_0029f960(auVar44._0_8_,auVar44._8_8_,0);

                _objc_release(auVar44._0_8_);

              }

            }

            _objc_getAssociatedObject(lVar12,"xzyShadowContainer");

            lVar20 = _objc_retainAutoreleasedReturnValue();

            _objc_getAssociatedObject(lVar12,"xzyShadowInner");

            uVar21 = _objc_retainAutoreleasedReturnValue();

            uVar18 = uVar21;

            if (lVar20 == 0) {

              auVar44 = _objc_alloc_init(&_OBJC_CLASS___UIView);

              lVar20 = auVar44._0_8_;

              FUN_0029d4a0(lVar20,auVar44._8_8_,1);

              FUN_00292dc0(&_OBJC_CLASS___UIColor);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              FUN_0029cf60(lVar20,auVar44._8_8_,auVar44._0_8_);

              _objc_release(auVar44._0_8_);

              FUN_002a23c0(lVar20,extraout_x1_03,0);

              FUN_002a1c80(lVar20,extraout_x1_04,0x135257a);

              uVar18 = _objc_alloc_init(&_OBJC_CLASS___UIView);

              _objc_release(uVar21);

              FUN_00292dc0(&_OBJC_CLASS___UIColor);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              FUN_0029cf60(uVar18,auVar44._8_8_,auVar44._0_8_);

              _objc_release(auVar44._0_8_);

              FUN_002a23c0(uVar18,extraout_x1_05,0);

              FUN_00291380(lVar20,extraout_x1_06,uVar18);

              _objc_setAssociatedObject(lVar12,"xzyShadowContainer",lVar20,1);

              _objc_setAssociatedObject(lVar12,"xzyShadowInner",uVar18,1);

            }

            FUN_002a4880(lVar20);

            lVar17 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar17 != param_5) {

              FUN_0029b340(lVar20);

              FUN_00297100(param_5,extraout_x1_07,lVar20,0);

            }

            _objc_retain(lVar11);

            FUN_00297e40(lVar11);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            dVar39 = (double)FUN_00293820();

            _objc_release(uVar21);

            if (dVar39 <= 0.5) {

              uVar21 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

              uVar15 = _objc_opt_isKindOfClass(lVar11,uVar21);

              if ((uVar15 & 1) != 0) {

                FUN_00296480(lVar11);

                lVar17 = _objc_retainAutoreleasedReturnValue();

                if (lVar17 != 0) {

                  FUN_00292960(lVar17);

                }

                _objc_release(lVar17);

              }

            }

            _objc_release(lVar11);

            dVar40 = (double)FUN_0018ba50();

            dVar39 = 1.0;

            if (1.0 <= dVar40) {

              dVar39 = dVar40;

            }

            dVar42 = 1.0 / dVar39;

            if (1.0 / dVar39 <= DAT_003e6e30 + DAT_003e6e30) {

              dVar42 = DAT_003e6e30 + DAT_003e6e30;

            }

            FUN_00295600(lVar11);

            dVar41 = (double)FUN_00293720(lVar12,extraout_x1_09,param_5);

            dVar43 = -dVar42;

            if (lVar16 == 1) {

              dVar43 = dVar42;

            }

            dVar3 = -dVar42;

            dVar4 = dVar42 * 2.0;

            if (lVar16 != 2) {

              dVar3 = dVar43;

              dVar4 = dVar42;

            }

            dVar38 = dVar38 + dVar4;

            FUN_0029e5e0(dVar41 - dVar42,lVar20);

            FUN_0029e5e0(dVar42,dVar3,uVar18);

            _objc_retainAutorelease(lVar13);

            uVar21 = FUN_00290a20();

            FUN_00297e40(uVar18);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1460(auVar44._0_8_,auVar44._8_8_,uVar21);

            _objc_release(auVar44._0_8_);

            dVar42 = DAT_003e6e38;

            FUN_00297e40(uVar18);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14a0((float)dVar42);

            _objc_release(uVar21);

            FUN_00297e40(uVar18);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            dVar41 = 0.0;

            FUN_002a1480(0);

            _objc_release(uVar21);

            dVar42 = DAT_003e6e30;

            FUN_00297e40(uVar18);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14e0(dVar42);

            _objc_release(uVar21);

            dVar43 = *(double *)(PTR__UIEdgeInsetsZero_003883f0 + 8);

            dVar42 = *(double *)(PTR__UIEdgeInsetsZero_003883f0 + 0x18);

            uVar21 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

            uVar15 = _objc_opt_isKindOfClass(lVar11,uVar21);

            if ((uVar15 & 1) == 0) {

              lVar13 = 0;

            }

            else {

              FUN_00296480(lVar11);

              lVar13 = _objc_retainAutoreleasedReturnValue();

              if (lVar13 != 0) {

                FUN_00292960(lVar13);

                dVar42 = dVar38;

                dVar43 = dVar41;

              }

            }

            FUN_002925a0(uVar18);

            _objc_retain(lVar13);

            if (lVar13 == 0) {

LAB_0018aea4:

              _objc_release(lVar13);

LAB_0018aeac:

              FUN_0018bacc(lVar13);

              FUN_002925a0(uVar18);

              lVar23 = FUN_0018bee8(lVar14,lVar16);

            }

            else {

              _objc_retainAutorelease(lVar13);

              lVar17 = FUN_00290a40();

              if (((lVar17 == 0) || (dVar39 <= 1.0)) || (dVar38 <= 1.0)) goto LAB_0018aea4;

              if (DAT_003e8e30 != -1) {

                FUN_0028f744();

              }

              dVar41 = (double)FUN_0018ba50();

              if (((long)(dVar39 * dVar41) == 0) || ((long)(dVar38 * dVar41) == 0))

              goto LAB_0018aea4;

              if (lVar14 < 0) {

                bVar8 = false;

                dVar42 = (double)(long)(dVar41 + dVar41);

                bVar1 = true;

              }

              else if (lVar14 == 0) {

                if (ABS(dVar43 - dVar42) <= 1.0) {

                  bVar8 = false;

                  bVar1 = false;

                  dVar42 = (double)(long)(dVar41 * 0.0);

                }

                else {

                  bVar8 = dVar43 < dVar42;

                  bVar1 = dVar42 < dVar43;

                  dVar42 = (double)(long)(dVar41 + dVar41);

                }

              }

              else {

                bVar1 = false;

                dVar42 = (double)(long)(dVar41 + dVar41);

                bVar8 = true;

              }

              uVar15 = (ulong)dVar42;

              FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_10,&cf__p__zu__zu___2f__d__ld);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              uVar21 = auVar44._0_8_;

              FUN_00299520(DAT_003e8e28,auVar44._8_8_,uVar21);

              lVar17 = _objc_retainAutoreleasedReturnValue();

              if (lVar17 == 0) {

                _UIGraphicsBeginImageContextWithOptions(dVar39,dVar38,dVar41);

                FUN_00294900(0,lVar13);

                _UIGraphicsGetImageFromCurrentImageContext();

                uVar24 = _objc_retainAutoreleasedReturnValue();

                _UIGraphicsEndImageContext();

                _objc_retainAutorelease(uVar24);

                lVar23 = FUN_00290a40();

                if (lVar23 == 0) {

LAB_0018b3fc:

                  lVar23 = 0;

                }

                else {

                  _objc_retainAutorelease(uVar24);

                  uVar25 = FUN_00290a40();

                  uVar19 = _CGImageGetWidth();

                  lVar26 = _CGImageGetHeight(uVar25);

                  uVar34 = _CGImageGetBitsPerPixel(uVar25);

                  lVar23 = 0;

                  if (((uVar19 != 0) && (lVar26 != 0)) && ((7 < uVar34 && ((uVar34 & 7) == 0)))) {

                    uVar10 = _CGImageGetAlphaInfo(uVar25);

                    local_d8 = 0;

                    if (((uVar10 & 0x1f) != 2) && ((uVar10 & 0x1f) != 4)) {

                      if ((uVar10 & 0x1d) != 1) goto LAB_0018b3fc;

                      local_d8 = (uVar34 >> 3) - 1;

                    }

                    _CGImageGetDataProvider(uVar25);

                    lVar27 = _CGDataProviderCopyData();

                    lVar23 = 0;

                    if (lVar27 != 0) {

                      lVar28 = _CFDataGetBytePtr(lVar27);

                      uVar29 = _CFDataGetLength(lVar27);

                      lVar30 = _CGImageGetBytesPerRow(uVar25);

                      FUN_002922c0(&_OBJC_CLASS___UIBezierPath);

                      uVar25 = _objc_retainAutoreleasedReturnValue();

                      lVar23 = 0;

                      local_138 = 0;

                      local_130 = 0;

                      local_158 = 0;

                      local_140 = 0;

                      bVar5 = false;

                      bVar6 = false;

                      do {

                        if (uVar29 <= (ulong)(lVar23 * lVar30)) break;

                        uVar32 = 0;

                        uVar36 = 0xffffffffffffffff;

                        uVar35 = 0xffffffffffffffff;

                        uVar33 = local_d8;

                        do {

                          if (uVar29 <= uVar33) break;

                          uVar2 = uVar32;

                          if (-1 < (long)uVar35) {

                            uVar2 = uVar35;

                          }

                          if (8 < *(byte *)(lVar28 + uVar33)) {

                            uVar36 = uVar32;

                            uVar35 = uVar2;

                          }

                          uVar32 = uVar32 + 1;

                          uVar33 = uVar33 + (uVar34 >> 3);

                        } while (uVar19 != uVar32);

                        if (((long)uVar35 < 0) || ((long)uVar36 < (long)uVar35)) {

LAB_0018b310:

                          if (bVar5) {

                            FUN_0018c460(dVar41,uVar25,local_138,local_140,local_158,local_130);

                          }

                          bVar5 = false;

                        }

                        else {

                          uVar32 = uVar36;

                          if (bVar1) {

                            if ((long)uVar35 <= (long)uVar15) {

                              uVar35 = uVar15;

                            }

                          }

                          else {

                            if ((long)(uVar19 + ~uVar15) <= (long)uVar36) {

                              uVar32 = uVar19 + ~uVar15;

                            }

                            if (!bVar8) {

                              uVar32 = uVar36;

                            }

                          }

                          if ((long)uVar32 < (long)uVar35) goto LAB_0018b310;

                          if (((bool)(bVar5 & uVar35 == local_138)) && (uVar32 == local_140)) {

                            local_130 = local_130 + 1;

                            bVar6 = true;

                            bVar5 = true;

                          }

                          else {

                            if (bVar5) {

                              FUN_0018c460(dVar41,uVar25,local_138,local_140,local_158,local_130);

                            }

                            bVar5 = true;

                            bVar6 = true;

                            local_130 = 1;

                            local_158 = lVar23;

                            local_140 = uVar32;

                            local_138 = uVar35;

                          }

                        }

                        lVar23 = lVar23 + 1;

                        local_d8 = local_d8 + lVar30;

                      } while (lVar23 != lVar26);

                      _CFRelease(lVar27);

                      uVar31 = extraout_x1_11;

                      if (bVar5) {

                        FUN_0018c460(dVar41,uVar25,local_138,local_140,local_158,local_130);

                        uVar31 = extraout_x1_12;

                      }

                      if (bVar6) {

                        FUN_002a0060(DAT_003e8e28,uVar31,uVar25,uVar21);

                        _objc_retainAutorelease(uVar25);

                        FUN_00290a60();

                        lVar23 = _CGPathCreateCopy();

                      }

                      else {

                        lVar23 = 0;

                      }

                      _objc_release(uVar25);

                    }

                  }

                }

                _objc_release(uVar24);

              }

              else {

                _objc_retainAutorelease();

                FUN_00290a60();

                lVar23 = _CGPathCreateCopy();

              }

              _objc_release(lVar17);

              _objc_release(uVar21);

              _objc_release(lVar13);

              if (lVar23 == 0) goto LAB_0018aeac;

            }

            FUN_00297e40(uVar18);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14c0(auVar44._0_8_,auVar44._8_8_,lVar23);

            _objc_release(auVar44._0_8_);

            if (lVar23 != 0) {

              _CGPathRelease(lVar23);

            }

            FUN_00297e40(uVar18);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1520(auVar44._0_8_,auVar44._8_8_,1);

            _objc_release(auVar44._0_8_);

            FUN_00297e40(uVar18);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            FUN_002a0bc0(dVar40);

            _objc_release(uVar21);

            if (DAT_003e8db9 == '\x01') {

              FUN_00297e40(uVar18);

              uVar21 = _objc_retainAutoreleasedReturnValue();

              FUN_0018b898();

            }

            else {

              FUN_00297e40(uVar18);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              uVar21 = auVar44._0_8_;

              FUN_0029b260(uVar21,auVar44._8_8_,&cf_xzyBreath);

            }

            _objc_release(uVar21);

            _objc_release(lVar13);

            _objc_release(uVar18);

          }

          _objc_release(lVar20);

        }

        _objc_release(local_b0);

      }

    }

LAB_0018afe4:

    _objc_release(lVar12);

  }

  _objc_release(lVar11);

LAB_0018aff4:

  _objc_release(param_5);

  return;

}






// ==== FUN_0018b7e8 @0x18b7e8 ====  [src: FUN__part4.c]


void FUN_0018b7e8(undefined8 param_1)



{

  long lVar1;

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,"xzyShadowContainer");

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    FUN_0029b340(lVar1);

    _objc_setAssociatedObject(param_1,"xzyShadowContainer",0,1);

    _objc_setAssociatedObject(param_1,"xzyShadowInner",0,1);

  }

  _objc_release(lVar1);

  _objc_release(param_1);

  return;

}






// ==== FUN_0018b898 @0x18b898 ====  [src: FUN__part4.c]


void FUN_0018b898(undefined8 param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar5 [16];

  

  _objc_retain();

  FUN_00291880(param_1,extraout_x1,&cf_xzyBreath);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 == 0) {

    FUN_0018c134();

    uVar1 = DAT_003e8da8;

    _objc_retain(DAT_003e8da8);

    FUN_0018c134();

    uVar2 = DAT_003e8db0;

    _objc_retain(DAT_003e8db0);

    FUN_002918e0(&_OBJC_CLASS___CABasicAnimation,extraout_x1_00,&cf_shadowColor);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease(uVar1);

    auVar5 = FUN_00290a20();

    FUN_0029e600(uVar4,auVar5._8_8_,auVar5._0_8_);

    _objc_retainAutorelease(uVar2);

    auVar5 = FUN_00290a20();

    FUN_002a20a0(uVar4,auVar5._8_8_,auVar5._0_8_);

    FUN_0029de80(0x4000000000000000,uVar4);

    FUN_0029ce20(uVar4,extraout_x1_01,1);

    FUN_002a0cc0(0x7f800000,uVar4);

    FUN_00295680(&_OBJC_CLASS___CAMediaTimingFunction,extraout_x1_02,

                 *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_00388650);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1f00(uVar4,auVar5._8_8_,auVar5._0_8_);

    _objc_release(auVar5._0_8_);

    FUN_00291020(param_1,extraout_x1_03,uVar4,&cf_xzyBreath);

    _objc_release(uVar4);

    _objc_release(uVar2);

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  return;

}






// ==== FUN_0018ba50 @0x18ba50 ====  [src: FUN__part4.c]


void FUN_0018ba50(void)



{

  undefined8 uVar1;

  double dVar2;

  

  if (DAT_003e8e20 <= 0.0) {

    FUN_002987e0(&_OBJC_CLASS___UIScreen);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    dVar2 = (double)FUN_0029bda0();

    _objc_release(uVar1);

    DAT_003e8e20 = dVar2;

    if (dVar2 <= 0.0) {

      DAT_003e8e20 = 2.0;

    }

  }

  return;

}






// ==== FUN_0018bacc @0x18bacc ====  [src: FUN__part4.c]


undefined1  [16] FUN_0018bacc(long param_1)



{

  ulong uVar1;

  ulong uVar2;

  ulong uVar3;

  ulong uVar4;

  undefined *puVar5;

  uint uVar6;

  long lVar7;

  undefined8 uVar8;

  ulong uVar9;

  ulong uVar10;

  ulong uVar11;

  long lVar12;

  long lVar13;

  ulong uVar14;

  long lVar15;

  ulong uVar16;

  ulong uVar17;

  ulong uVar18;

  ulong uVar19;

  ulong uVar20;

  ulong uVar21;

  ulong uVar22;

  ulong uVar23;

  undefined1 auVar24 [16];

  undefined1 auVar25 [16];

  double dVar26;

  undefined8 uVar27;

  double dVar28;

  double dVar29;

  double dVar30;

  

  _objc_retain();

  if (param_1 != 0) {

    _objc_retainAutorelease(param_1);

    lVar7 = FUN_00290a40();

    if (lVar7 != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6e60);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      if (lVar7 == 0) {

        dVar26 = *(double *)PTR__UIEdgeInsetsZero_003883f0;

        uVar27 = 0;

        dVar28 = *(double *)(PTR__UIEdgeInsetsZero_003883f0 + 8);

        dVar29 = *(double *)(PTR__UIEdgeInsetsZero_003883f0 + 0x10);

        dVar30 = *(double *)(PTR__UIEdgeInsetsZero_003883f0 + 0x18);

        _objc_retainAutorelease(param_1);

        uVar8 = FUN_00290a40();

        uVar9 = _CGImageGetWidth();

        uVar10 = _CGImageGetHeight(uVar8);

        uVar11 = _CGImageGetBitsPerPixel(uVar8);

        puVar5 = PTR_LOOP_003e6e60;

        if ((((uVar9 == 0) || (uVar10 == 0)) || (uVar11 < 8)) || ((uVar11 & 7) != 0)) {

          FUN_002a61a0(dVar26,dVar28,dVar29,dVar30,&_OBJC_CLASS___NSValue);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_1,puVar5,uVar8,1);

        }

        else {

          uVar6 = _CGImageGetAlphaInfo(uVar8);

          puVar5 = PTR_LOOP_003e6e60;

          uVar23 = 0;

          if (((uVar6 & 0x1f) != 2) && ((uVar6 & 0x1f) != 4)) {

            if ((uVar6 & 0x1d) != 1) {

              FUN_002a61a0(dVar26,dVar28,dVar29,dVar30,&_OBJC_CLASS___NSValue);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(param_1,puVar5,uVar8,1);

              goto LAB_0018be1c;

            }

            uVar23 = (uVar11 >> 3) - 1;

          }

          _CGImageGetDataProvider(uVar8);

          lVar12 = _CGDataProviderCopyData();

          auVar24._8_8_ = uVar27;

          auVar24._0_8_ = dVar26;

          if (lVar12 == 0) goto LAB_0018be28;

          lVar13 = _CFDataGetBytePtr(lVar12);

          uVar14 = _CFDataGetLength(lVar12);

          lVar15 = _CGImageGetBytesPerRow(uVar8);

          uVar16 = 0;

          uVar22 = 0xffffffffffffffff;

          uVar21 = 0xffffffffffffffff;

          uVar19 = uVar9;

          uVar20 = uVar10;

          do {

            if (uVar14 <= uVar16 * lVar15) break;

            uVar17 = 0;

            uVar18 = uVar23;

            do {

              if (uVar14 <= uVar18) break;

              uVar1 = uVar17;

              if ((long)uVar19 <= (long)uVar17) {

                uVar1 = uVar19;

              }

              uVar2 = uVar16;

              if ((long)uVar20 <= (long)uVar16) {

                uVar2 = uVar20;

              }

              uVar3 = uVar17;

              if ((long)uVar17 <= (long)uVar22) {

                uVar3 = uVar22;

              }

              uVar4 = uVar16;

              if ((long)uVar16 <= (long)uVar21) {

                uVar4 = uVar21;

              }

              if (8 < *(byte *)(lVar13 + uVar18)) {

                uVar19 = uVar1;

                uVar20 = uVar2;

                uVar22 = uVar3;

                uVar21 = uVar4;

              }

              uVar17 = uVar17 + 1;

              uVar18 = uVar18 + (uVar11 >> 3);

            } while (uVar9 != uVar17);

            uVar16 = uVar16 + 1;

            uVar23 = uVar23 + lVar15;

          } while (uVar16 != uVar10);

          if (((long)uVar19 <= (long)uVar22) && ((long)uVar20 <= (long)uVar21)) {

            dVar30 = (double)FUN_0029bda0(param_1);

            if (dVar30 <= 0.0) {

              dVar30 = (double)FUN_0018ba50();

            }

            else {

              dVar30 = (double)FUN_0029bda0(param_1);

            }

            dVar26 = (double)(long)uVar20 / dVar30;

            uVar27 = 0;

            dVar28 = (double)(long)uVar19 / dVar30;

            dVar29 = (((double)uVar10 - (double)(long)uVar21) + -1.0) / dVar30;

            dVar30 = (((double)uVar9 - (double)(long)uVar22) + -1.0) / dVar30;

          }

          _CFRelease(lVar12);

          puVar5 = PTR_LOOP_003e6e60;

          FUN_002a61a0(dVar26,dVar28,dVar29,dVar30,&_OBJC_CLASS___NSValue);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_1,puVar5,uVar8,1);

        }

LAB_0018be1c:

        _objc_release(uVar8);

        auVar24._8_8_ = uVar27;

        auVar24._0_8_ = dVar26;

      }

      else {

        auVar24 = FUN_00290b80(lVar7);

      }

LAB_0018be28:

      uVar27 = auVar24._8_8_;

      uVar8 = auVar24._0_8_;

      _objc_release(lVar7);

      goto LAB_0018be30;

    }

  }

  uVar8 = *(undefined8 *)PTR__UIEdgeInsetsZero_003883f0;

  uVar27 = 0;

LAB_0018be30:

  _objc_release(param_1);

  auVar25._8_8_ = uVar27;

  auVar25._0_8_ = uVar8;

  return auVar25;

}






// ==== FUN_0018bee8 @0x18bee8 ====  [src: FUN__part4.c]


undefined8

FUN_0018bee8(double param_1,double param_2,double param_3,double param_4,double param_5,

            ulong param_6,long param_7)



{

  int iVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  double dVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  double in_stack_00000000;

  double in_stack_00000008;

  double in_stack_00000010;

  double in_stack_00000018;

  double in_stack_00000028;

  double in_stack_00000038;

  

  dVar7 = 3.0;

  if (DAT_003e6e30 + 1.0 <= 3.0) {

    dVar7 = DAT_003e6e30 + 1.0;

  }

  if (param_7 != 3) {

    in_stack_00000010 = 0.0;

  }

  if (dVar7 <= 1.0) {

    dVar7 = 1.0;

  }

  in_stack_00000008 = in_stack_00000008 + dVar7;

  in_stack_00000018 = in_stack_00000018 + dVar7;

  dVar11 = 0.0;

  if (param_7 == 3) {

    dVar11 = in_stack_00000010 + dVar7;

  }

  dVar9 = 0.0;

  if (param_7 == 1) {

    dVar9 = in_stack_00000000 + dVar7;

  }

  dVar10 = in_stack_00000018 + 2.0;

  dVar8 = in_stack_00000008;

  if (in_stack_00000038 < in_stack_00000028) {

    dVar10 = in_stack_00000018;

    dVar8 = in_stack_00000008 + 2.0;

  }

  dVar6 = in_stack_00000018;

  dVar5 = in_stack_00000008;

  if (1.0 < ABS(in_stack_00000028 - in_stack_00000038)) {

    dVar6 = dVar10;

    dVar5 = dVar8;

  }

  if (param_6 != 0) {

    dVar6 = in_stack_00000018 + 2.0;

    dVar5 = in_stack_00000008;

  }

  if ((param_6 & 0x8000000000000000) != 0) {

    dVar6 = in_stack_00000018;

    dVar5 = in_stack_00000008 + 2.0;

  }

  dVar8 = param_1 + dVar5;

  dVar9 = param_2 + dVar9;

  dVar10 = param_3 - (dVar5 + dVar6);

  if (param_7 == 1) {

    dVar11 = in_stack_00000000 + dVar7;

  }

  dVar11 = param_4 - dVar11;

  uVar2 = _CGRectIsEmpty(dVar8,dVar9,dVar10,dVar11);

  if (((uVar2 & 1) != 0) || (iVar1 = _CGRectIsNull(dVar8,dVar9,dVar10,dVar11), iVar1 != 0)) {

    dVar8 = param_1;

    dVar9 = param_2;

    dVar10 = param_3;

    dVar11 = param_4;

  }

  dVar7 = (double)_CGRectGetWidth(dVar8,dVar9,dVar10,dVar11);

  dVar5 = (double)_CGRectGetHeight(dVar8,dVar9,dVar10,dVar11);

  if (dVar5 <= dVar7) {

    dVar7 = dVar5;

  }

  if (dVar7 * 0.5 <= param_5) {

    param_5 = dVar7 * 0.5;

  }

  if (param_7 == 3 || param_7 == 1) {

    if (param_5 <= 0.0) {

      param_5 = 0.0;

    }

    if (0.5 < param_5) {

      uVar3 = 0;

      if (param_7 == 3) {

        uVar3 = 0xc;

      }

      if (param_7 == 1) {

        uVar3 = 3;

      }

      FUN_00292360(dVar8,dVar9,dVar10,dVar11,param_5,param_5,&_OBJC_CLASS___UIBezierPath,extraout_x1

                   ,uVar3);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      goto LAB_0018c0e0;

    }

  }

  FUN_00292340(dVar8,dVar9,dVar10,dVar11,&_OBJC_CLASS___UIBezierPath);

  uVar3 = _objc_retainAutoreleasedReturnValue();

LAB_0018c0e0:

  _objc_retainAutorelease();

  FUN_00290a60();

  uVar4 = _CGPathCreateCopy();

  _objc_release(uVar3);

  return uVar4;

}






// ==== FUN_0018c134 @0x18c134 ====  [src: FUN__part4.c]


void FUN_0018c134(void)



{

  undefined8 *puVar1;

  undefined8 uVar2;

  uint uVar3;

  long lVar4;

  long lVar5;

  

  uVar3 = FUN_001331c4();

  if (DAT_003e8dba != '\x01' || DAT_003e8e18 != uVar3) {

    DAT_003e8dba = 1;

    DAT_003e8e18 = (byte)uVar3;

    puVar1 = &DAT_003e8d78;

    if (uVar3 == 0) {

      puVar1 = &DAT_003e8d70;

    }

    FUN_0018c2d4(*puVar1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

      FUN_00292400(&_OBJC_CLASS___UIColor);

      lVar5 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar4);

      lVar5 = lVar4;

    }

    uVar2 = DAT_003e8da0;

    DAT_003e8da0 = lVar5;

    _objc_release(uVar2);

    _objc_release(lVar4);

    puVar1 = &DAT_003e8d88;

    if (uVar3 == 0) {

      puVar1 = &DAT_003e8d80;

    }

    FUN_0018c2d4(*puVar1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

      FUN_00292400(&_OBJC_CLASS___UIColor);

      lVar5 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar4);

      lVar5 = lVar4;

    }

    uVar2 = DAT_003e8da8;

    DAT_003e8da8 = lVar5;

    _objc_release(uVar2);

    _objc_release(lVar4);

    puVar1 = &DAT_003e8d98;

    if (uVar3 == 0) {

      puVar1 = &DAT_003e8d90;

    }

    FUN_0018c2d4(*puVar1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

      FUN_00292400(&_OBJC_CLASS___UIColor);

      lVar5 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar4);

      lVar5 = lVar4;

    }

    uVar2 = DAT_003e8db0;

    DAT_003e8db0 = lVar5;

    _objc_release(uVar2);

    _objc_release(lVar4);

    return;

  }

  return;

}






// ==== FUN_0018c460 @0x18c460 ====  [src: FUN__part4.c]


void FUN_0018c460(double param_1,long param_2,long param_3,long param_4,long param_5,ulong param_6)



{

  undefined1 auVar1 [16];

  

  _objc_retain();

  if ((((param_2 != 0) && (0 < (long)param_6)) && (param_3 <= param_4)) && (0.0 < param_1)) {

    FUN_00292340((double)param_3 / param_1,(double)param_5 / param_1,

                 ((double)(param_4 - param_3) + 1.0) / param_1,(double)param_6 / param_1,

                 &_OBJC_CLASS___UIBezierPath);

    auVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_002919c0(param_2,auVar1._8_8_,auVar1._0_8_);

    _objc_release(auVar1._0_8_);

  }

  _objc_release(param_2);

  return;

}






// ==== FUN_0018c568 @0x18c568 ====  [src: FUN__part4.c]


void FUN_0018c568(void)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  ulong uVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

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

  uint uVar14;

  long lVar15;

  uint uVar16;

  float fVar17;

  double dVar18;

  double dVar19;

  undefined1 auVar20 [16];

  undefined1 auVar21 [16];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  long *local_a8;

  long local_a0;

  long *local_98;

  undefined8 local_90;

  code *local_88;

  code *pcStack_80;

  undefined8 local_78;

  

  _pthread_key_create(&DAT_003e94b0,(void *)0x0);

  FUN_002992c0(&_OBJC_CLASS___NSNull);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e94a8;

  DAT_003e94a8 = uVar3;

  _objc_release(uVar4);

  uVar3 = _objc_alloc_init(&_OBJC_CLASS___NSCache);

  uVar4 = DAT_003e9498;

  DAT_003e9498 = uVar3;

  _objc_release(uVar4);

  FUN_0029d860(DAT_003e9498,extraout_x1,200);

  uVar3 = _objc_alloc_init(&_OBJC_CLASS___NSCache);

  uVar4 = DAT_003e94a0;

  DAT_003e94a0 = uVar3;

  _objc_release(uVar4);

  FUN_0029d860(DAT_003e94a0,extraout_x1_00,100);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar20._0_8_;

  fVar17 = (float)FUN_00295460(uVar3,auVar20._8_8_,&cf_xzy_fontSizeOffset);

  DAT_003e94b8 = (double)fVar17;

  FUN_0029b4a0(uVar3,extraout_x1_01,&cf_xzy_fontLaunchGuard);

  auVar20 = FUN_00297480(uVar3,extraout_x1_02,&cf_xzy_fontLaunchGuardCount);

  uVar4 = auVar20._8_8_;

  if (4 < auVar20._0_8_) {

    FUN_0029d080(uVar3,uVar4,0,&cf_xzy_customFontEnabled);

    FUN_0029efa0(uVar3,extraout_x1_03,0,&cf_xzy_fontLaunchGuardCount);

    FUN_002a4a40(uVar3);

    uVar4 = extraout_x1_04;

  }

  iVar2 = FUN_002924c0(uVar3,uVar4,&cf_xzy_customFontEnabled);

  if (iVar2 != 0) {

    FUN_0029efa0(uVar3,extraout_x1_05,auVar20._0_8_ + 1,&cf_xzy_fontLaunchGuardCount);

    FUN_002a4a40(uVar3);

    local_98 = &local_a0;

    local_a0 = 0;

    local_90 = 0x3032000000;

    local_88 = FUN_0018cee4;

    pcStack_80 = FUN_0018cef4;

    local_78 = 0;

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    local_c8 = PTR___NSConcreteStackBlock_003886f0;

    local_c0 = 0xc2000000;

    local_b8 = FUN_0018cefc;

    puStack_b0 = &DAT_0038df60;

    local_a8 = &local_a0;

    FUN_002912a0(uVar4,auVar20._8_8_,

                 *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_003883b0,0,

                 auVar20._0_8_,&local_c8);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    lVar15 = local_98[5];

    local_98[5] = lVar5;

    _objc_release(lVar15);

    _objc_release(auVar20._0_8_);

    _objc_release(uVar4);

    __Block_object_dispose(&local_a0,8);

    _objc_release(local_78);

  }

  _objc_getClass("UIFont");

  uVar4 = _object_getClass();

  _MSHookMessageEx(uVar4,"systemFontOfSize:",FUN_0018d028,&DAT_003e94c0);

  _MSHookMessageEx(uVar4,"boldSystemFontOfSize:",FUN_0018d0d0,&DAT_003e94c8);

  _MSHookMessageEx(uVar4,"systemFontOfSize:weight:",FUN_0018d178,&DAT_003e94d0);

  _MSHookMessageEx(uVar4,"fontWithName:size:",FUN_0018d254,&DAT_003e94d8);

  _MSHookMessageEx(uVar4,"preferredFontForTextStyle:",FUN_0018d31c,&DAT_003e94e0);

  uVar4 = _objc_getClass("WKWebView");

  _MSHookMessageEx(uVar4,"initWithFrame:configuration:",FUN_0018d4dc,&DAT_003e94e8);

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  FUN_002a4460(uVar6,extraout_x1_06,&cf_CoverRes_reFont);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  uVar11 = auVar20._0_8_;

  auVar20 = FUN_00295160(uVar11,auVar20._8_8_,uVar4);

  if ((auVar20._0_8_ & 1) == 0) {

    FUN_00293a60(uVar11,auVar20._8_8_,uVar4,1,0,0);

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  uVar12 = auVar20._0_8_;

  auVar20 = FUN_002924c0(uVar12,auVar20._8_8_,&cf_xzy_customFontEnabled);

  if ((auVar20._0_8_ & 1) != 0) {

    FUN_002a45e0(uVar12,auVar20._8_8_,&cf_xzy_customFontFile);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    auVar20 = FUN_00297fa0();

    if (auVar20._0_8_ != 0) {

      FUN_002a4460(uVar4,auVar20._8_8_,uVar7);

      auVar20 = _objc_retainAutoreleasedReturnValue();

      uVar13 = auVar20._0_8_;

      iVar2 = FUN_00295160(uVar11,auVar20._8_8_,uVar13);

      if (iVar2 != 0) {

        _objc_retain(uVar13);

        FUN_00294020(&_OBJC_CLASS___NSData,extraout_x1_07,uVar13);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 != 0) {

          uVar8 = _CGDataProviderCreateWithCFData(lVar5);

          lVar15 = _CGFontCreateWithDataProvider();

          _CGDataProviderRelease(uVar8);

          if (lVar15 != 0) {

            local_a0 = 0;

            uVar9 = _CTFontManagerRegisterGraphicsFont(lVar15,&local_a0);

            if ((uVar9 & 1) == 0) {

              if (local_a0 != 0) {

                _CFRelease();

              }

              _CGFontRelease(lVar15);

            }

            else {

              lVar10 = _CGFontCopyPostScriptName(lVar15);

              _CGFontRelease(lVar15);

              auVar20 = FUN_00297fa0(lVar10);

              if (auVar20._0_8_ != 0) {

                FUN_002955a0(0x4028000000000000,&_OBJC_CLASS___UIFont,auVar20._8_8_,lVar10);

                lVar15 = _objc_retainAutoreleasedReturnValue();

                _objc_release();

                if (lVar15 != 0) {

                  _objc_retain(lVar10);

                  lVar15 = DAT_003e8e48;

                  DAT_003e8e48 = lVar10;

                  _objc_release(lVar15);

                }

              }

              _objc_release(lVar10);

            }

          }

        }

        _objc_release(lVar5);

        _objc_release(uVar13);

      }

      _objc_release(uVar13);

    }

    _objc_release(uVar7);

  }

  _objc_release(uVar12);

  _objc_release(uVar11);

  _objc_release(uVar4);

  _objc_release(uVar6);

  DAT_003e94f0 = DAT_003e94b8 != 0.0 || DAT_003e8e48 != 0;

  if ((DAT_003e8e48 != 0) &&

     (iVar2 = FUN_002924c0(uVar3,extraout_x1_08,&cf_xzy_webFontInjectEnabled), iVar2 != 0)) {

    _NSSearchPathForDirectoriesInDomains(9,1,1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00295440();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar4);

    FUN_002a4460(uVar6,extraout_x1_09,&cf_CoverRes_reFont);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45e0(uVar3,auVar20._8_8_,&cf_xzy_customFontFile);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    auVar21 = FUN_00297fa0();

    if (auVar21._0_8_ != 0) {

      FUN_002a4460(auVar20._0_8_,auVar21._8_8_,uVar4);

      auVar21 = _objc_retainAutoreleasedReturnValue();

      FUN_00294020(&_OBJC_CLASS___NSData,auVar21._8_8_,auVar21._0_8_);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar21._0_8_);

      if (lVar5 != 0) {

        FUN_00292140(lVar5,extraout_x1_10,0);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_00299b20(uVar4);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_002984e0();

        uVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar12);

        iVar2 = FUN_00297820(uVar7,extraout_x1_11,&cf_otf);

        pcVar1 = &cf_font_otf;

        if (iVar2 == 0) {

          pcVar1 = &cf_font_ttf;

        }

        _objc_retain(pcVar1);

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_12,

                     &

                     cf__function___if_document_getElementById__xzy_cf___return_vars_document_createElement__style___s_id__xzy_cf__s_textContent___font_face_font_family__XZYCustom__src_url_data____base64_____font_weight_1999____not_i__not__class___icon____not__class___Icon____not__style___iconfont____font_family__XZYCustom__sans_serif_important_____document_head__document_documentElement__appendChild_s______

                    );

        uVar13 = _objc_retainAutoreleasedReturnValue();

        uVar12 = DAT_003e8e50;

        DAT_003e8e50 = uVar13;

        _objc_release(uVar12);

        DAT_003e94f1 = 1;

        _objc_release(pcVar1);

        _objc_release(uVar7);

        _objc_release(uVar11);

      }

      _objc_release(lVar5);

    }

    _objc_release(uVar4);

    _objc_release(auVar20._0_8_);

    _objc_release(uVar6);

  }

  if (DAT_003e8e48 != 0) {

    _pthread_setspecific(DAT_003e94b0,(void *)((long)&MACH_HEADER.magic + 1));

    uVar16 = 8;

    dVar19 = DAT_003e94b8;

    do {

      dVar18 = 1.0;

      if (1.0 <= dVar19 + (double)uVar16) {

        dVar18 = dVar19 + (double)uVar16;

      }

      uVar14 = (uint)(dVar18 + dVar18);

      if (dVar18 + dVar18 != (double)uVar14 || 0xc5 < uVar14 - 2) {

        uVar14 = 0xffffffff;

      }

      if ((-1 < (int)uVar14) && (*(long *)(&DAT_003e8e58 + (ulong)uVar14 * 8) == 0)) {

        FUN_002955a0(&_OBJC_CLASS___UIFont);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 != 0) {

          _objc_retain(lVar5);

          uVar4 = *(undefined8 *)(&DAT_003e8e58 + (ulong)uVar14 * 8);

          *(long *)(&DAT_003e8e58 + (ulong)uVar14 * 8) = lVar5;

          _objc_release(uVar4);

        }

        _objc_release(lVar5);

        dVar19 = DAT_003e94b8;

      }

      uVar16 = uVar16 + 1;

    } while (uVar16 != 0x1f);

    _pthread_setspecific(DAT_003e94b0,(void *)0x0);

  }

  _objc_release(uVar3);

  return;

}






// ==== FUN_0018cee4 @0x18cee4 ====  [src: FUN__part4.c]


void FUN_0018cee4(long param_1,long param_2)



{

  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);

  *(undefined8 *)(param_2 + 0x28) = 0;

  return;

}






// ==== FUN_0018cef4 @0x18cef4 ====  [src: FUN__part4.c]


void FUN_0018cef4(long param_1)



{

  _objc_release(*(undefined8 *)(param_1 + 0x28));

  return;

}






// ==== FUN_0018cefc @0x18cefc ====  [src: FUN__part4.c]


void FUN_0018cefc(long param_1)



{

  dispatch_time_t dVar1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  

  dVar1 = _dispatch_time(0,2000000000);

  _dispatch_after(dVar1,PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038df40);

  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) != 0) {

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b4e0(auVar4._0_8_,auVar4._8_8_,

                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));

    _objc_release(auVar4._0_8_);

    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);

    uVar2 = *(undefined8 *)(lVar3 + 0x28);

    *(undefined8 *)(lVar3 + 0x28) = 0;

    _objc_release(uVar2);

    return;

  }

  return;

}






// ==== FUN_0018cfac @0x18cfac ====  [src: FUN__part4.c]


void FUN_0018cfac(void)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029efa0(auVar2._0_8_,auVar2._8_8_,0,&cf_xzy_fontLaunchGuardCount);

  _objc_release(auVar2._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  return;

}






// ==== FUN_0018d028 @0x18d028 ====  [src: FUN__part4.c]


void FUN_0018d028(double param_1,undefined8 param_2,undefined8 param_3)



{

  void *pvVar1;

  long lVar2;

  double dVar3;

  

  if ((DAT_003e94f0 == '\x01') &&

     (pvVar1 = _pthread_getspecific(DAT_003e94b0), pvVar1 == (void *)0x0)) {

    dVar3 = param_1 + DAT_003e94b8;

    param_1 = 1.0;

    if (1.0 <= dVar3) {

      param_1 = dVar3;

    }

    if (DAT_003e8e48 != 0) {

      FUN_0018d628(param_1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if (lVar2 != 0) goto LAB_0018d084;

    }

  }

  (*DAT_003e94c0)(param_1,param_2,param_3);

  _objc_retainAutoreleasedReturnValue();

LAB_0018d084:

  _objc_autoreleaseReturnValue();

  return;

}






// ==== FUN_0018d0d0 @0x18d0d0 ====  [src: FUN__part4.c]


void FUN_0018d0d0(double param_1,undefined8 param_2,undefined8 param_3)



{

  void *pvVar1;

  long lVar2;

  double dVar3;

  

  if ((DAT_003e94f0 == '\x01') &&

     (pvVar1 = _pthread_getspecific(DAT_003e94b0), pvVar1 == (void *)0x0)) {

    dVar3 = param_1 + DAT_003e94b8;

    param_1 = 1.0;

    if (1.0 <= dVar3) {

      param_1 = dVar3;

    }

    if (DAT_003e8e48 != 0) {

      FUN_0018d828(param_1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if (lVar2 != 0) goto LAB_0018d12c;

    }

  }

  (*DAT_003e94c8)(param_1,param_2,param_3);

  _objc_retainAutoreleasedReturnValue();

LAB_0018d12c:

  _objc_autoreleaseReturnValue();

  return;

}






// ==== FUN_0018d178 @0x18d178 ====  [src: FUN__part4.c]


void FUN_0018d178(double param_1,double param_2,undefined8 param_3,undefined8 param_4)



{

  void *pvVar1;

  long lVar2;

  double dVar3;

  

  if ((DAT_003e94f0 == '\x01') &&

     (pvVar1 = _pthread_getspecific(DAT_003e94b0), pvVar1 == (void *)0x0)) {

    dVar3 = param_1 + DAT_003e94b8;

    param_1 = 1.0;

    if (1.0 <= dVar3) {

      param_1 = dVar3;

    }

    if (DAT_003e8e48 != 0) {

      if (*(double *)PTR__UIFontWeightSemibold_00388430 <= param_2) {

        FUN_0018d828(param_1);

        lVar2 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_0018d628(param_1);

        lVar2 = _objc_retainAutoreleasedReturnValue();

      }

      if (lVar2 != 0) goto LAB_0018d1dc;

    }

  }

  (*DAT_003e94d0)(param_1,param_2,param_3,param_4);

  _objc_retainAutoreleasedReturnValue();

LAB_0018d1dc:

  _objc_autoreleaseReturnValue();

  return;

}






// ==== FUN_0018d254 @0x18d254 ====  [src: FUN__part4.c]


void FUN_0018d254(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  void *pvVar1;

  undefined8 uVar2;

  double dVar3;

  

  _objc_retain(param_4);

  dVar3 = param_1;

  if (((DAT_003e94f0 == '\x01') &&

      (pvVar1 = _pthread_getspecific(DAT_003e94b0), pvVar1 == (void *)0x0)) && (DAT_003e94b8 != 0.0)

     ) {

    dVar3 = 1.0;

    if (1.0 <= param_1 + DAT_003e94b8) {

      dVar3 = param_1 + DAT_003e94b8;

    }

  }

  (*DAT_003e94d8)(dVar3,param_2,param_3,param_4);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(param_4);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}






// ==== FUN_0018d31c @0x18d31c ====  [src: FUN__part4.c]


void FUN_0018d31c(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  void *pvVar1;

  long lVar2;

  long lVar3;

  double dVar4;

  double dVar5;

  

  _objc_retain(param_3);

  if ((DAT_003e94f0 != '\x01') ||

     (pvVar1 = _pthread_getspecific(DAT_003e94b0), pvVar1 != (void *)0x0)) {

    (*DAT_003e94e0)(param_1,param_2,param_3);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    goto LAB_0018d38c;

  }

  _pthread_setspecific(DAT_003e94b0,(void *)((long)&MACH_HEADER.magic + 1));

  (*DAT_003e94e0)(param_1,param_2,param_3);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _pthread_setspecific(DAT_003e94b0,(void *)0x0);

  if (lVar3 == 0) {

    lVar2 = 0;

  }

  else {

    dVar4 = (double)FUN_0029a040(lVar3);

    dVar5 = 1.0;

    if (1.0 <= dVar4 + DAT_003e94b8) {

      dVar5 = dVar4 + DAT_003e94b8;

    }

    if (DAT_003e8e48 != 0) {

      FUN_0018d628(dVar5);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if (lVar2 != 0) goto LAB_0018d488;

    }

    if (DAT_003e94b8 == 0.0) {

      _objc_retain(lVar3);

      lVar2 = lVar3;

    }

    else {

      _pthread_setspecific(DAT_003e94b0,(void *)((long)&MACH_HEADER.magic + 1));

      FUN_002955c0(dVar5,lVar3);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _pthread_setspecific(DAT_003e94b0,(void *)0x0);

    }

  }

LAB_0018d488:

  _objc_release(lVar3);

LAB_0018d38c:

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(lVar2);

  return;

}






// ==== FUN_0018d4dc @0x18d4dc ====  [src: FUN__part4.c]


undefined8

FUN_0018d4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

            undefined8 param_5,undefined8 param_6,undefined8 param_7)



{

  code *pcVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain(param_7);

  if (DAT_003e94f1 == '\x01' && DAT_003e8e50 != 0) {

    auVar3 = _objc_alloc(&_OBJC_CLASS___WKUserScript);

    uVar2 = FUN_00296e40(auVar3._0_8_,auVar3._8_8_,DAT_003e8e50,1,0);

    FUN_002a5f60(param_7);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00291460(auVar3._0_8_,auVar3._8_8_,uVar2);

    _objc_release(auVar3._0_8_);

    _objc_release(uVar2);

  }

  pcVar1 = DAT_003e94e8;

  _objc_retain(param_5);

  uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);

  _objc_release(param_7);

  _objc_release(param_5);

  return uVar2;

}






// ==== FUN_0018da20 @0x18da20 ====  [src: FUN__part4.c]


undefined1  [16] FUN_0018da20(void)



{

  undefined1 auVar1 [16];

  

  FUN_0018da3c();

  auVar1._8_8_ = 0;

  auVar1._0_8_ = DAT_003e94f8;

  return auVar1;

}






// ==== FUN_0018da3c @0x18da3c ====  [src: FUN__part4.c]


void FUN_0018da3c(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  if ((DAT_003e9628 & 1) != 0) {

    return;

  }

  DAT_003e9628 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  auVar3 = FUN_002924c0(uVar1,auVar3._8_8_,&cf_coversEnabled);

  uVar2 = auVar3._0_8_;

  if ((auVar3._0_4_ != 0) &&

     (uVar2 = FUN_002924c0(uVar1,auVar3._8_8_,&cf_mesMsgMergeEnabled), (int)uVar2 != 0)) {

    uVar2 = FUN_00005038();

  }

  DAT_003e95c8 = (undefined1)uVar2;

  DAT_003e9630 = FUN_0019e75c(uVar1,&cf_mesMsgMergeMessageOffsetOther);

  DAT_003e9638 = FUN_0019e75c(uVar1,&cf_mesMsgMergeMessageOffsetSelf);

  if (DAT_003e95d0 == 0) {

    DAT_003e95d0 = _objc_getClass("TextMessageSubViewModel");

  }

  if (DAT_003e9640 == 0) {

    DAT_003e9640 = _objc_getClass("MMCPLabel");

  }

  FUN_0018dc7c();

  _objc_release(uVar1);

  return;

}






// ==== FUN_0018db40 @0x18db40 ====  [src: FUN__part4.c]


undefined1  [16] FUN_0018db40(undefined8 param_1)



{

  undefined8 *puVar1;

  int iVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  auVar6 = _objc_opt_respondsToSelector(param_1,"viewModel");

  if ((auVar6._0_8_ & 1) == 0) {

    iVar2 = 0;

  }

  else {

    FUN_00299c80(param_1,auVar6._8_8_,"viewModel");

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_opt_respondsToSelector(uVar3,"isSender");

    if ((uVar4 & 1) == 0) {

      iVar2 = 0;

    }

    else {

      iVar2 = FUN_00297a80(uVar3);

    }

    _objc_release(uVar3);

  }

  FUN_0018da3c();

  puVar1 = &DAT_003e95a0;

  if (iVar2 == 0) {

    puVar1 = &DAT_003e95a8;

  }

  uVar3 = *puVar1;

  uVar5 = 0;

  _objc_release(param_1);

  auVar6._8_8_ = uVar5;

  auVar6._0_8_ = uVar3;

  return auVar6;

}






// ==== FUN_0018dc7c @0x18dc7c ====  [src: FUN__part4.c]


void FUN_0018dc7c(void)



{

  cfstringStruct *pcVar1;

  ulong uVar2;

  ulong uVar3;

  ulong uVar4;

  ulong uVar5;

  ulong uVar6;

  cfstringStruct *pcVar7;

  ulong uVar8;

  long lVar9;

  long lVar10;

  bool bVar11;

  bool bVar12;

  bool bVar13;

  bool bVar14;

  bool bVar15;

  int iVar16;

  uint uVar17;

  uint uVar18;

  undefined8 uVar19;

  cfstringStruct *pcVar20;

  cfstringStruct *pcVar21;

  long lVar22;

  long lVar23;

  long lVar24;

  cfstringStruct *pcVar25;

  cfstringStruct *pcVar26;

  long lVar27;

  long lVar28;

  long lVar29;

  long lVar30;

  ulong uVar31;

  long lVar32;

  long lVar33;

  long lVar34;

  long lVar35;

  long lVar36;

  long lVar37;

  long lVar38;

  cfstringStruct *pcVar39;

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

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 uVar40;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  long lVar41;

  cfstringStruct *pcVar42;

  uint uVar43;

  float fVar44;

  float fVar45;

  float fVar46;

  double dVar47;

  double dVar48;

  double dVar49;

  double dVar50;

  double dVar51;

  double dVar52;

  double dVar53;

  undefined1 auVar54 [16];

  undefined1 auVar55 [16];

  undefined1 auVar56 [16];

  undefined1 auVar57 [16];

  undefined1 auVar58 [16];

  undefined1 auVar59 [16];

  long local_1b8;

  undefined *local_d8;

  undefined8 local_d0;

  code *local_c8;

  undefined *puStack_c0;

  long local_b8;

  long local_b0;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar54 = _objc_retainAutoreleasedReturnValue();

  uVar19 = auVar54._0_8_;

  FUN_002a45e0(uVar19,auVar54._8_8_,&cf_aabDateTimeColorLight);

  pcVar20 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar20 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar20;

  }

  _objc_retain();

  _objc_release(pcVar20);

  FUN_002a45e0(uVar19,extraout_x1,&cf_aabDateTimeColorDark);

  pcVar21 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar20 = &cf___;

  if (pcVar21 != (cfstringStruct *)0x0) {

    pcVar20 = pcVar21;

  }

  _objc_retain();

  _objc_release(pcVar21);

  lVar22 = FUN_0018e9f8(uVar19,2);

  lVar23 = FUN_0018e9f8(uVar19,3);

  lVar24 = FUN_0018e9f8(uVar19,0);

  auVar54 = FUN_0018e9f8(uVar19,1);

  auVar55 = FUN_00297480(uVar19,auVar54._8_8_,&cf_aabDateTimeFormatStyle);

  auVar56 = FUN_00297480(uVar19,auVar55._8_8_,&cf_aabDateTimeLocaleStyle);

  auVar57 = FUN_00297480(uVar19,auVar56._8_8_,&cf_aabDateTimeDisplayMode);

  auVar58 = FUN_00297480(uVar19,auVar57._8_8_,&cf_aabDateTimeDisplayDirection);

  FUN_002a45e0(uVar19,auVar58._8_8_,&cf_aabDateTimeCustomLine1);

  pcVar25 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar21 = &cf___;

  if (pcVar25 != (cfstringStruct *)0x0) {

    pcVar21 = pcVar25;

  }

  _objc_retain();

  _objc_release(pcVar25);

  FUN_002a45e0(uVar19,extraout_x1_00,&cf_aabDateTimeCustomLine2);

  pcVar26 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar25 = &cf___;

  if (pcVar26 != (cfstringStruct *)0x0) {

    pcVar25 = pcVar26;

  }

  _objc_retain();

  _objc_release(pcVar26);

  FUN_002a45e0(uVar19,extraout_x1_01,&cf_aabDateTimeCustomLine1Other);

  auVar59 = _objc_retainAutoreleasedReturnValue();

  pcVar26 = auVar59._0_8_;

  FUN_002a45e0(uVar19,auVar59._8_8_,&cf_aabDateTimeCustomLine2Other);

  auVar59 = _objc_retainAutoreleasedReturnValue();

  uVar40 = auVar59._8_8_;

  if (pcVar26 == (cfstringStruct *)0x0) {

    _objc_retain(pcVar21);

    pcVar26 = pcVar21;

    uVar40 = extraout_x1_02;

  }

  pcVar42 = auVar59._0_8_;

  if (auVar59._0_8_ == (cfstringStruct *)0x0) {

    _objc_retain(pcVar25);

    uVar40 = extraout_x1_03;

    pcVar42 = pcVar25;

  }

  auVar59 = FUN_00297480(uVar19,uVar40,&cf_aabDashLineExtendPt);

  lVar27 = auVar59._0_8_;

  auVar59 = FUN_00297480(uVar19,auVar59._8_8_,&cf_aabBelowExtraShiftPt);

  lVar28 = auVar59._0_8_;

  if (lVar28 < -9) {

    lVar28 = -10;

  }

  if (9 < lVar28) {

    lVar28 = 10;

  }

  auVar59 = FUN_00297480(uVar19,auVar59._8_8_,&cf_aabAboveExtraShiftPt);

  lVar29 = auVar59._0_8_;

  if (lVar29 < -9) {

    lVar29 = -10;

  }

  if (9 < lVar29) {

    lVar29 = 10;

  }

  FUN_00299520(uVar19,auVar59._8_8_,&cf_aabTextSizeOffset);

  auVar59 = _objc_retainAutoreleasedReturnValue();

  if (auVar59._0_8_ == 0) {

    dVar50 = 0.0;

  }

  else {

    fVar44 = (float)FUN_00295460(uVar19,auVar59._8_8_,&cf_aabTextSizeOffset);

    dVar50 = (double)fVar44;

  }

  _objc_release(auVar59._0_8_);

  dVar47 = -3.0;

  if (-3.0 <= dVar50) {

    dVar47 = dVar50;

  }

  dVar50 = 3.0;

  if (dVar47 <= 3.0) {

    dVar50 = dVar47;

  }

  fVar45 = (float)FUN_00295460(uVar19,extraout_x1_04,&cf_aabTextYShiftSelf);

  fVar46 = (float)FUN_00295460(uVar19,extraout_x1_05,&cf_aabTextYShiftOther);

  fVar44 = -10.0;

  if (-10.0 < fVar45) {

    fVar44 = fVar45;

  }

  dVar47 = 10.0;

  if ((double)fVar44 <= 10.0) {

    dVar47 = (double)fVar44;

  }

  fVar44 = -10.0;

  if (-10.0 < fVar46) {

    fVar44 = fVar46;

  }

  dVar51 = 10.0;

  if ((double)fVar44 <= 10.0) {

    dVar51 = (double)fVar44;

  }

  auVar59 = FUN_00297480(uVar19,extraout_x1_06,&cf_aabPositionMode);

  uVar31 = 0;

  if (auVar59._0_8_ < 2) {

    uVar31 = auVar59._0_8_;

  }

  FUN_00299520(uVar19,auVar59._8_8_,&cf_aabPositionModeSelf);

  lVar30 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  auVar59._8_8_ = extraout_x1_07;

  auVar59._0_8_ = uVar31;

  if (lVar30 != 0) {

    auVar59 = FUN_00297480(uVar19,extraout_x1_07,&cf_aabPositionModeSelf);

  }

  FUN_00299520(uVar19,auVar59._8_8_,&cf_aabPositionModeOther);

  lVar30 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar30 != 0) {

    uVar31 = FUN_00297480(uVar19,extraout_x1_08,&cf_aabPositionModeOther);

  }

  uVar2 = 0;

  if (auVar59._0_8_ < 3) {

    uVar2 = auVar59._0_8_;

  }

  uVar3 = 0;

  if (uVar31 < 3) {

    uVar3 = uVar31;

  }

  uVar31 = 0;

  if (auVar55._0_8_ < 4) {

    uVar31 = auVar55._0_8_;

  }

  uVar4 = 0;

  if (auVar56._0_8_ < 3) {

    uVar4 = auVar56._0_8_;

  }

  uVar5 = 0;

  if (auVar57._0_8_ < 9) {

    uVar5 = auVar57._0_8_;

  }

  uVar6 = 0;

  if (auVar58._0_8_ < 2) {

    uVar6 = auVar58._0_8_;

  }

  if (lVar27 < -0x13) {

    lVar27 = -0x14;

  }

  if (0x13 < lVar27) {

    lVar27 = 0x14;

  }

  lVar30 = FUN_0018eb20(uVar19,2);

  lVar32 = FUN_0018eb20(uVar19,3);

  lVar33 = FUN_0018eb20(uVar19,0);

  auVar55 = FUN_0018eb20(uVar19,1);

  FUN_00299520(uVar19,auVar55._8_8_,&cf_aabGuideLinePosSelf);

  auVar56 = _objc_retainAutoreleasedReturnValue();

  if (auVar56._0_8_ == 0) {

    lVar41 = 2;

  }

  else {

    lVar34 = FUN_00297480(uVar19,auVar56._8_8_,&cf_aabGuideLinePosSelf);

    lVar41 = 0;

    if (lVar34 != 0) {

      lVar41 = 2;

    }

  }

  _objc_release(auVar56._0_8_);

  FUN_00299520(uVar19,extraout_x1_09,&cf_aabGuideLinePosOther);

  auVar56 = _objc_retainAutoreleasedReturnValue();

  if (auVar56._0_8_ == 0) {

    lVar34 = 2;

  }

  else {

    lVar35 = FUN_00297480(uVar19,auVar56._8_8_,&cf_aabGuideLinePosOther);

    lVar34 = 0;

    if (lVar35 != 0) {

      lVar34 = 2;

    }

  }

  _objc_release(auVar56._0_8_);

  FUN_00299520(uVar19,extraout_x1_10,&cf_aabGuideLineXPadSelf);

  auVar56 = _objc_retainAutoreleasedReturnValue();

  if (auVar56._0_8_ == 0) {

    dVar52 = 8.0;

  }

  else {

    fVar44 = (float)FUN_00295460(uVar19,auVar56._8_8_,&cf_aabGuideLineXPadSelf);

    dVar52 = (double)fVar44;

  }

  _objc_release(auVar56._0_8_);

  FUN_00299520(uVar19,extraout_x1_11,&cf_aabGuideLineXPadOther);

  auVar56 = _objc_retainAutoreleasedReturnValue();

  if (auVar56._0_8_ == 0) {

    dVar53 = 8.0;

  }

  else {

    fVar44 = (float)FUN_00295460(uVar19,auVar56._8_8_,&cf_aabGuideLineXPadOther);

    dVar53 = (double)fVar44;

  }

  _objc_release(auVar56._0_8_);

  dVar48 = -40.0;

  if (-40.0 <= dVar52) {

    dVar48 = dVar52;

  }

  dVar52 = 40.0;

  if (dVar48 <= 40.0) {

    dVar52 = dVar48;

  }

  dVar48 = -40.0;

  if (-40.0 <= dVar53) {

    dVar48 = dVar53;

  }

  dVar53 = 40.0;

  if (dVar48 <= 40.0) {

    dVar53 = dVar48;

  }

  uVar40 = extraout_x1_12;

  if (DAT_003e9538 == 0) {

LAB_0018e26c:

    uVar17 = 1;

  }

  else {

    pcVar7 = &cf___;

    if (DAT_003e9528 != (cfstringStruct *)0x0) {

      pcVar7 = DAT_003e9528;

    }

    iVar16 = FUN_00297820(pcVar1,extraout_x1_12,pcVar7);

    uVar40 = extraout_x1_13;

    if (iVar16 == 0) goto LAB_0018e26c;

    pcVar7 = &cf___;

    if (DAT_003e9530 != (cfstringStruct *)0x0) {

      pcVar7 = DAT_003e9530;

    }

    uVar17 = FUN_00297820(pcVar20,extraout_x1_13,pcVar7);

    uVar17 = uVar17 ^ 1;

    uVar40 = extraout_x1_14;

  }

  uVar8 = DAT_003e9570;

  uVar43 = 1;

  if (((lVar22 == DAT_003e9548) && (lVar23 == DAT_003e9550)) && (lVar24 == DAT_003e9558)) {

    uVar43 = (uint)(auVar54._0_8_ != DAT_003e9560);

  }

  bVar12 = uVar31 != DAT_003e9568;

  bVar13 = uVar4 != DAT_003e9570;

  uVar18 = 1;

  if ((uVar5 == DAT_003e9578) && (uVar6 == DAT_003e9580)) {

    pcVar7 = &cf___;

    if (DAT_003e9508 != (cfstringStruct *)0x0) {

      pcVar7 = DAT_003e9508;

    }

    iVar16 = FUN_00297820(pcVar21,uVar40,pcVar7);

    if (iVar16 != 0) {

      pcVar7 = &cf___;

      if (DAT_003e9510 != (cfstringStruct *)0x0) {

        pcVar7 = DAT_003e9510;

      }

      iVar16 = FUN_00297820(pcVar25,extraout_x1_15,pcVar7);

      if (iVar16 != 0) {

        pcVar7 = &cf___;

        if (DAT_003e9518 != (cfstringStruct *)0x0) {

          pcVar7 = DAT_003e9518;

        }

        iVar16 = FUN_00297820(pcVar26,extraout_x1_16,pcVar7);

        if (iVar16 != 0) {

          pcVar7 = &cf___;

          if (DAT_003e9520 != (cfstringStruct *)0x0) {

            pcVar7 = DAT_003e9520;

          }

          uVar18 = FUN_00297820(pcVar42,extraout_x1_17,pcVar7);

          uVar18 = uVar18 ^ 1;

          goto LAB_0018e3b4;

        }

      }

    }

    uVar18 = 1;

  }

LAB_0018e3b4:

  lVar10 = DAT_003e9598;

  lVar9 = DAT_003e9590;

  lVar35 = DAT_003e9588;

  bVar11 = true;

  if (((lVar30 == DAT_003e6e68) && (lVar32 == DAT_003e6e70)) &&

     ((lVar33 == DAT_003e6e78 &&

      ((((auVar55._0_8_ == DAT_003e6e80 && (lVar41 == DAT_003e6e88)) && (lVar34 == DAT_003e6e90)) &&

       (dVar52 == DAT_003e6e98)))))) {

    bVar11 = dVar53 != DAT_003e6ea0;

  }

  dVar48 = dVar50 - DAT_003e94f8;

  dVar49 = ABS(dVar47 - DAT_003e95a0);

  if (ABS(dVar47 - DAT_003e95a0) <= ABS(dVar51 - DAT_003e95a8)) {

    dVar49 = ABS(dVar51 - DAT_003e95a8);

  }

  bVar14 = uVar2 != DAT_003e95b0;

  bVar15 = uVar3 != DAT_003e95b8;

  if ((((((uVar17 | uVar43 | uVar18) & 1) != 0 || (bVar12 || bVar13)) || (lVar27 != DAT_003e9588))

      || (((bVar11 || ((lVar28 != DAT_003e9590 || (lVar29 != DAT_003e9598)))) ||

          (0.01 < ABS(dVar48))))) || ((0.01 < dVar49 || (bVar14 || bVar15)))) {

    if (uVar17 != 0) {

      _objc_retain(pcVar1);

      pcVar7 = DAT_003e9528;

      DAT_003e9528 = pcVar1;

      _objc_release(pcVar7);

      _objc_retain(pcVar20);

      pcVar7 = DAT_003e9530;

      DAT_003e9530 = pcVar20;

      _objc_release(pcVar7);

      FUN_0018ec28(pcVar1);

      lVar36 = _objc_retainAutoreleasedReturnValue();

      if (lVar36 == 0) {

        FUN_00295d00(&_OBJC_CLASS___UIColor);

        local_1b8 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _objc_retain(lVar36);

        local_1b8 = lVar36;

      }

      _objc_release(lVar36);

      FUN_0018ec28(pcVar20);

      lVar36 = _objc_retainAutoreleasedReturnValue();

      if (lVar36 == 0) {

        FUN_00295d00(&_OBJC_CLASS___UIColor);

        lVar37 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _objc_retain(lVar36);

        lVar37 = lVar36;

      }

      _objc_release(lVar36);

      local_d8 = PTR___NSConcreteStackBlock_003886f0;

      local_d0 = 0xc2000000;

      local_c8 = FUN_0018edcc;

      puStack_c0 = &DAT_0038df90;

      local_b8 = lVar37;

      _objc_retain(local_1b8);

      local_b0 = local_1b8;

      _objc_retain(lVar37);

      FUN_00293000(&_OBJC_CLASS___UIColor,extraout_x1_18,&local_d8);

      lVar38 = _objc_retainAutoreleasedReturnValue();

      lVar36 = DAT_003e9538;

      DAT_003e9538 = lVar38;

      _objc_release(lVar36);

      _objc_release(local_b0);

      _objc_release(local_b8);

      _objc_release(lVar37);

      _objc_release(local_1b8);

    }

    if (uVar43 != 0) {

      DAT_003e9548 = lVar22;

      DAT_003e9550 = lVar23;

      DAT_003e9558 = lVar24;

      DAT_003e9560 = auVar54._0_8_;

    }

    if ((bVar12 || bVar13) && (DAT_003e9568 = uVar31, DAT_003e9570 = uVar4, uVar4 != uVar8)) {

      FUN_0029b240(DAT_003e95c0);

    }

    if (uVar18 != 0) {

      DAT_003e9578 = uVar5;

      DAT_003e9580 = uVar6;

      pcVar39 = (cfstringStruct *)FUN_002937a0(pcVar21);

      pcVar7 = DAT_003e9508;

      DAT_003e9508 = pcVar39;

      _objc_release(pcVar7);

      pcVar39 = (cfstringStruct *)FUN_002937a0(pcVar25);

      pcVar7 = DAT_003e9510;

      DAT_003e9510 = pcVar39;

      _objc_release(pcVar7);

      pcVar39 = (cfstringStruct *)FUN_002937a0(pcVar26);

      pcVar7 = DAT_003e9518;

      DAT_003e9518 = pcVar39;

      _objc_release(pcVar7);

      pcVar39 = (cfstringStruct *)FUN_002937a0(pcVar42);

      pcVar7 = DAT_003e9520;

      DAT_003e9520 = pcVar39;

      _objc_release(pcVar7);

    }

    if (lVar27 != lVar35) {

      DAT_003e9588 = lVar27;

    }

    if (bVar11) {

      DAT_003e6e68 = lVar30;

      DAT_003e6e70 = lVar32;

      DAT_003e6e78 = lVar33;

      DAT_003e6e80 = auVar55._0_8_;

      DAT_003e6e88 = lVar41;

      DAT_003e6e90 = lVar34;

      DAT_003e6e98 = dVar52;

      DAT_003e6ea0 = dVar53;

    }

    if (lVar28 != lVar9) {

      DAT_003e9590 = lVar28;

    }

    if (lVar29 != lVar10) {

      DAT_003e9598 = lVar29;

    }

    if (0.01 < ABS(dVar48)) {

      DAT_003e94f8 = dVar50;

    }

    if (0.01 < dVar49) {

      DAT_003e95a0 = dVar47;

      DAT_003e95a8 = dVar51;

    }

    if (bVar14 || bVar15) {

      DAT_003e95b0 = uVar2;

      DAT_003e95b8 = uVar3;

      FUN_0003dca8();

    }

    DAT_003e9540 = DAT_003e9540 + 1;

  }

  _objc_release(pcVar42);

  _objc_release(pcVar26);

  _objc_release(pcVar25);

  _objc_release(pcVar21);

  _objc_release(pcVar20);

  _objc_release(pcVar1);

  _objc_release(uVar19);

  return;

}






// ==== FUN_0018e9f8 @0x18e9f8 ====  [src: FUN__part4.c]


ulong FUN_0018e9f8(undefined8 param_1,ulong param_2)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  cfstringStruct *pcVar4;

  

  _objc_retain();

  if (param_2 < 4) {

    pcVar4 = (cfstringStruct *)(&PTR_cf_aabDashLineStyleOtherLight_0038e2d0)[param_2];

  }

  else {

    pcVar4 = &cf_aabDashLineStyleSelfLight;

  }

  FUN_00299520(param_1,extraout_x1,pcVar4);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar3 = extraout_x1_00;

  if (lVar1 == 0) {

    FUN_00299520(param_1,extraout_x1_00,&cf_aabDashLineStyle);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar2 = 0;

    if (lVar1 == 0) goto LAB_0018ead8;

    pcVar4 = &cf_aabDashLineStyle;

    uVar3 = extraout_x1_01;

  }

  uVar2 = FUN_00297480(param_1,uVar3,pcVar4);

  if ((long)uVar2 < 10) {

    if (uVar2 < 10) goto LAB_0018ead8;

  }

  else {

    FUN_001aaf74();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar1 = FUN_00293860();

    _objc_release(uVar3);

    if ((long)(uVar2 - 10) < lVar1) goto LAB_0018ead8;

  }

  uVar2 = 0;

LAB_0018ead8:

  _objc_release(param_1);

  return uVar2;

}






// ==== FUN_0018eb20 @0x18eb20 ====  [src: FUN__part4.c]


ulong FUN_0018eb20(undefined8 param_1,ulong param_2)



{

  bool bVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  cfstringStruct *pcVar5;

  

  _objc_retain();

  if (param_2 < 4) {

    pcVar5 = (cfstringStruct *)(&PTR_cf_aabGuideLineStyleOtherLight_0038e2f0)[param_2];

  }

  else {

    pcVar5 = &cf_aabGuideLineStyleSelfLight;

  }

  FUN_00299520(param_1,extraout_x1,pcVar5);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 == 0) {

    uVar3 = 9;

  }

  else {

    uVar3 = FUN_00297480(param_1,extraout_x1_00,pcVar5);

    bVar1 = uVar3 < 10 || uVar3 - 100 < 0xc;

    if (0xffffffffffffffa5 < uVar3 - 100) {

      FUN_001ab458(2);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      lVar2 = FUN_00293860();

      bVar1 = (long)(uVar3 - 10) < lVar2;

      _objc_release(uVar4);

    }

    if (!bVar1) {

      uVar3 = 9;

    }

  }

  _objc_release(param_1);

  return uVar3;

}






// ==== FUN_0018ec28 @0x18ec28 ====  [src: FUN__part4.c]


void FUN_0018ec28(long param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  uint uVar5;

  uint uVar6;

  uint uVar7;

  double dVar8;

  undefined1 auVar9 [16];

  uint local_34;

  

  _objc_retain();

  if ((param_1 == 0) || (auVar9 = FUN_00297fa0(param_1), auVar9._0_8_ == 0)) {

    uVar4 = 0;

  }

  else {

    FUN_002a4560(param_1,auVar9._8_8_,&cf__,&cf___);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    auVar9 = FUN_00297fa0();

    uVar4 = auVar9._8_8_;

    if ((auVar9._0_8_ == 6) ||

       (auVar9 = FUN_00297fa0(uVar1), uVar4 = auVar9._8_8_, auVar9._0_8_ == 8)) {

      local_34 = 0;

      FUN_0029be20(&_OBJC_CLASS___NSScanner,uVar4,uVar1);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar2 = FUN_0029bde0(auVar9._0_8_,auVar9._8_8_,&local_34);

      if ((uVar2 & 1) == 0) {

        uVar4 = 0;

      }

      else {

        lVar3 = FUN_00297fa0(uVar1);

        if (lVar3 == 6) {

          uVar6 = local_34 >> 0x10 & 0xff;

          dVar8 = 1.0;

          uVar5 = local_34;

          uVar7 = local_34 >> 8;

        }

        else {

          uVar6 = local_34 >> 0x18;

          uVar7 = local_34 >> 0x10;

          dVar8 = (double)(local_34 & 0xff) / 255.0;

          uVar5 = local_34 >> 8;

        }

        FUN_00293040((double)uVar6 / 255.0,(double)(uVar7 & 0xff) / 255.0,

                     (double)(uVar5 & 0xff) / 255.0,dVar8,&_OBJC_CLASS___UIColor);

        uVar4 = _objc_retainAutoreleasedReturnValue();

      }

      _objc_release(auVar9._0_8_);

    }

    else {

      uVar4 = 0;

    }

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}






// ==== FUN_0018ee10 @0x18ee10 ====  [src: FUN__part4.c]


void FUN_0018ee10(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 long param_5)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar8;

  undefined8 uVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined1 auVar16 [16];

  

  _objc_retain();

  if (param_5 == 0) goto LAB_0018f134;

  uVar1 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar2 = _objc_opt_isKindOfClass(param_5,uVar1);

  if ((uVar2 & 1) == 0) goto LAB_0018f134;

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6ea8);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if ((lVar3 != 0) && (uVar2 = FUN_002978a0(lVar3), (uVar2 & 1) == 0)) {

    FUN_0011a8ec(param_5);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    lVar4 = auVar16._0_8_;

    if (lVar4 == 0) {

      FUN_002a62a0(param_5,auVar16._8_8_,0x1352577);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 != 0) goto LAB_0018eec0;

    }

    else {

LAB_0018eec0:

      uVar2 = FUN_002978a0(lVar4);

      if ((uVar2 & 1) == 0) {

        FUN_002a4880(lVar4);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar5 != 0) {

          auVar16 = _objc_opt_respondsToSelector(lVar4,"text");

          if ((auVar16._0_8_ & 1) == 0) {

            uVar1 = 0;

          }

          else {

            FUN_002a6080(lVar4,auVar16._8_8_,&cf_text);

            uVar1 = _objc_retainAutoreleasedReturnValue();

          }

          lVar5 = FUN_00297fa0(uVar1);

          if (lVar5 != 0) {

            FUN_002a4880(lVar4);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_00295600(lVar4);

            uVar8 = FUN_00293720(uVar6,extraout_x1,param_5);

            uVar13 = param_2;

            uVar14 = param_3;

            uVar15 = param_4;

            _objc_release(uVar6);

            FUN_002a4880(lVar3);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_00295600(lVar3);

            uVar9 = FUN_00293720(uVar6,extraout_x1_00,param_5);

            _objc_release(uVar6);

            dVar10 = (double)_CGRectGetMinY(uVar9,uVar13,uVar14,uVar15);

            dVar11 = (double)_CGRectGetHeight(uVar8,param_2,param_3,param_4);

            dVar12 = (double)_CGRectGetMinY(uVar8,param_2,param_3,param_4);

            dVar11 = (dVar10 + -3.0) - dVar11;

            if (0.5 < ABS(dVar12 - dVar11)) {

              dVar12 = (double)_CGRectGetMinY(uVar8,param_2,param_3,param_4);

              FUN_002a4880(lVar4);

              auVar16 = _objc_retainAutoreleasedReturnValue();

              dVar10 = dVar11;

              FUN_00293720(uVar8,dVar11,param_3,param_4,param_5,auVar16._8_8_,auVar16._0_8_);

              _objc_release(auVar16._0_8_);

              uVar13 = FUN_00295600(lVar4);

              FUN_0029e5e0(uVar13,dVar10,lVar4);

              FUN_002a62a0(param_5,extraout_x1_01,0x1352579);

              auVar16 = _objc_retainAutoreleasedReturnValue();

              uVar13 = auVar16._8_8_;

              lVar5 = auVar16._0_8_;

              if ((lVar5 != 0) && (lVar5 != lVar4)) {

                FUN_0018f1f8(dVar11 - dVar12,lVar5,param_5);

                uVar13 = extraout_x1_02;

              }

              FUN_002a62a0(param_5,uVar13,0x1352578);

              lVar7 = _objc_retainAutoreleasedReturnValue();

              if (((lVar7 != 0) && (lVar7 != lVar4)) && (lVar7 != lVar5)) {

                FUN_0018f1f8(dVar11 - dVar12,lVar7,param_5);

              }

              _objc_release(lVar7);

              _objc_release(lVar5);

            }

          }

          _objc_release(uVar1);

        }

      }

    }

    _objc_release(lVar4);

  }

  _objc_release(lVar3);

LAB_0018f134:

  _objc_release(param_5);

  return;

}





