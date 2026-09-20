// writeLocalFileHeader:fileName:compressedSize:uncompressedSize:crc: @ 01d5f490

/* Function Stack Size: 0x2c bytes */

void WCRefineFrameZipCreator::writeLocalFileHeader_fileName_compressedSize_uncompressedSize_crc_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_int param_5,
               unsigned_int param_6,unsigned_int param_7)

{
  undefined8 uVar1;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined8 local_58;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  unsigned_int local_3c;
  unsigned_int local_38;
  unsigned_int local_34;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0x4034b50;
  local_3c = param_7;
  local_38 = param_6;
  local_34 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_40);
  local_42 = 0x14;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_42);
  local_44 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_44,2);
  local_46 = 8;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_46,2);
  local_48 = 0;
  local_4a = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_48,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_4a,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_3c,4);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_34,4);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_38,4);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_dataUsingEncoding__026a12e8,4);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  local_5a = (undefined2)uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_5a,2);
  local_5c = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_5c,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendData__026a9df8,local_58);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

