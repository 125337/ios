// decompressData:expectedSize: @ 01fb1278

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineWatermarkLibraryViewController::decompressData_expectedSize_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  uLong uVar1;
  int iVar2;
  Bytef *pBVar3;
  Bytef *pBVar4;
  undefined *puVar5;
  unsigned_long_long local_100;
  undefined *local_c8;
  z_stream local_c0;
  undefined4 local_4c;
  unsigned_long_long local_48;
  Bytef *local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = (Bytef *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = param_4;
  if ((local_40 == (Bytef *)0x0) ||
     (pBVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     pBVar3 == (Bytef *)0x0)) {
    local_28 = (undefined *)0x0;
    local_4c = 1;
  }
  else {
    local_c0.zalloc = (alloc_func)0x0;
    local_c0.zfree = (free_func)0x0;
    local_c0.opaque = (voidpf)0x0;
    pBVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    pBVar3 = local_40;
    local_c0.avail_in = (uInt)pBVar4;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pBVar3,PTR_s_bytes_026a9630);
    local_c0.next_in = pBVar3;
    iVar2 = _inflateInit2_(&local_c0,-0xf,"1.2.12",0x70);
    if (iVar2 == 0) {
      if (local_48 == 0) {
        local_100 = 0x4000;
      }
      else {
        local_100 = local_48;
      }
      puVar5 = PTR__OBJC_CLASS___NSMutableData_026ce660;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithLength__026a3368,local_100);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar5;
      do {
        uVar1 = local_c0.total_out;
        puVar5 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
        if (puVar5 <= uVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_increaseLengthBy__026b6570,0x4000);
        }
        puVar5 = local_c8;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_mutableBytes_026a3370);
        local_c0.next_out = puVar5 + local_c0.total_out;
        puVar5 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
        local_c0.avail_out = (int)puVar5 - (int)local_c0.total_out;
        iVar2 = _inflate(&local_c0,0);
        if (iVar2 == 1) break;
        if (iVar2 != 0) {
          _inflateEnd(&local_c0);
          local_28 = (undefined *)0x0;
          goto LAB_01fb1560;
        }
      } while (local_c0.avail_out == 0);
      _inflateEnd(&local_c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setLength__026b4318,local_c0.total_out);
      puVar5 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar5;
LAB_01fb1560:
      local_4c = 1;
      _objc_storeStrong(&local_c8,0);
    }
    else {
      local_28 = (undefined *)0x0;
      local_4c = 1;
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

