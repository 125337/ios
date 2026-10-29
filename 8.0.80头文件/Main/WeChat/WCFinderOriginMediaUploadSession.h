@interface WCFinderOriginMediaUploadSession : NSObject <PBCoding>
{
    BOOL _canUploadOriginVideo; // +0x8
    NSString * _originVideoPath; // +0x10
    FinderPostOriginInfo * _originInfo; // +0x18
    WCEditVideoInformation * _originVideoInfo; // +0x20
    unsigned long long _originVideoAudioChannels; // +0x28
}
+ (void)PBArrayAdd_originVideoPath;
+ (void)PBArrayAdd_originInfo;
+ (void)PBArrayAdd_canUploadOriginVideo;
+ (void)PBArrayAdd_originVideoAudioChannels;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)originVideoInfo;
- (void)asyncGetOriginalVideoInfoWithCompletion:(id /* block */)arg1;
- (void)restoreOriginVideoUploadAuthorization;
- (BOOL)checkCanUploadOriginInfo;
- (id)originVideoPath;
- (void)setOriginVideoPath:(id)arg1;
- (id)originInfo;
- (void)setOriginInfo:(id)arg1;
- (void)setOriginVideoInfo:(id)arg1;
- (BOOL)canUploadOriginVideo;
- (void)setCanUploadOriginVideo:(BOOL)arg1;
- (unsigned long long)originVideoAudioChannels;
- (void)setOriginVideoAudioChannels:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
