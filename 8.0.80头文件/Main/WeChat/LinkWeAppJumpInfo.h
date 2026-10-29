@interface LinkWeAppJumpInfo : NSObject
{
    NSString * _appId; // +0x8
    NSString * _pagePath; // +0x10
    NSNumber * _appState; // +0x18
    NSNumber * _isForbidSSignal; // +0x20
    NSString * _shareKey; // +0x28
    NSNumber * _scene; // +0x30
    NSString * _sceneNote; // +0x38
}
+ (id)makeWithAppId:(id)arg1 pagePath:(id)arg2 appState:(id)arg3 isForbidSSignal:(id)arg4 shareKey:(id)arg5 scene:(id)arg6 sceneNote:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)appState;
- (void)setAppState:(id)arg1;
- (id)isForbidSSignal;
- (void)setIsForbidSSignal:(id)arg1;
- (id)shareKey;
- (void)setShareKey:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (void).cxx_destruct;
@end
