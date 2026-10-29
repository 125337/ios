@interface WCMediaImageViewModel : NSObject
{
    WCMomentsPageContext * _pageContext; // +0x8
    WCLivePhotoBrowseReport * _livePhotoBrowseReport; // +0x10
    NSString * _albumSessionId; // +0x18
    NSString * _initialMediaItemId; // +0x20
}
+ (id)viewModelWithMediaItem:(id)arg1;
+ (id)viewModelWithMMImage:(id)arg1;
- (BOOL)isLivePhoto;
- (void)fillExtraDataInImageMaterial:(id)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (id)livePhotoBrowseReport;
- (void)setLivePhotoBrowseReport:(id)arg1;
- (id)albumSessionId;
- (void)setAlbumSessionId:(id)arg1;
- (id)initialMediaItemId;
- (void)setInitialMediaItemId:(id)arg1;
- (void).cxx_destruct;
@end
