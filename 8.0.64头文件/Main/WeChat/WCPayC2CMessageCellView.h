@interface WCPayC2CMessageCellView : WCPayBaseMessageCellView <PAGViewListener, WCPayWebPagViewDelegate>
{
    WCPayWebImageView * _showResourceImageView; // +0xc8
    UIImageView * _showResourceMaskView; // +0xd0
    WCPayWebImageView * _showResourceWidgetImageView; // +0xd8
    NSString * _bgImageName; // +0xe0
    NSString * _bgHighlightImageName; // +0xe8
    NSString * _maskImageName; // +0xf0
    NSString * _maskHighlightImageName; // +0xf8
    NSMutableDictionary * _showResourceMaskImageViewCache; // +0x100
    UIView * _showResourceBgView; // +0x108
    WCPayWebImageView * _corpLogoIcon; // +0x110
    WCPayWebPagView * _pagView; // +0x118
    CAShapeLayer * _skinMaskLayer; // +0x120
    WCPayWebPagView * _atmospherePagView; // +0x128
}
- (id)initWithViewModel:(id)arg1;
- (void)updateStatus;
- (BOOL)isAAC2CMsg;
- (BOOL)isAAC2CHandledMsg;
- (BOOL)isHBC2CMsg;
- (BOOL)isHBC2CHandledMsg;
- (void)updateIconView;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)updateBgImageView:(BOOL)arg1;
- (void)updateHbSourceImageView;
- (id)demoCoverAtmospherePagFile;
- (void)onAnimationEnd:(id)arg1;
- (BOOL)isHongBaoHandled;
- (void)playAtmopherePagIfNeed;
- (void)playPagIfNeed;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (id)generateMaskImage:(id)arg1 isSender:(BOOL)arg2;
- (void)initSourceViewInside;
- (void)onTouchUpInside;
- (void)layoutInternal;
- (BOOL)canAdjustsFontSizeToFitWidth;
- (id)showResourceImageView;
- (void)setShowResourceImageView:(id)arg1;
- (id)showResourceMaskView;
- (void)setShowResourceMaskView:(id)arg1;
- (id)showResourceWidgetImageView;
- (void)setShowResourceWidgetImageView:(id)arg1;
- (id)bgImageName;
- (void)setBgImageName:(id)arg1;
- (id)bgHighlightImageName;
- (void)setBgHighlightImageName:(id)arg1;
- (id)maskImageName;
- (void)setMaskImageName:(id)arg1;
- (id)maskHighlightImageName;
- (void)setMaskHighlightImageName:(id)arg1;
- (id)showResourceMaskImageViewCache;
- (void)setShowResourceMaskImageViewCache:(id)arg1;
- (id)showResourceBgView;
- (void)setShowResourceBgView:(id)arg1;
- (id)corpLogoIcon;
- (void)setCorpLogoIcon:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)skinMaskLayer;
- (void)setSkinMaskLayer:(id)arg1;
- (id)atmospherePagView;
- (void)setAtmospherePagView:(id)arg1;
- (void).cxx_destruct;
@end
