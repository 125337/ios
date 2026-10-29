@interface WCFinderFeedStaticCoverView : UIView <WCFinderFeedImageCDNViewDelegate, WCFinderLiveExt>
{
    BOOL _ignoreTopping; // +0x8
    int _coverShowStyle; // +0xc
    id <WCFinderFeedStaticCoverViewProtocol> _delegate; // +0x10
    WCFinderFeedImageCDNView * _coverImageView; // +0x18
    id /* block */ _renderReporter; // +0x20
    UIView<WCFinderLiveIconAnimationProtocol> * _liveNowView; // +0x28
    WCFinderLiveNowView * _liveEndView; // +0x30
    unsigned long long _topLeftType; // +0x38
    WCFinderStaticCoverCollectionViewCellConfig * _config; // +0x40
    WCFinderDataItem * _dataItem; // +0x48
    WCFinderStaticCoverInfoView * _bottomLeftInfoView; // +0x50
    WCFinderStaticCoverInfoView * _infoView; // +0x58
    UIView * _infoBGView; // +0x60
    CAGradientLayer * _infoBGLayer; // +0x68
    UIView * _gradientView; // +0x70
    CAGradientLayer * _gradientLayer; // +0x78
    WCFinderFeedImageCDNView * _backGroundCoverView; // +0x80
    UIView * _infoMaskView; // +0x88
    UILabel * _liveCoverEffectLabel; // +0x90
    UIEdgeInsets _customInfoViewInsets; // +0x98
}
+ (BOOL)shouldShowRedPacketItemWithDataItem:(id)arg1 config:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)updateTopLeftViewType:(unsigned long long)arg1;
- (void)layoutGradientView;
- (void)setupLiveIconView;
- (void)prepareForReuse;
- (void)initSubviews;
- (void)adjustEndViewWith:(unsigned long long)arg1;
- (void)updateContentWithDataItem:(id)arg1 config:(id)arg2 scene:(int)arg3;
- (void)updateInfoViewWithRightItem:(id)arg1 leftItem:(id)arg2 config:(id)arg3;
- (void)layoutBGInfoView;
- (id)infoLeftItemsForDataItem:(id)arg1 config:(id)arg2;
- (id)infoRightItemsForDataItem:(id)arg1 config:(id)arg2;
- (void)insertSubviewBelowInfoView:(id)arg1;
- (void)layoutSubviews;
- (void)adjustMargin;
- (UIEdgeInsets)displayInfoViewEdgeInsets;
- (void)addInfoViewGradientView;
- (void)addCoverBlurEffect;
- (void)removeCoverBlurEffect;
- (void)addCoverSpamEffect:(id)arg1;
- (void)removeCoverSpamEffect;
- (void)updateCoverHeight:(double)arg1;
- (void)updateCoverImageWithMediaWrap:(id)arg1;
- (void)setLiveNowViewHidden:(BOOL)arg1;
- (void)startLiveAnimation;
- (void)hiddenLiveNowView:(BOOL)arg1;
- (id)getStrLiveNowViewShouldDisplay;
- (id)getLiveNowViewDisplayStr;
- (void)finderFeedImageLoadFinish;
- (void)reportCDNImageRenderCost:(unsigned long long)arg1;
- (BOOL)isCoverLoaded;
- (void)updateInfoCoverMask;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (id)gradientLayer;
- (id)gradientView;
- (id)accessibilityLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (UIEdgeInsets)customInfoViewInsets;
- (void)setCustomInfoViewInsets:(UIEdgeInsets)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id /* block */)renderReporter;
- (void)setRenderReporter:(id /* block */)arg1;
- (BOOL)ignoreTopping;
- (void)setIgnoreTopping:(BOOL)arg1;
- (id)liveNowView;
- (void)setLiveNowView:(id)arg1;
- (id)liveEndView;
- (void)setLiveEndView:(id)arg1;
- (unsigned long long)topLeftType;
- (void)setTopLeftType:(unsigned long long)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (int)coverShowStyle;
- (void)setCoverShowStyle:(int)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)bottomLeftInfoView;
- (void)setBottomLeftInfoView:(id)arg1;
- (id)infoView;
- (void)setInfoView:(id)arg1;
- (id)infoBGView;
- (void)setInfoBGView:(id)arg1;
- (id)infoBGLayer;
- (void)setInfoBGLayer:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (id)backGroundCoverView;
- (void)setBackGroundCoverView:(id)arg1;
- (id)infoMaskView;
- (void)setInfoMaskView:(id)arg1;
- (id)liveCoverEffectLabel;
- (void)setLiveCoverEffectLabel:(id)arg1;
- (void).cxx_destruct;
@end
