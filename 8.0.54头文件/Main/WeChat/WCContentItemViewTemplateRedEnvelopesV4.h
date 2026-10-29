@interface WCContentItemViewTemplateRedEnvelopesV4 : WCContentItemBaseView <WCImageViewDelegate, WCIMageGreetingExtV4>
{
    WCImageView * _imageView; // +0x38
    UIButton * _imageButton; // +0x40
    MMUILabel * _moneyLabel; // +0x48
    MMUILabel * _rmbLabel; // +0x50
    UIView * _blurView; // +0x58
    BOOL _bTimeLineScene; // +0x60
}
+ (CGSize)getImageSize:(id)arg1;
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)updateImageButtonView;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)onImageBtnClick:(id)arg1;
- (void)onReceiveRedEnvelopesClick;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)onClickWCImage:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onLongPressedWCImage:(id)arg1;
- (void)hideMenu;
- (void)onExposeFromImage:(id)arg1;
- (void)onDownloadFinish:(id)arg1;
- (id)getTimeLineViewController;
- (id)getTopViewController;
- (id)getNSStringFromTopViewControllerClass;
- (BOOL)isCurTopViewControllerMatchTheScene;
- (void)showGreetingView;
- (void)onShowGreetingView;
- (void)OnSuccessGreetingCallback;
- (void)onShowDetailView;
- (void)jumpDetailView;
- (void)onShowGreetingEntry;
- (BOOL)bTimeLineScene;
- (void)setBTimeLineScene:(BOOL)arg1;
- (void).cxx_destruct;
@end

