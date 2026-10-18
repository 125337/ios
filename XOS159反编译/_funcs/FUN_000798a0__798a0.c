// FUN_000798a0 @0x798a0


void FUN_000798a0(long param_1)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  bool bVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  undefined8 extraout_x1;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  FUN_002a6220(*(undefined8 *)(param_1 + 0x20));

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6520();

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar4);

  if (lVar5 == 0) {

    return;

  }

  pcVar1 = &cf_FineVoice;

  if (*(cfstringStruct **)(param_1 + 0x28) != (cfstringStruct *)0x0) {

    pcVar1 = *(cfstringStruct **)(param_1 + 0x28);

  }

  _objc_retain(pcVar1);

  pcVar2 = &cf___;

  if (*(cfstringStruct **)(param_1 + 0x30) != (cfstringStruct *)0x0) {

    pcVar2 = *(cfstringStruct **)(param_1 + 0x30);

  }

  _objc_retain(pcVar2);

  auVar8 = FUN_00293580(pcVar1,extraout_x1,&cf_1Y_);

  uVar4 = 0x4010000000000000;

  if ((auVar8._0_8_ & 1) == 0) {

    auVar8 = FUN_00293580(pcVar1,auVar8._8_8_,&cf_format_s_);

    if ((auVar8._0_8_ & 1) == 0) {

      auVar8 = FUN_00293580(pcVar2,auVar8._8_8_,&cf_1Y_);

      if ((auVar8._0_8_ & 1) == 0) {

        auVar8 = FUN_00293580(pcVar2,auVar8._8_8_,&cf_format_s_);

        if ((auVar8._0_8_ & 1) == 0) {

          uVar6 = FUN_00293580(pcVar2,auVar8._8_8_,&cf_HQ);

          bVar3 = (uVar6 & 1) != 0;

          uVar7 = 1;

          if (bVar3) {

            uVar7 = 2;

          }

          uVar4 = 0x4010000000000000;

          if (!bVar3) {

            uVar4 = 0x4008000000000000;

          }

          goto LAB_0007997c;

        }

      }

    }

  }

  uVar7 = 2;

LAB_0007997c:

  FUN_0002a854(uVar4,pcVar1,pcVar2,uVar7);

  _objc_release(pcVar2);

  _objc_release(pcVar1);

  return;

}




