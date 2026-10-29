@interface MMQRCodeUtility : NSObject
+ (id)getStringFromUTF8Bytes:(const char *)arg1 length:(int)arg2;
+ (id)preProcessImageBeforeRealScan:(id)arg1;
+ (id)urlsOfMultiQRCode:(id)arg1;
+ (id)urlOfQRCode:(id)arg1;
@end

