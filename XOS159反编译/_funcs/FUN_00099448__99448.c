// FUN_00099448 @0x99448


void FUN_00099448(undefined1 param_1 [16],double param_2,double param_3,double param_4,

                 undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  double dVar5;

  double dVar6;

  double dVar7;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  undefined1 auStack_78 [8];

  undefined1 auStack_70 [8];

  double local_68;

  undefined1 auStack_60 [8];

  undefined1 auStack_58 [8];

  

  (*DAT_003e7868)();

  iVar1 = FUN_000a89d8();

  if (iVar1 != 0) {

    FUN_00295b80(param_5);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      uVar3 = _objc_opt_class(&_OBJC_CLASS___UITableView);

      uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

      if ((uVar4 & 1) != 0) {

        if (param_8 == 0) {

          if (((DAT_003e7a2e & 1) == 0) && ((DAT_003e7a2f & 1) == 0)) {

            dVar5 = (double)FUN_002935a0(lVar2);

            FUN_00293600(lVar2);

            dVar7 = param_2;

            FUN_002925a0(lVar2);

            FUN_002935a0(lVar2);

            FUN_002935e0(lVar2);

            param_3 = (param_2 - param_4) + param_3;

            dVar6 = -dVar5;

            if (-dVar5 <= param_3) {

              dVar6 = param_3;

            }

            if (dVar6 - dVar7 <= 15.0) {

              FUN_00290b40(param_5,extraout_x1,0);

            }

          }

        }

        else {

          FUN_000a6870(lVar2);

          FUN_002935e0(lVar2);

          _objc_initWeak(auStack_58,param_5);

          _objc_initWeak(auStack_60,lVar2);

          local_98 = PTR___NSConcreteStackBlock_003886f0;

          local_90 = 0xc2000000;

          local_88 = FUN_000b5964;

          puStack_80 = &DAT_0038b1a8;

          _objc_copyWeak(auStack_78,auStack_58);

          _objc_copyWeak(auStack_70,auStack_60);

          local_68 = param_2;

          _dispatch_async(PTR___dispatch_main_q_00388740,&local_98);

          _objc_destroyWeak(auStack_70);

          _objc_destroyWeak(auStack_78);

          _objc_destroyWeak(auStack_60);

          _objc_destroyWeak(auStack_58);

        }

      }

    }

    _objc_release(lVar2);

  }

  return;

}




