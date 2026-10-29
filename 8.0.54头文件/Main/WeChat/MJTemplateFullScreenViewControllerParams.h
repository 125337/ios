@interface MJTemplateFullScreenViewControllerParams : NSObject
{
    BOOL _isMuted; // +0x8
    WCDataItem * _dataItem; // +0x10
    WCMediaItem * _mediaItem; // +0x18
    WCMomentsTemplateShareInfo * _shareInfo; // +0x20
    UIImageView * _thumbImageView; // +0x28
    long long _browseScene; // +0x30
    CGRect _originFrame; // +0x38
}
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (CGRect)originFrame;
- (void)setOriginFrame:(CGRect)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (long long)browseScene;
- (void)setBrowseScene:(long long)arg1;
- (void).cxx_destruct;
@end

