// ___VideoNumber_block_invoke @0x5fd94

void ___VideoNumber_block_invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
  uVar1 = _VideoNumber_ids;
  _VideoNumber_ids = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSObject);
  uVar1 = _VideoNumber_lock;
  _VideoNumber_lock = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

