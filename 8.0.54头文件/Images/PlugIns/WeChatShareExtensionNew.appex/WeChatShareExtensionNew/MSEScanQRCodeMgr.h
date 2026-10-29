@interface MSEScanQRCodeMgr : NSObject
+ (id)shareInstance;
- (void)asyncGetShareImageInfoWithScanImageUrls:(id)arg1 complete:(id /* block */)arg2;
- (void)scanImage:(id)arg1 imageInfo:(id)arg2;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
@end

