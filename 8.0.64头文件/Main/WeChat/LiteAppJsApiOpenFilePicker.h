@interface LiteAppJsApiOpenFilePicker : LiteAppJsApi <WCFileBrowseDelegate>
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)onFileBrowserCancel;
- (void)onFileBrowseMultiSelect:(id)arg1;
@end
