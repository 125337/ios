// presentCatalogUploadForModel: @ 01f5c134

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceCloneListViewController::presentCatalogUploadForModel_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  SEL local_58;
  ID local_50;
  undefined **local_48;
  undefined **local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  puVar5 = PTR_WCRefineVoiceCloneHelper_026cea40;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_canUploadModelToCatalog__026b0ac0,local_60)
  ;
  IVar3 = local_50;
  bVar1 = ((ulong)puVar5 & 1) != 0;
  if (bVar1) {
    local_38 = &cf_lQ;
    local_30 = &cf_ygNON_T_OSNa;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_50;
    puVar5 = PTR___NSConcreteStackBlock_02578660;
    ppuVar7 = &local_98;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_01f5c43c;
    local_80 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_60;
    local_78 = IVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar2;
    _objc_retainBlock();
    IVar4 = local_50;
    ppuVar8 = &local_c8;
    local_c8 = puVar5;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_01f5c48c;
    local_b0 = &DAT_0257a7a0;
    local_48 = ppuVar7;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_60;
    local_a8 = IVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = uVar2;
    _objc_retainBlock();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = ppuVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,2
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_01f5a308(IVar3,&cf_NO0RNz,puVar6,puVar5,0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(ppuVar8);
    (*(code *)PTR__objc_release_02578630)(ppuVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
  }
  local_64 = (uint)!bVar1;
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

