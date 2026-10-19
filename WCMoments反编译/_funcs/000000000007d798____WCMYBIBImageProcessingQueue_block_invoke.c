// ___WCMYBIBImageProcessingQueue_block_invoke @0x7d798

void ___WCMYBIBImageProcessingQueue_block_invoke(void)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create
                     ("com.yangbo.imagebrowser.imageprocessing",
                      (dispatch_queue_attr_t)PTR___dispatch_queue_attr_concurrent_00110530);
  uVar1 = _WCMYBIBImageProcessingQueue_queue;
  _WCMYBIBImageProcessingQueue_queue = pdVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

