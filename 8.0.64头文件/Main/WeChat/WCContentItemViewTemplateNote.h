@interface WCContentItemViewTemplateNote : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, MMWebViewDelegate, WCImageViewDelegate, UIGestureRecognizerDelegate, WCForceTouchPreviewProtocol>
{
    MMImageGridView * _imageGridView; // +0x38
    UIImageView * _defaultImageView; // +0x40
    UILabel * _titleLabel; // +0x48
    UIImageView * _originIconView; // +0x50
    UILabel * _descLabel; // +0x58
    double _targetMargin; // +0x60
    double _targetWidth; // +0x68
    BOOL _cardStyleOptimization; // +0x70
}
+ (id)getTrimDesc:(id)arg1;
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onFavoriteAdd:(id)arg1;
- (void)addFavorite;
- (void)onLongTouch;
- (void)layoutSubviews;
- (void)onClickWCImage:(id)arg1;
- (void)dealloc;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)setNonInteractive;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onCloseCanvasPageView;
- (void)onShareToOpenSDK:(id)arg1;
- (double)targetMargin;
- (void)setTargetMargin:(double)arg1;
- (double)targetWidth;
- (void)setTargetWidth:(double)arg1;
- (BOOL)cardStyleOptimization;
- (void)setCardStyleOptimization:(BOOL)arg1;
- (void).cxx_destruct;
@end
