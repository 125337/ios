// FUN_00088600 @0x88600


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




