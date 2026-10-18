// showColorPickerForTag: @0x14d3cc


/* Function Stack Size: 0x18 bytes */



void CadisSettingsViewController::showColorPickerForTag_(ID param_1,SEL param_2,long_long param_3)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  ulong uVar5;

  cfstringStruct *pcVar6;

  cfstringStruct *pcVar7;

  cfstringStruct *pcVar8;

  undefined8 uVar9;

  cfstringStruct *pcVar10;

  undefined1 auVar11 [16];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  cfstringStruct *local_68;

  ID IStack_60;

  undefined8 local_58;

  

  uVar5 = param_3 - 1;

  if (uVar5 < 8) {

    pcVar8 = (cfstringStruct *)(&PTR_cf_CadisCalendarColor_0038d6f8)[uVar5];

    pcVar7 = (cfstringStruct *)(&PTR_cf_eSofr_0038d738)[uVar5];

    uVar9 = *(undefined8 *)(&DAT_0030e730 + uVar5 * 8);

    pcVar6 = (cfstringStruct *)(&PTR_cf_00000000_0038d7b8)[uVar5];

    pcVar10 = (cfstringStruct *)(&PTR_cf_00000000_0038d778)[uVar5];

  }

  else {

    pcVar6 = &cf_00000000;

    pcVar7 = &cf__Ylofr;

    pcVar8 = &cf_CadisWeatherColor;

    uVar9 = 3;

    pcVar10 = pcVar6;

  }

  FUN_0014399c(pcVar8,0);

  pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  FUN_0014399c(pcVar8,1);

  pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_00297fa0(pcVar1);

  if (lVar3 == 0) {

    _objc_release(pcVar1);

    pcVar1 = pcVar10;

  }

  auVar11 = FUN_00297fa0(pcVar2);

  uVar4 = auVar11._8_8_;

  if (auVar11._0_8_ == 0) {

    _objc_release(pcVar2);

    uVar4 = extraout_x1;

    pcVar2 = pcVar6;

  }

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc2000000;

  local_78 = FUN_0014d57c;

  puStack_70 = &DAT_0038d328;

  local_68 = pcVar8;

  IStack_60 = param_1;

  local_58 = uVar9;

  FUN_0029a2a0(&objc::class_t::XZYColorPickerViewController,uVar4,param_1,pcVar7,pcVar1,pcVar2,

               &local_88);

  _objc_release(local_68);

  _objc_release(pcVar2);

  _objc_release(pcVar1);

  return;

}




