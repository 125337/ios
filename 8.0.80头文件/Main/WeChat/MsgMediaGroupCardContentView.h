@interface MsgMediaGroupCardContentView : UIView <IMessageNodeStatusExt, IMsgMediaGroupCard>
{
    BOOL isActive; // +0x8
    BOOL isVisible; // +0x9
    BOOL _disableMediaPlaying; // +0xa
    BaseMessageViewModel * _viewModel; // +0x10
    UIView * _uploadMaskView; // +0x18
    SightIconView * _uploadProgressView; // +0x20
    UIView * _highlightedMaskView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;
- (id)messageWrap;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)becomeActive;
- (void)resignActive;
- (void)startDisplay;
- (void)endDisplay;
- (void)onBeginAnimating;
- (void)onEndAnimating;
- (BOOL)isMediaPlaying;
- (BOOL)canAutoPlayMedia;
- (BOOL)tryAutoPlayMedia;
- (void)pauseMedia;
- (double)currentPlayTime;
- (double)uploadProgress;
- (BOOL)isUploading;
- (void)setupUploadOverlayIfNeeded;
- (void)refreshUploadStatus;
- (void)onMessageUpdateStatus;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)disableMediaPlaying;
- (void)setDisableMediaPlaying:(BOOL)arg1;
- (id)uploadMaskView;
- (void)setUploadMaskView:(id)arg1;
- (id)uploadProgressView;
- (void)setUploadProgressView:(id)arg1;
- (id)highlightedMaskView;
- (void)setHighlightedMaskView:(id)arg1;
- (void).cxx_destruct;
@end
