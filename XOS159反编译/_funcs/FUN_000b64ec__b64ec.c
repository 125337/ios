// FUN_000b64ec @0xb64ec


uint FUN_000b64ec(long param_1)



{

  undefined *puVar1;

  int iVar2;

  uint uVar3;

  uint uVar4;

  uint uVar5;

  uint uVar6;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  ulong uVar10;

  ulong uVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined8 uVar15;

  uint uVar16;

  undefined1 auVar17 [16];

  

  if (*(char *)(param_1 + 0x28) != '\x01') goto LAB_000b6b08;

  uVar15 = *(undefined8 *)(param_1 + 0x20);

  if (DAT_003e76c0 == 0) {

    DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

  }

  lVar7 = DAT_003e76c0;

  _objc_retain(DAT_003e76c0);

  _objc_autorelease(lVar7);

  auVar17 = _objc_opt_isKindOfClass(uVar15,lVar7);

  if ((auVar17._0_8_ & 1) == 0) {

    _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e5ce0);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    uVar16 = FUN_002924e0();

    _objc_release(uVar15);

    _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e5cc8);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    uVar4 = FUN_002924e0();

    _objc_release(uVar15);

    _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e5cc0);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    uVar5 = FUN_002924e0();

    _objc_release(uVar15);

    iVar2 = FUN_000a96c8(*(undefined8 *)(param_1 + 0x20));

    if (iVar2 == 0) {

      _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e5cd0);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_002924e0();

      _objc_release(uVar15);

      _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e5cd8);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      iVar2 = FUN_002924e0();

      _objc_release(uVar15);

      if (iVar2 == 0) {

        uVar3 = 0;

      }

      else {

        uVar3 = FUN_00192180(*(undefined8 *)(param_1 + 0x20));

      }

      if (((uVar6 | uVar3) & 1) == 0) {

        if ((uVar16 & 1) == 0) goto LAB_000b6b08;

LAB_000b69e8:

        uVar16 = 0;

        goto LAB_000b6b0c;

      }

      if (((uVar16 | uVar5 & (uVar4 ^ 1)) & 1) != 0) {

        uVar16 = (uVar4 ^ 1) & uVar5;

        if (uVar3 == 0) {

          uVar16 = uVar4;

        }

        goto LAB_000b6b0c;

      }

    }

LAB_000b6b08:

    uVar16 = (uint)*(byte *)(param_1 + 0x28);

  }

  else {

    FUN_002a6080(*(undefined8 *)(param_1 + 0x20),auVar17._8_8_,&cf_parentModel);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    if (lVar7 == 0) {

LAB_000b66f0:

      _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e5cc8);

      lVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e5cd0);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      if (lVar8 != 0) {

        _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e5ce0);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        uVar10 = FUN_002924e0();

        _objc_release(uVar9);

        uVar4 = FUN_002924e0(lVar8);

        _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e5cc0);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        uVar5 = FUN_002924e0();

        _objc_release(uVar9);

        uVar11 = FUN_002924e0(uVar15);

        _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e6478);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        uVar6 = FUN_002924e0();

        _objc_release(uVar9);

        if ((uVar11 & 1) != 0) {

          if (lVar7 != 0) goto LAB_000b68b0;

          goto LAB_000b6964;

        }

LAB_000b69cc:

        _objc_release(uVar15);

        _objc_release(lVar8);

        _objc_release(lVar7);

        if ((uVar10 & 1) != 0) goto LAB_000b69e8;

        goto LAB_000b6b08;

      }

      if (lVar7 == 0) {

        uVar16 = (uint)*(byte *)(param_1 + 0x28);

      }

      else {

        _objc_getAssociatedObject(lVar7,PTR_LOOP_003e5ce0);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        uVar10 = FUN_002924e0();

        _objc_release(uVar9);

        _objc_getAssociatedObject(lVar7,PTR_LOOP_003e5cc8);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        uVar4 = FUN_002924e0();

        _objc_release(uVar9);

        _objc_getAssociatedObject(lVar7,PTR_LOOP_003e5cc0);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        uVar5 = FUN_002924e0();

        _objc_release(uVar9);

        _objc_getAssociatedObject(lVar7,PTR_LOOP_003e5cd0);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        uVar11 = FUN_002924e0();

        _objc_release(uVar9);

        _objc_getAssociatedObject(lVar7,PTR_LOOP_003e6478);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        uVar6 = FUN_002924e0();

        _objc_release(uVar9);

        if ((uVar11 & 1) == 0) goto LAB_000b69cc;

LAB_000b68b0:

        auVar17 = _objc_opt_respondsToSelector(lVar7,"subViewModels");

        if ((auVar17._0_8_ & 1) == 0) {

LAB_000b6964:

          if ((uVar10 & 1) != 0) goto LAB_000b6968;

LAB_000b6988:

          uVar10 = 0;

          uVar3 = uVar5 & (uVar4 ^ 1);

        }

        else {

          FUN_002a6080(lVar7,auVar17._8_8_,&cf_subViewModels);

          lVar12 = _objc_retainAutoreleasedReturnValue();

          if ((lVar12 != 0) && (uVar11 = FUN_00293860(lVar12), 1 < uVar11)) {

            FUN_00295440(lVar12);

            lVar13 = _objc_retainAutoreleasedReturnValue();

            lVar14 = *(long *)(param_1 + 0x20);

            _objc_release();

            _objc_release(lVar12);

            if (lVar14 != lVar13) {

              uVar16 = 0;

              goto LAB_000b69b0;

            }

            goto LAB_000b6964;

          }

          _objc_release(lVar12);

          if ((uVar10 & 1) == 0) goto LAB_000b6988;

LAB_000b6968:

          uVar10 = 1;

          uVar3 = 1;

        }

        uVar16 = uVar3;

        if ((uVar3 != 0) && ((uVar4 & 1) == 0)) {

          uVar16 = (uVar5 | uVar6) ^ 1;

        }

        if (uVar3 == 0) goto LAB_000b69cc;

      }

LAB_000b69b0:

      _objc_release(uVar15);

    }

    else {

      _objc_getAssociatedObject(lVar7,PTR_LOOP_003e64a0);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      puVar1 = PTR_LOOP_003e64a0;

      lVar8 = auVar17._0_8_;

      if (lVar8 == 0) {

        FUN_00299380(&_OBJC_CLASS___NSNumber,auVar17._8_8_,*(undefined1 *)(param_1 + 0x28));

        uVar15 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(lVar7,puVar1,uVar15,1);

        _objc_release(uVar15);

      }

      iVar2 = FUN_000a96c8(lVar7);

      if (iVar2 == 0) {

        _objc_release(lVar8);

        goto LAB_000b66f0;

      }

      uVar16 = (uint)*(byte *)(param_1 + 0x28);

    }

    _objc_release(lVar8);

    _objc_release(lVar7);

  }

LAB_000b6b0c:

  return uVar16 & 1;

}




