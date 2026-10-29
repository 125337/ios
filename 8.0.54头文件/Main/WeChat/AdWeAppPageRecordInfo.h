@interface AdWeAppPageRecordInfo : NSObject
{
    NSString * _appid; // +0x8
    NSString * _pagePath; // +0x10
    NSString * _adInfo; // +0x18
    unsigned long long _startTimestamp; // +0x20
    unsigned long long _scene; // +0x28
    NSString * _sceneNote; // +0x30
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (unsigned long long)startTimestamp;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (void).cxx_destruct;
@end

