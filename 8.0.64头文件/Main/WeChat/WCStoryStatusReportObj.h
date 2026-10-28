@interface WCStoryStatusReportObj : NSObject
{
    NSString * _tid; // +0x8
    unsigned long long _videoType; // +0x10
    unsigned long long _previewEnterScene; // +0x18
}
+ (void)reportChangeFeaturedWithTid:(id)arg1;
- (void)reportChangeFeaturedOrHiddenStatus;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)videoType;
- (void)setVideoType:(unsigned long long)arg1;
- (unsigned long long)previewEnterScene;
- (void)setPreviewEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
