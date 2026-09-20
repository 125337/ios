// FUN_008f7d38 @ 008f7d38

void FUN_008f7d38(undefined8 param_1,int param_2,ushort param_3,ushort param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined2 local_5a;
  undefined4 local_58;
  int local_54;
  undefined *local_50;
  undefined2 local_42;
  uint local_40;
  int local_3c [5];
  ushort local_28;
  ushort local_26;
  int local_24;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  local_28 = param_4;
  local_26 = param_3;
  local_24 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (((lVar1 == 0) || (local_28 == 0)) || (local_26 == 0)) {
    local_18 = (undefined *)0x0;
    local_3c[1] = 1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    local_3c[0] = (int)lVar1;
    local_40 = (local_24 * (uint)local_26 * (uint)local_28) / 8;
    local_42 = (undefined2)((int)((uint)local_26 * (uint)local_28) / 8);
    puVar2 = PTR__OBJC_CLASS___NSMutableData_026ce660;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithCapacity__026a9df0,
               local_3c[0] + 0x2c);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendBytes_length__026a9628,"RIFF",4);
    local_54 = local_3c[0] + 0x24;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,&local_54,4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,"WAVE",4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,"fmt ",4);
    local_58 = 0x10;
    local_5a = 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,&local_58,4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,&local_5a,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,&local_26,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,&local_24,4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,&local_40,4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,&local_42,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,&local_28,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,"data",4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendBytes_length__026a9628,local_3c,4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendData__026a9df8,local_20);
    puVar2 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_3c[1] = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

