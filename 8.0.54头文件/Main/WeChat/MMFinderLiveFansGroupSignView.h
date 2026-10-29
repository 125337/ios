@interface MMFinderLiveFansGroupSignView : UIView <MMWebImageViewDelegate>
{
    BOOL _autoAdjustWidth; // +0x8
    BOOL _autoAdjustHeight; // +0x9
    BOOL _isSuperfan; // +0xa
    BOOL _forceClearBGColorForSuperfan; // +0xb
    BOOL _isFansGroupIconCenter; // +0xc
    BOOL _customAccessibilitySetting; // +0xd
    BOOL _isTransfering; // +0xe
    BOOL _forceLayout; // +0xf
    long long _uiStyle; // +0x10
    long long _uiMode; // +0x18
    long long _uiShape; // +0x20
    NSString * _fansGroupText; // +0x28
    unsigned long long _fansGroupRank; // +0x30
    double _fansGroupIconLeft; // +0x38
    UIFont * _fanGroupTextFont; // +0x40
    UIImageView * _fansGroupBackView; // +0x48
    UIImageView * _fansSignIconView; // +0x50
    MMUILabel * _fansRankLabel; // +0x58
    MMUILabel * _fansSignLabel; // +0x60
    UIImageView * _fansSignTailView; // +0x68
    double _currentLayoutFontScale; // +0x70
    CGSize _fanGroupIconSize; // +0x78
    CGSize _originalIconImageSize; // +0x88
}
+ (CGSize)getFansGroupSignSizeWithName:(id)arg1 uiStyle:(long long)arg2 rank:(unsigned int)arg3 isSuperfan:(BOOL)arg4;
+ (CGSize)getFansGroupSignSizeWithName:(id)arg1 uiStyle:(long long)arg2 rank:(unsigned int)arg3 isSuperfan:(BOOL)arg4 customFont:(id)arg5;
+ (double)getFansSignLabelLeftWithStyle:(long long)arg1 rank:(unsigned long long)arg2 isSuperfan:(BOOL)arg3;
+ (id)getFansGroupFontForUIStyle:(long long)arg1;
+ (id)getRankImageWithRank:(unsigned long long)arg1 isSuperfan:(BOOL)arg2;
+ (unsigned int)FanMediumLevelLowerBound;
+ (unsigned int)FanHighLevelLowerBound;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2 isSuperfan:(BOOL)arg3;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2 isSuperfan:(BOOL)arg3 forceLayout:(BOOL)arg4;
- (void)innerInit;
- (void)initDefaultLayoutFontScale;
- (void)updateLayoutFontScale;
- (void)setCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)createFansGroupBackView;
- (BOOL)shouldShowFansGroupBackView;
- (void)layoutFansGroupBackView;
- (void)layoutFansSignIconView;
- (double)fansGroupIconLeft;
- (void)layoutFansRankLabel;
- (void)updateFansRankLabelOrigin;
- (void)layoutFansSignLabel;
- (void)updateFansSignLabelOrigin;
- (void)layoutFansSignTailView;
- (void)updateFansSignTailHidden;
- (void)updateSelfSize;
- (void)updateUIForCurrentUIMode;
- (id)getSuperfanSignLabelColorInLightMode;
- (void)updateFansGroupBackViewImage;
- (void)updateSignLabelFontForCurrentUIStyle;
- (void)updateFansSignIconView;
- (void)updateFansRankLabel;
- (BOOL)needDisplayFansTail;
- (void)setUiStyle:(long long)arg1;
- (void)setUiMode:(long long)arg1;
- (void)setIsSuperfan:(BOOL)arg1;
- (void)setForceClearBGColorForSuperfan:(BOOL)arg1;
- (void)setFansGroupText:(id)arg1;
- (void)updateFansGroupText:(id)arg1 checkEmpty:(BOOL)arg2;
- (void)setFansGroupRank:(unsigned long long)arg1;
- (void)setFanGroupTextFont:(id)arg1;
- (void)setAutoAdjustWidth:(BOOL)arg1;
- (void)setAutoAdjustHeight:(BOOL)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)setUiShape:(long long)arg1;
- (void)transferToState:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)getCurrentUIStateInfo;
- (void)refreshWithUIStateInfo:(id)arg1;
- (id)accessibilityLabel;
- (long long)uiStyle;
- (long long)uiMode;
- (long long)uiShape;
- (id)fansGroupText;
- (unsigned long long)fansGroupRank;
- (BOOL)autoAdjustWidth;
- (BOOL)autoAdjustHeight;
- (BOOL)isSuperfan;
- (BOOL)forceClearBGColorForSuperfan;
- (CGSize)fanGroupIconSize;
- (void)setFanGroupIconSize:(CGSize)arg1;
- (BOOL)isFansGroupIconCenter;
- (void)setIsFansGroupIconCenter:(BOOL)arg1;
- (void)setFansGroupIconLeft:(double)arg1;
- (id)fanGroupTextFont;
- (BOOL)customAccessibilitySetting;
- (void)setCustomAccessibilitySetting:(BOOL)arg1;
- (id)fansGroupBackView;
- (void)setFansGroupBackView:(id)arg1;
- (id)fansSignIconView;
- (void)setFansSignIconView:(id)arg1;
- (id)fansRankLabel;
- (void)setFansRankLabel:(id)arg1;
- (id)fansSignLabel;
- (void)setFansSignLabel:(id)arg1;
- (id)fansSignTailView;
- (void)setFansSignTailView:(id)arg1;
- (BOOL)isTransfering;
- (void)setIsTransfering:(BOOL)arg1;
- (double)currentLayoutFontScale;
- (void)setCurrentLayoutFontScale:(double)arg1;
- (BOOL)forceLayout;
- (void)setForceLayout:(BOOL)arg1;
- (CGSize)originalIconImageSize;
- (void)setOriginalIconImageSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

