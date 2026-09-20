// crc32ForData: @ 01d5e964

/* Function Stack Size: 0x18 bytes */

unsigned_int WCRefineFrameZipCreator::crc32ForData_(ID param_1,SEL param_2,ID param_3)

{
  uLong uVar1;
  Bytef *buf;
  Bytef *pBVar2;
  Bytef *local_30;
  SEL local_28;
  ID local_20;
  unsigned_int local_14;
  
  local_30 = (Bytef *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == (Bytef *)0x0) {
    local_14 = 0;
  }
  else {
    uVar1 = _crc32(0,(Bytef *)0x0,0);
    buf = local_30;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(buf,PTR_s_bytes_026a9630);
    pBVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    uVar1 = _crc32(uVar1,buf,(uInt)pBVar2);
    local_14 = (unsigned_int)uVar1;
  }
  _objc_storeStrong(&local_30,0);
  return local_14;
}

