@interface WCContentItemViewTemplateNews : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, MMWebViewDelegate, WCImageViewDelegate, UIGestureRecognizerDelegate, WCForceTouchPreviewProtocol>
{
    MMImageGridView * _imageGridView; // +0x38
    UIImageView * _defaultImageView; // +0x40
    UILabel * _titleLabel; // +0x48
    UIImageView * _originIconView; // +0x50
    UIImageView * _coverIconView; // +0x58
    UILabel * _descLabel; // +0x60
    double _targetMargin; // +0x68
    double _targetWidth; // +0x70
    BOOL _cardStyleOptimization; // +0x78
    SightIconView * _videoIconView; // +0x80
    WCBizAppReaderMessageBigPicView * _bizAppBigPicView; // +0x88
    WCBizAppReaderMessageBigPicViewModel * _bizAppBigPicViewModel; // +0x90
    long long _bizMpDispalyStyle; // +0x98
}
+ (id)getTrimDesc:(id)arg1;
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
+ (double)heightForMedia:(id)arg1 pageContext:(id)arg2 showDetail:(BOOL)arg3;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)initTemplateNewsViewWithWCDataItem:(id)arg1;
- (void)initBizAppBigPicViewWithViewModel:(id)arg1;
- (id)bizAppBigPicView;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)isAsk;
- (BOOL)isAISearch;
- (void)onFavoriteAdd:(id)arg1;
- (void)addFavorite;
- (void)onShareToOpenSDK:(id)arg1;
- (void)onLongTouch;
- (BOOL)canShowForwardMenuItem;
- (void)onTryNotShowTheUrlAgain:(id)arg1;
- (void)confirmNotShowTheUrlAgain;
- (void)cancelNotShowTheUrlAgain;
- (void)layoutSubviews;
- (void)layoutBizAppBigPicViews;
- (void)layoutDefault;
- (void)onClickWCImage:(id)arg1;
- (void)dealloc;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)setNonInteractive;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)reportEcsData:(id)arg1 dataItem:(id)arg2;
- (void)throwUrlMessage;
- (void)internalOpenWebView:(id)arg1 plainUrl:(id)arg2 urlString:(id)arg3 endOpInfo:(id)arg4;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onCloseCanvasPageView;
- (void)reportLinkAdClickWithActionType:(long long)arg1;
- (void)openShareAdCanvas:(id)arg1 fromDetail:(BOOL)arg2 dataItem:(id)arg3;
- (void)notifyCanvasViewOutFullScreen:(id)arg1;
- (double)targetMargin;
- (void)setTargetMargin:(double)arg1;
- (double)targetWidth;
- (void)setTargetWidth:(double)arg1;
- (id)videoIconView;
- (void)setVideoIconView:(id)arg1;
- (void)setBizAppBigPicView:(id)arg1;
- (id)bizAppBigPicViewModel;
- (void)setBizAppBigPicViewModel:(id)arg1;
- (long long)bizMpDispalyStyle;
- (void)setBizMpDispalyStyle:(long long)arg1;
- (BOOL)cardStyleOptimization;
- (void)setCardStyleOptimization:(BOOL)arg1;
- (void).cxx_destruct;
@end
