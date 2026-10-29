@interface EcsSessionMgr : NSObject
{
    int _currentScene; // +0x8
    NSString * _sessionId; // +0x10
}
+ (id)sharedInstance;
- (void)onEnterPage;
- (id)getSessionId;
- (void)setCurrentScene:(int)arg1;
- (int)getCurrentScene;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (int)currentScene;
- (void).cxx_destruct;
@end
