// layoutButtonVerticalImageTop: @ 01987958

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::layoutButtonVerticalImageTop_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  double in_d1;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  cfstringStruct *local_138;
  double local_70;
  double dStack_68;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_70 = 4.0;
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_imageView_0269f230);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar6 = in_d1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  dStack_68 = in_d1;
  if (local_70 == 0.0) {
    dVar6 = 20.0;
    local_70 = 20.0;
    FUN_0197b3e0();
    dStack_68 = dVar6;
  }
  pcVar1 = local_50;
  dVar9 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_138 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_138 = &::cf___;
  }
  local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_38,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_sizeWithAttributes__026cab08);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  dVar6 = -(dVar6 + 4.0);
  dVar9 = -dVar9;
  uVar8 = 0;
  uVar7 = 0;
  FUN_0198401c();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar6,uVar7,uVar8,dVar9,local_50,PTR_s_setImageEdgeInsets__0269ebe0);
  uVar8 = 0;
  local_70 = -local_70;
  dVar6 = -(dStack_68 + 4.0);
  uVar7 = uVar8;
  FUN_0198401c();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,local_70,dVar6,uVar7,local_50,PTR_s_setTitleEdgeInsets__0269ebe8);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

