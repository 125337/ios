@interface LiteAppJsApiSaveFile : LiteAppJsApi <UIDocumentPickerDelegate>
{
    NSDictionary * _saveFileParams; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (BOOL)hasNormalFileInFileList:(id)arg1;
- (void)openFileSelctVC;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)handleUrl:(id)arg1 folderPath:(id)arg2;
- (void)startSaveWithTargetPath:(id)arg1;
- (void)startSaveWithTargetPath:(id)arg1 securityScopedURL:(id)arg2;
- (id)saveFileParams;
- (void)setSaveFileParams:(id)arg1;
- (void).cxx_destruct;
@end
