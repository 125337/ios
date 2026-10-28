@interface WCFinderOriginMediaUploadSession : NSObject
{
    BOOL _canUploadOriginVideo; // +0x8
    NSString * _originVideoPath; // +0x10
    FinderPostOriginInfo * _originInfo; // +0x18
    WCEditVideoInformation * _originVideoInfo; // +0x20
}
- (void)asyncGetOriginalVideoInfoWithCompletion:(id /* block */)arg1;
- (BOOL)checkCanUploadOriginInfo;
- (id)originVideoPath;
- (void)setOriginVideoPath:(id)arg1;
- (id)originInfo;
- (void)setOriginInfo:(id)arg1;
- (id)originVideoInfo;
- (void)setOriginVideoInfo:(id)arg1;
- (BOOL)canUploadOriginVideo;
- (void)setCanUploadOriginVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end
