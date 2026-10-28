@interface WCFinderStreamCollectionViewCell : UICollectionViewCell <WCFinderFeedContentVMExt>
{
    BOOL _isShowStatus; // +0x8
    RichTextView * _descLabel; // +0x10
    WCFinderFeedImageCDNView * _imageView; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    UIView * _statusBar; // +0x28
    UIImageView * _likeIconView; // +0x30
    UILabel * _likeNumLabel; // +0x38
    UIView * _blurBGView; // +0x40
    UIImageView * _privateTipsView; // +0x48
    UIView * _privateSperatorLine; // +0x50
    UIImageView * _stickyTopIconView; // +0x58
    UIPageControl * _pageCtrl; // +0x60
    UIView * _oMaskView; // +0x68
    UILabel * _maskTipsLabel; // +0x70
    unsigned long long _showInfoType; // +0x78
}
+ (double)streamCellHeightWith:(id)arg1 width:(double)arg2 isShowStatus:(BOOL)arg3;
+ (id)descLabelFont;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initSubview;
- (void)updateContentWith:(id)arg1 showInfoType:(unsigned long long)arg2 hasMask:(BOOL)arg3;
- (void)updateInfoBubbleContentWith:(id)arg1 showInfoType:(unsigned long long)arg2;
- (void)updateImage:(id)arg1;
- (void)adjustLikeBlurMargin;
- (BOOL)displayStickTopIcon;
- (BOOL)displayPrivateIcon;
- (id)stickyTopIconView;
- (void)setStickTopIconDisplay:(BOOL)arg1;
- (BOOL)stickyTopIconViewIsHidden;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 privateStateChange:(BOOL)arg2;
- (void)onFeedContentPrivateStateChange:(BOOL)arg1;
- (void)onFeedContentStickyTopStatueChanged:(id)arg1;
- (void)updateBlurView;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)statusBar;
- (void)setStatusBar:(id)arg1;
- (id)likeIconView;
- (void)setLikeIconView:(id)arg1;
- (id)likeNumLabel;
- (void)setLikeNumLabel:(id)arg1;
- (BOOL)isShowStatus;
- (void)setIsShowStatus:(BOOL)arg1;
- (id)blurBGView;
- (void)setBlurBGView:(id)arg1;
- (id)privateTipsView;
- (void)setPrivateTipsView:(id)arg1;
- (id)privateSperatorLine;
- (void)setPrivateSperatorLine:(id)arg1;
- (void)setStickyTopIconView:(id)arg1;
- (id)pageCtrl;
- (void)setPageCtrl:(id)arg1;
- (id)oMaskView;
- (void)setOMaskView:(id)arg1;
- (id)maskTipsLabel;
- (void)setMaskTipsLabel:(id)arg1;
- (unsigned long long)showInfoType;
- (void)setShowInfoType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
