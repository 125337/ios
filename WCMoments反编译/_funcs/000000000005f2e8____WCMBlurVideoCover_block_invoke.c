// ___WCMBlurVideoCover_block_invoke @0x5f2e8

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void ___WCMBlurVideoCover_block_invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSCache);
  uVar1 = _WCMBlurVideoCover_cache;
  _WCMBlurVideoCover_cache = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setCountLimit_(_WCMBlurVideoCover_cache,local_50,0xc);
  local_28 = *(undefined8 *)PTR__kCIContextUseSoftwareRenderer_001102f0;
  local_20 = PTR____kCFBooleanFalse_00110728;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_50,&local_20,&local_28,1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contextWithOptions_(&_OBJC_CLASS___CIContext,local_50);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _WCMBlurVideoCover_context;
  _WCMBlurVideoCover_context = uVar3;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

