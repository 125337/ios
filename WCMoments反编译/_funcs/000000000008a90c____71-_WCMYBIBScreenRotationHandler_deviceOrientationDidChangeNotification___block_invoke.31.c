// ___71-[WCMYBIBScreenRotationHandler_deviceOrientationDidChangeNotification:]_block_invoke.31 @0x8a90c

void ___71__WCMYBIBScreenRotationHandler_deviceOrientationDidChangeNotification___block_invoke_31
               (long param_1,undefined8 param_2)

{
  undefined8 local_30;
  
  _objc_msgSend_setCurrentOrientation_
            (*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_msgSend_setRotating_(*(undefined8 *)(param_1 + 0x20),local_30,0);
  _objc_msgSend_orientationDidChangedWithOrientation_centerCell_
            (*(undefined8 *)(param_1 + 0x20),local_30,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}

