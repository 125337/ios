@interface MMDeleteFileMgr : MMUserService <MMServiceProtocol>
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)saveDeleteFileModelFromIPXX:(id)arg1;
- (void)clearDeleteFileModel;
- (id)getDeleteFileModel;
- (BOOL)checkNeedUpload;
- (id)saveModelPath;
@end
