// _updateSourceWebP @0x948bc

/* Function Stack Size: 0x10 bytes */

void WCMYYImageDecoder::_updateSourceWebP(ID param_1,SEL param_2)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &__updateSourceWebP_onceToken;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global_119);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

