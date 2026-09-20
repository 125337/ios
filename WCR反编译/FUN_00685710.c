// FUN_00685710 @ 00685710

byte FUN_00685710(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_58;
  long local_48;
  long local_40;
  byte local_31;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  lVar2 = local_40;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  lVar1 = local_48;
  if (lVar2 == 0) {
    local_31 = 0;
    local_58 = 1;
  }
  else {
    local_70 = &local_78;
    local_78 = 0;
    local_68 = 0x20000000;
    local_64 = 0x20;
    local_60 = 1;
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    local_28 = 0;
    local_20 = 0;
    local_88 = 0;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_00687110;
    local_98 = &DAT_0257e908;
    local_90 = &local_78;
    local_80 = lVar2;
    local_30 = lVar2;
    local_18 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_enumerateSubstringsInRange_optio_026a64a0,0,lVar2,2,&local_b0);
    local_31 = *(byte *)(local_70 + 3) & 1;
    local_58 = 1;
    __Block_object_dispose(&local_78,8);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

