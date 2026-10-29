@interface LiteAppJsApiOpenFilePicker : LiteAppJsApi <WCFileBrowseDelegate>
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onFileBrowserCancel;
- (void)onFileBrowseMultiSelect:(id)arg1;
@end
