// compressData: @ 01d5e6e0

/* Function Stack Size: 0x18 bytes */

ID WCRefineFrameZipCreator::compressData_(ID param_1,SEL param_2,ID param_3)

{
  uLong uVar1;
  int iVar2;
  Bytef *pBVar3;
  Bytef *pBVar4;
  undefined *puVar5;
  undefined *local_b0;
  z_stream local_a8;
  undefined4 local_34;
  Bytef *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (Bytef *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == (Bytef *)0x0) ||
     (pBVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pBVar3 == (Bytef *)0x0)) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    local_a8.zalloc = (alloc_func)0x0;
    local_a8.zfree = (free_func)0x0;
    local_a8.opaque = (voidpf)0x0;
    pBVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pBVar3 = local_30;
    local_a8.avail_in = (uInt)pBVar4;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pBVar3,PTR_s_bytes_026a9630);
    local_a8.total_out = 0;
    local_a8.avail_out = 0;
    local_a8.next_in = pBVar3;
    iVar2 = _deflateInit2_(&local_a8,-1,8,-0xf,8,0,"1.2.12",0x70);
    if (iVar2 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableData_026ce660;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithLength__026a3368,0x4000);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar5;
      do {
        uVar1 = local_a8.total_out;
        puVar5 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
        if (puVar5 <= uVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_increaseLengthBy__026b6570,0x4000);
        }
        puVar5 = local_b0;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_mutableBytes_026a3370);
        local_a8.next_out = puVar5 + local_a8.total_out;
        puVar5 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
        local_a8.avail_out = (int)puVar5 - (int)local_a8.total_out;
        _deflate(&local_a8,4);
      } while (local_a8.avail_out == 0);
      _deflateEnd(&local_a8);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLength__026b4318,local_a8.total_out);
      puVar5 = local_b0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar5;
      local_34 = 1;
      _objc_storeStrong(&local_b0,0);
    }
    else {
      local_18 = (undefined *)0x0;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

