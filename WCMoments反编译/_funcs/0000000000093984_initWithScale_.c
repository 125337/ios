// initWithScale: @0x93984

/* Function Stack Size: 0x18 bytes */

ID WCMYYImageDecoder::initWithScale_(ID param_1,SEL param_2,double param_3)

{
  dispatch_semaphore_t pdVar1;
  undefined8 uVar2;
  ID IVar3;
  ID local_50;
  class_t *local_48;
  double local_40;
  SEL local_38;
  long local_30;
  pthread_mutexattr_t pStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_30 = 0;
  local_48 = &objc::class_t::WCMYYImageDecoder;
  local_50 = param_1;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = _objc_msgSendSuper2(&local_50,"init");
  _objc_storeStrong(&local_30);
  if (local_40 <= 0.0) {
    local_40 = 1.0;
  }
  *(double *)(local_30 + 0xa8) = local_40;
  pdVar1 = _dispatch_semaphore_create(1);
  uVar2 = *(undefined8 *)(local_30 + 0x68);
  *(dispatch_semaphore_t *)(local_30 + 0x68) = pdVar1;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _pthread_mutexattr_init(&pStack_28);
  _pthread_mutexattr_settype(&pStack_28,2);
  _pthread_mutex_init((pthread_mutex_t *)(local_30 + 8),&pStack_28);
  _pthread_mutexattr_destroy(&pStack_28);
  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_30);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return IVar3;
}

