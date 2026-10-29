@interface WAJSEventHandler_shareFinderEndorsementToFriend : WAJSEventHandler_BaseEvent <SessionSelectControllerDelegate>
{
    int _scene; // +0x8
    SessionSelectController * _sessionSelectController; // +0x10
    NSString * _relativePath; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)checkFinish:(int)arg1 success:(BOOL)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (BOOL)onShouldSelectContact:(id)arg1;
- (id)sessionSelectController;
- (void)setSessionSelectController:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)relativePath;
- (void)setRelativePath:(id)arg1;
- (void).cxx_destruct;
@end
