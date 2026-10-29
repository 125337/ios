@interface MMUploadLogHandler : PrivateCommonApiHandler <MMLogViewControllerDelegate>
- (void)handleCommonApiWithParams:(id)arg1;
- (void)onMMLogViewControllerClosedWithUploadStatus:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
@end

