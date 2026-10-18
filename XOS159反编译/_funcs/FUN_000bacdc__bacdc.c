// FUN_000bacdc @0xbacdc


void FUN_000bacdc(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5)



{

  int iVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  double dVar7;

  double dVar8;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  long local_58;

  

  lVar2 = _objc_loadWeakRetained(param_5 + 0x28);

  lVar3 = _objc_loadWeakRetained(param_5 + 0x30);

  if (lVar2 != 0) {

    _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6638,0,1);

    FUN_002a6520(lVar2);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (((((lVar4 != 0) && (lVar3 != 0)) &&

         (iVar1 = FUN_000b4368(lVar2,*(undefined8 *)(param_5 + 0x20),*(undefined4 *)(param_5 + 0x38)

                              ), iVar1 != 0)) &&

        ((uVar5 = FUN_00297780(lVar3), (uVar5 & 1) == 0 &&

         (uVar5 = FUN_00297b40(lVar3), (uVar5 & 1) == 0)))) &&

       (uVar5 = FUN_002976e0(lVar3), (uVar5 & 1) == 0)) {

      local_78 = PTR___NSConcreteStackBlock_003886f0;

      local_70 = 0xc2000000;

      local_68 = FUN_000baf4c;

      puStack_60 = &DAT_00388e60;

      _objc_retain(lVar3);

      local_58 = lVar3;

      FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1,&local_78);

      _objc_release(local_58);

      uVar5 = FUN_00297780(lVar3);

      if ((((uVar5 & 1) == 0) && (uVar5 = FUN_00297b40(lVar3), (uVar5 & 1) == 0)) &&

         (uVar5 = FUN_002976e0(lVar3), (uVar5 & 1) == 0)) {

        FUN_002a2e60(&_OBJC_CLASS___UIApplication);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        lVar4 = FUN_00291a00();

        _objc_release(uVar6);

        if (lVar4 == 0) {

          dVar7 = (double)FUN_002935a0(lVar3);

          FUN_00293600(lVar3);

          FUN_002925a0(lVar3);

          FUN_002935a0(lVar3);

          uVar6 = FUN_002935e0(lVar3);

          param_3 = (param_2 - param_4) + param_3;

          dVar8 = -dVar7;

          if (-dVar7 <= param_3) {

            dVar8 = param_3;

          }

          FUN_0029d6e0(uVar6,dVar8,lVar3);

        }

      }

      _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6308,0,1);

      _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6328,0,1);

      FUN_000b7b78(lVar2);

    }

  }

  _objc_release(lVar3);

  _objc_release(lVar2);

  return;

}




