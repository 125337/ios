// FUN_00857f0c @ 00857f0c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00857f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_00857d4c();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar4 = 0;
  uVar3 = 0;
  FUN_0081e864();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,param_1,param_2,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar1 = DAT_028cd4b8;
  DAT_028cd4b8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd4b8,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd4b8,PTR_s_setClipsToBounds__026ca8c8,1);
  return;
}

