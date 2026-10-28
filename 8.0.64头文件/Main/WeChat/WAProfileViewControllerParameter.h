@interface WAProfileViewControllerParameter : NSObject
{
    BOOL _needShowBottomFeedback; // +0x8
    unsigned int _fromAppVersion; // +0xc
    NSString * _userName; // +0x10
    unsigned long long _enterScene; // +0x18
    NSString * _sceneNote; // +0x20
    unsigned long long _exposeFrom; // +0x28
    NSString * _pagePath; // +0x30
    unsigned long long _fromDebugMode; // +0x38
    NSDictionary * _exposeExtraInfo; // +0x40
    unsigned long long _preScene; // +0x48
    NSString * _preSceneNote; // +0x50
    UINavigationController * _navigationController; // +0x58
    NSString * _hostAppid; // +0x60
    NSString * _snapShotLocalId; // +0x68
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (unsigned long long)exposeFrom;
- (void)setExposeFrom:(unsigned long long)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned long long)fromDebugMode;
- (void)setFromDebugMode:(unsigned long long)arg1;
- (unsigned int)fromAppVersion;
- (void)setFromAppVersion:(unsigned int)arg1;
- (id)exposeExtraInfo;
- (void)setExposeExtraInfo:(id)arg1;
- (unsigned long long)preScene;
- (void)setPreScene:(unsigned long long)arg1;
- (id)preSceneNote;
- (void)setPreSceneNote:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (BOOL)needShowBottomFeedback;
- (void)setNeedShowBottomFeedback:(BOOL)arg1;
- (id)hostAppid;
- (void)setHostAppid:(id)arg1;
- (id)snapShotLocalId;
- (void)setSnapShotLocalId:(id)arg1;
- (void).cxx_destruct;
@end
