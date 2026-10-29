@interface MMFinderLiveMiniGamePkInfo : NSObject
{
    NSString * _appId; // +0x8
    NSString * _path; // +0x10
    unsigned long long _scene; // +0x18
    NSString * _sceneNote; // +0x20
}
+ (id)parseFromGameBuffer:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (void).cxx_destruct;
@end
