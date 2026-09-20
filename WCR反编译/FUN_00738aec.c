// FUN_00738aec @ 00738aec

void FUN_00738aec(void)

{
  byte bVar1;
  undefined *puVar2;
  
  if ((DAT_028cc548 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_class_0269cd60);
    bVar1 = (byte)puVar2;
    FUN_00738df8();
    DAT_028cc548 = bVar1;
  }
  return;
}

