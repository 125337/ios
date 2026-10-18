// FUN_0024e210 @0x24e210


cfstringStruct * FUN_0024e210(long param_1)



{

  int iVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  cfstringStruct *pcVar6;

  cfstringStruct *pcVar7;

  undefined1 auVar8 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    pcVar7 = &cf_js;

    goto LAB_0024e2e0;

  }

  lVar2 = FUN_00297fa0(param_1);

  pcVar7 = &cf_js;

  if (lVar2 == 0) goto LAB_0024e2e0;

  auVar8 = FUN_00297fa0(param_1);

  uVar3 = auVar8._0_8_;

  if (0xfff < uVar3) {

    uVar3 = 0x1000;

  }

  FUN_002a47e0(param_1,auVar8._8_8_,uVar3);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002984e0();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  auVar8 = FUN_00293580(uVar5,extraout_x1,&cf_<html);

  if ((auVar8._0_8_ & 1) == 0) {

    auVar8 = FUN_00293580(uVar5,auVar8._8_8_,&cf_<style);

    if ((auVar8._0_8_ & 1) != 0) goto LAB_0024e2bc;

    auVar8 = FUN_00293580(uVar5,auVar8._8_8_,&cf_<div);

    if ((auVar8._0_8_ & 1) != 0) goto LAB_0024e2bc;

    auVar8 = FUN_00293580(uVar5,auVar8._8_8_,&cf_<script);

    pcVar6 = &cf_html;

    if (((auVar8._0_8_ & 1) == 0) &&

       (iVar1 = FUN_00293580(uVar5,auVar8._8_8_,&cf_<_doctype), iVar1 == 0)) {

      pcVar6 = pcVar7;

    }

  }

  else {

LAB_0024e2bc:

    pcVar6 = &cf_html;

  }

  _objc_release(uVar5);

  pcVar7 = pcVar6;

LAB_0024e2e0:

  _objc_release(param_1);

  return pcVar7;

}




