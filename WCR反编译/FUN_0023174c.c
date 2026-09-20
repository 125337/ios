// FUN_0023174c @ 0023174c

void FUN_0023174c(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28 [3];
  
  if ((DAT_028c91e0 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_28[0] = puVar2;
      if ((puVar2 == (undefined *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_customAvatarFeatureEnabled_026a0958),
         ((ulong)puVar2 & 1) == 0)) {
        DAT_028c91e0 = 1;
        FUN_00226bb4();
        local_2c = 1;
      }
      else {
        if (DAT_028c91d8 == (undefined *)0x0) {
          DAT_028c91e8 = DAT_028c91e8 + 1;
          FUN_00231abc();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = DAT_028c91d8;
          DAT_028c91d8 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          DAT_028c9268 = (undefined *)0x0;
          DAT_026dfb50 = 1;
        }
        puVar2 = DAT_028c9268;
        puVar3 = DAT_028c91d8;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028c91d8,PTR_s_count_0269cfe0);
        bVar1 = DAT_026dfb50;
        if (puVar2 < puVar3) {
          puVar2 = DAT_028c91d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028c91d8,PTR_s_objectAtIndexedSubscript__0269cc78,DAT_028c9268);
          _objc_retainAutoreleasedReturnValue();
          DAT_028c9268 = DAT_028c9268 + 1;
          local_38 = puVar2;
          FUN_0022c128(puVar2,0);
          if (((ulong)puVar2 & 1) == 0) {
            DAT_026dfb50 = 0;
          }
          else {
            FUN_0022ca2c(local_38);
          }
          FUN_00231664(DAT_02323c68);
          local_2c = 1;
          _objc_storeStrong(&local_38,0);
        }
        else {
          FUN_00226bb4();
          if ((bVar1 & 1) == 0) {
            if (DAT_028c91e8 < 10) {
              uVar4 = 0x3fd0000000000000;
              if (3 < DAT_028c91e8) {
                uVar4 = DAT_02323d00;
              }
              FUN_00231664(DAT_028c91e8 + -4,uVar4);
              local_2c = 0;
            }
            else {
              local_2c = 1;
            }
          }
          else {
            DAT_028c91e0 = 1;
            local_2c = 1;
          }
        }
      }
      _objc_storeStrong(local_28,0);
    }
  }
  return;
}

