@interface WCADVideoWrap : NSObject
{
    NSString * adID; // +0x8
    NSString * publishID; // +0x10
    NSString * uxInfo; // +0x18
    unsigned long long startTime; // +0x20
    NSMutableArray * arrPlayInfo; // +0x28
    unsigned int scene; // +0x30
    unsigned long long videoPlaybackTime; // +0x38
}
- (id)init;
- (id)adID;
- (void)setAdID:(id)arg1;
- (id)publishID;
- (void)setPublishID:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (id)arrPlayInfo;
- (void)setArrPlayInfo:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned long long)videoPlaybackTime;
- (void)setVideoPlaybackTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

