// FUN_00130124 @0x130124


undefined8 FUN_00130124(undefined8 param_1)



{

  ulong uVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  

  _objc_retain();

  uVar1 = FUN_0012ec80(param_1);

  if (((uVar1 & 1) != 0) ||

     (uVar1 = _objc_opt_respondsToSelector(param_1,"viewModel"), (uVar1 & 1) == 0)) {

    uVar6 = 0;

    goto LAB_001302d8;

  }

  FUN_002a6280(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = FUN_00130568();

  if ((uVar1 & 1) == 0) {

    _objc_retain(lVar2);

    if (lVar2 == 0) {

LAB_00130284:

      uVar4 = 0;

    }

    else {

      uVar6 = _object_getClass(lVar2);

      if (DAT_003e8660 == 0) {

        DAT_003e8660 = _CFDictionaryCreateMutable(0,0,0,0);

      }

      lVar3 = _CFDictionaryGetValue(DAT_003e8660,uVar6);

      if (lVar3 == 0) {

        uVar1 = _objc_opt_respondsToSelector(lVar2,"parentModel");

        if ((uVar1 & 1) == 0) {

          lVar3 = 0;

          do {

            lVar5 = _class_getInstanceVariable

                              (uVar6,*(undefined8 *)((long)&PTR_s_parentModel_0038cdf8 + lVar3));

            if (lVar5 != 0) {

              _CFDictionarySetValue(DAT_003e8660,uVar6,lVar5);

              _object_getIvar(lVar2,lVar5);

              uVar4 = _objc_retainAutoreleasedReturnValue();

              goto LAB_001302b4;

            }

            lVar3 = lVar3 + 8;

          } while (lVar3 != 0x18);

          _CFDictionarySetValue(DAT_003e8660,uVar6,1);

          goto LAB_00130284;

        }

        _CFDictionarySetValue(DAT_003e8660,uVar6,2);

LAB_0013021c:

        _objc_msgSend(lVar2,"parentModel");

        uVar4 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        if (lVar3 == 1) goto LAB_00130284;

        if (lVar3 == 2) goto LAB_0013021c;

        _object_getIvar(lVar2);

        uVar4 = _objc_retainAutoreleasedReturnValue();

      }

    }

LAB_001302b4:

    _objc_release(lVar2);

    uVar6 = FUN_00130568(uVar4);

    _objc_release(uVar4);

  }

  else {

    uVar6 = 1;

  }

  _objc_release(lVar2);

LAB_001302d8:

  _objc_release(param_1);

  return uVar6;

}




