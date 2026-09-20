// FUN_003e2744 @ 003e2744

void FUN_003e2744(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &DAT_02324070;
  FUN_003e2b74(&DAT_02324070,0xf,0xa3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &DAT_0232407f;
  local_70 = puVar2;
  FUN_003e2b74(&DAT_0232407f,0x11,0x6d);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &DAT_02324090;
  local_68 = puVar3;
  FUN_003e2b74(&DAT_02324090,0x14,0xc1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = &DAT_023240a4;
  local_60 = puVar4;
  FUN_003e2b74(&DAT_023240a4,0x12,0x37);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = &DAT_023240b6;
  local_58 = puVar5;
  FUN_003e2b74(&DAT_023240b6,0x1b,0x5a);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &DAT_023240d1;
  local_50 = puVar6;
  FUN_003e2b74(&DAT_023240d1,0x14,0x59);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &DAT_023240e5;
  local_48 = puVar7;
  FUN_003e2b74(&DAT_023240e5,0x1c,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &DAT_02324101;
  local_40 = puVar8;
  FUN_003e2b74(&DAT_02324101,8,0x72);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = &DAT_02324109;
  local_38 = puVar9;
  FUN_003e2b74(&DAT_02324109,0x18,0xc6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028ca400;
  DAT_028ca400 = puVar11;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

