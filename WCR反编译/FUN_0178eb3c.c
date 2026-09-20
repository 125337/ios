// FUN_0178eb3c @ 0178eb3c

void FUN_0178eb3c(long param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  long local_28;
  undefined1 local_19;
  long local_18;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)*(long *)(param_1 + 0x28) * *(double *)(param_1 + 0x30);
  uVar4 = 0;
  FUN_01783fc4();
  local_38 = dVar3;
  local_30 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar3,uVar4,uVar2,PTR_s_setContentOffset_animated__0269ddd8,0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_0178ed08;
  local_48 = &DAT_0257a800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_40 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323cc0,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_60);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_40,0);
  return;
}

