@interface WAPageFlowSessionInfo : MMObject
{
    BOOL _isTriggerDownloaded; // +0x8
    int _hostScene; // +0xc
    NSString * _sessionId; // +0x10
    unsigned long long _scene; // +0x18
    NSString * _sceneNote; // +0x20
    unsigned long long _preScene; // +0x28
    NSString * _preSceneNote; // +0x30
    unsigned long long _chatType; // +0x38
    unsigned long long _codeScene; // +0x40
    NSString * _referPageOfHomePage; // +0x48
    unsigned long long _targetActionType; // +0x50
    NSString * _targetActionNote; // +0x58
    NSString * _referAction; // +0x60
}
- (id)initWithSessionPrefix:(id)arg1 hostScene:(int)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (unsigned long long)preScene;
- (void)setPreScene:(unsigned long long)arg1;
- (id)preSceneNote;
- (void)setPreSceneNote:(id)arg1;
- (int)hostScene;
- (void)setHostScene:(int)arg1;
- (unsigned long long)chatType;
- (void)setChatType:(unsigned long long)arg1;
- (unsigned long long)codeScene;
- (void)setCodeScene:(unsigned long long)arg1;
- (id)referPageOfHomePage;
- (void)setReferPageOfHomePage:(id)arg1;
- (BOOL)isTriggerDownloaded;
- (void)setIsTriggerDownloaded:(BOOL)arg1;
- (unsigned long long)targetActionType;
- (void)setTargetActionType:(unsigned long long)arg1;
- (id)targetActionNote;
- (void)setTargetActionNote:(id)arg1;
- (id)referAction;
- (void)setReferAction:(id)arg1;
- (void).cxx_destruct;
@end

