// FUN_0088f68c @ 0088f68c

void FUN_0088f68c(void)

{
  dispatch_queue_t pdVar1;
  
  pdVar1 = _dispatch_get_global_queue(-2,0);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  return;
}

