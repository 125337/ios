// FUN_0020af2c @0x20af2c


void FUN_0020af2c(void)



{

  char cVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined8 local_110;

  long lStack_108;

  long *local_100;

  undefined8 uStack_f8;

  undefined8 local_f0;

  undefined8 uStack_e8;

  undefined8 uStack_e0;

  undefined8 uStack_d8;

  undefined1 auStack_c8 [128];

  long local_48;

  

  cVar1 = DAT_003ead50;

  local_48 = *(long *)PTR____stack_chk_guard_00388738;

  DAT_003ead50 = 0;

  DAT_003ead51 = 0;

  FUN_001fa4d0();

  FUN_001fa568();

  if (DAT_003eaa30 == '\x01') {

    if (DAT_003ead58 == 0) {

      cVar1 = '\x01';

    }

    iVar2 = DAT_003ead58;

    if ((cVar1 == '\x01') && (iVar2 = 1, 1 < DAT_003ead58 + 1U)) {

      iVar2 = DAT_003ead58 + 1;

    }

    DAT_003ead58 = iVar2;

    if (DAT_003eaf08 != -1) {

      thunk_FUN_00223ad4();

    }

    _os_unfair_lock_lock(&DAT_003ead54);

    FUN_00291620(DAT_003eaa70);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _os_unfair_lock_unlock(&DAT_003ead54);

    uStack_e8 = 0;

    local_f0 = 0;

    uStack_d8 = 0;

    uStack_e0 = 0;

    lStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    local_100 = (long *)0x0;

    _objc_retain(uVar3);

    lVar4 = FUN_00293880(uVar3,extraout_x1,&local_110,auStack_c8,0x10);

    if (lVar4 != 0) {

      lVar6 = *local_100;

      do {

        lVar7 = 0;

        do {

          if (*local_100 != lVar6) {

            _objc_enumerationMutation(uVar3);

          }

          uVar5 = *(undefined8 *)(lStack_108 + lVar7 * 8);

          FUN_0020a174(uVar5,0);

          FUN_0020b0fc(uVar5);

          lVar7 = lVar7 + 1;

        } while (lVar4 != lVar7);

        lVar4 = FUN_00293880(uVar3,extraout_x1_00,&local_110,auStack_c8,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar3);

    _objc_release(uVar3);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 != local_48) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




