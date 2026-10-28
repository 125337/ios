@interface WCCanvasComponentItem : MMObject <NSCoding, WCCanvasIfAbility>
{
    BOOL _hasUpdateDynamicData; // +0x8
    BOOL _isTwistAnimView; // +0x9
    BOOL _isShakeAnimView; // +0xa
    BOOL _isDefaultRandomCard; // +0xb
    int canvasIf; // +0xc
    int hasIf; // +0x10
    int _type; // +0x14
    int _subType; // +0x18
    int _verticalAlignment; // +0x1c
    int _horizontalAlignment; // +0x20
    int _noReport; // +0x24
    NSMutableArray * dynamicsInfo; // +0x28
    NSString * _cid; // +0x30
    NSString * _bgColor; // +0x38
    WCCanvasComponentTextAreaInfo * _textAreaInfo; // +0x40
    WCCanvasComponentButtonInfo * _buttonInfo; // +0x48
    WCCanvasComponentPureImageInfo * _pureImageInfo; // +0x50
    WCCanvasComponentSightVideoInfo * _sightVideoInfo; // +0x58
    WCCanvasComponentStreamVideoInfo * _streamVideoInfo; // +0x60
    WCCanvasComponentGeneralVideoInfo * _generalVideoInfo; // +0x68
    WCCanvasComponentPreloadWebViewInfo * _preloadWebViewInfo; // +0x70
    WCCanvsComponentPanoramaInfo * _panoramaInfo; // +0x78
    WCCanvasComponentFullScreenImageInfo * _fullScreenImageInfo; // +0x80
    WCCanvsComponentScrollGroupListInfo * _scrollGroupListInfo; // +0x88
    WCCanvasComponentNewScrollInfo * _oNewScrollInfo; // +0x90
    WCCanvasComponentLocationInfo * _locationInfo; // +0x98
    WCCanvasComponentTelephoneInfo * _telephoneInfo; // +0xa0
    WCCanvasAbilitySliderInfo * _abilitySliderInfo; // +0xa8
    WCCanvasRadarChartInfo * _radarChartInfo; // +0xb0
    WCCanvasLinearLayoutInfo * _linearLayoutInfo; // +0xb8
    WCCanvasFrameLayoutInfo * _frameLayoutInfo; // +0xc0
    WCAdSphereCardInfo * _sphereInfo; // +0xc8
    WCCanvasComponentFloatActionButtonInfo * _floatActionButtonInfo; // +0xd0
    WCCanvasComponentBottomSwipeInfo * _bottomSwipeInfo; // +0xd8
    WCCanvasComponentUltraWebViewInfo * _ultraWebViewInfo; // +0xe0
    WCCanvasComponentWebStoreInfo * _webStoreInfo; // +0xe8
    WCCanvasFloatLayoutInfo * _floatLayoutInfo; // +0xf0
    WCCanvasComponentFloatJumpInfo * _floatJumpInfo; // +0xf8
    WCCanvasRandomLayoutInfo * _randomLayoutInfo; // +0x100
    WCCanvasComponentShareInfo * _shareInfo; // +0x108
    WCCanvasComponentFloatConversionBarInfo * _floatConversionBarInfo; // +0x110
    WCCanvasComponentSocialInfo * _socialInfo; // +0x118
    WCCanvasComponentRedEnvelopInfo * _redEnvelopInfo; // +0x120
    WCCanvasComponentSidebarInfo * _sidebarInfo; // +0x128
    WCCanvasComponentSeparatorInfo * _separatorInfo; // +0x130
    WCCanvasComponentMusicInfo * _musicInfo; // +0x138
    WCCanvasComponentBackgroundMusicInfo * _backgroundMusicInfo; // +0x140
    WCCanvasComponentHalfRandomCardInfo * _halfRandomCardInfo; // +0x148
    WCCanvasComponentRandomPickCardInfo * _randomPickCardInfo; // +0x150
    WCCanvasComponentRandomPickCardTitleInfo * _randomPickCardTitleInfo; // +0x158
    double _paddingTop; // +0x160
    double _paddingBottom; // +0x168
    double _paddingLeft; // +0x170
    double _paddingRight; // +0x178
    double _layoutWidth; // +0x180
    double _layoutHeight; // +0x188
    double _paddingBottomSupplemental; // +0x190
    NSString * _jumpExtInfo; // +0x198
    double _floatStartTime; // +0x1a0
    NSString * _floatComponentId; // +0x1a8
    NSString * _qrExtInfo; // +0x1b0
    NSString * _borderColor; // +0x1b8
    NSString * _borderSize; // +0x1c0
    NSString * _layoutBGColor; // +0x1c8
    NSString * _randomCardId; // +0x1d0
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)updateUsingDynamicInfo:(id)arg1;
- (id)fetchLayoutItemsInLayoutComponent;
- (id)getInnerFirstVideoComponentItem;
- (void)allowAllVideoComponentsMakingVoice:(BOOL)arg1;
- (void)resetAllComponentDynamicValues;
- (id)fetchRandomLayoutComponentItemItself;
- (id)fetchRandomLayoutChosenRandomCardId;
- (BOOL)updateRandomLayoutWithChosenCardId:(id)arg1 cardDynamicInfo:(id)arg2;
- (BOOL)resetRandomLayoutChosenCardId;
- (BOOL)updateRandomCardDynamicInfoWith:(id)arg1;
- (BOOL)canShowTwistAnimation;
- (id)fetchTransitionImgInfoForTwistAnimation;
- (BOOL)canShowShakeAnimation;
- (id)fetchTransitionImgInfosForShakeAnimation;
- (double)fetchLayoutCornerRadius;
- (id)fetchDefaultComponentItemForTwistAnimation;
- (id)fetchTransitionAnimationInfoForShakeAnimation;
- (id)fetchRandomEncoreInfo;
- (id)fetchRandomEncorePickInfo;
- (id)fetchRandomPickComponentCardInfo;
- (BOOL)isSpecialFinderRedEnvelopeItem;
- (id)fetchFirstComponentWithAvailableImage;
- (id)fetchImageUrl;
- (long long)fetchImageContentMode;
- (id)fetchWebStoreUrlsWithInternalJump:(BOOL)arg1;
- (BOOL)isNeedShowStreamVideoBtn;
- (double)jumpStreamVideoTextHeight;
- (id)dynamicsInfo;
- (void)setDynamicsInfo:(id)arg1;
- (int)canvasIf;
- (void)setCanvasIf:(int)arg1;
- (int)hasIf;
- (void)setHasIf:(int)arg1;
- (id)cid;
- (void)setCid:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)subType;
- (void)setSubType:(int)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (id)textAreaInfo;
- (void)setTextAreaInfo:(id)arg1;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg1;
- (id)pureImageInfo;
- (void)setPureImageInfo:(id)arg1;
- (id)sightVideoInfo;
- (void)setSightVideoInfo:(id)arg1;
- (id)streamVideoInfo;
- (void)setStreamVideoInfo:(id)arg1;
- (id)generalVideoInfo;
- (void)setGeneralVideoInfo:(id)arg1;
- (id)preloadWebViewInfo;
- (void)setPreloadWebViewInfo:(id)arg1;
- (id)panoramaInfo;
- (void)setPanoramaInfo:(id)arg1;
- (id)fullScreenImageInfo;
- (void)setFullScreenImageInfo:(id)arg1;
- (id)scrollGroupListInfo;
- (void)setScrollGroupListInfo:(id)arg1;
- (id)oNewScrollInfo;
- (void)setONewScrollInfo:(id)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)telephoneInfo;
- (void)setTelephoneInfo:(id)arg1;
- (id)abilitySliderInfo;
- (void)setAbilitySliderInfo:(id)arg1;
- (id)radarChartInfo;
- (void)setRadarChartInfo:(id)arg1;
- (id)linearLayoutInfo;
- (void)setLinearLayoutInfo:(id)arg1;
- (id)frameLayoutInfo;
- (void)setFrameLayoutInfo:(id)arg1;
- (id)sphereInfo;
- (void)setSphereInfo:(id)arg1;
- (id)floatActionButtonInfo;
- (void)setFloatActionButtonInfo:(id)arg1;
- (id)bottomSwipeInfo;
- (void)setBottomSwipeInfo:(id)arg1;
- (id)ultraWebViewInfo;
- (void)setUltraWebViewInfo:(id)arg1;
- (id)webStoreInfo;
- (void)setWebStoreInfo:(id)arg1;
- (id)floatLayoutInfo;
- (void)setFloatLayoutInfo:(id)arg1;
- (id)floatJumpInfo;
- (void)setFloatJumpInfo:(id)arg1;
- (id)randomLayoutInfo;
- (void)setRandomLayoutInfo:(id)arg1;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (id)floatConversionBarInfo;
- (void)setFloatConversionBarInfo:(id)arg1;
- (id)socialInfo;
- (void)setSocialInfo:(id)arg1;
- (id)redEnvelopInfo;
- (void)setRedEnvelopInfo:(id)arg1;
- (id)sidebarInfo;
- (void)setSidebarInfo:(id)arg1;
- (id)separatorInfo;
- (void)setSeparatorInfo:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)backgroundMusicInfo;
- (void)setBackgroundMusicInfo:(id)arg1;
- (id)halfRandomCardInfo;
- (void)setHalfRandomCardInfo:(id)arg1;
- (id)randomPickCardInfo;
- (void)setRandomPickCardInfo:(id)arg1;
- (id)randomPickCardTitleInfo;
- (void)setRandomPickCardTitleInfo:(id)arg1;
- (double)paddingTop;
- (void)setPaddingTop:(double)arg1;
- (double)paddingBottom;
- (void)setPaddingBottom:(double)arg1;
- (double)paddingLeft;
- (void)setPaddingLeft:(double)arg1;
- (double)paddingRight;
- (void)setPaddingRight:(double)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (double)layoutHeight;
- (void)setLayoutHeight:(double)arg1;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)arg1;
- (int)horizontalAlignment;
- (void)setHorizontalAlignment:(int)arg1;
- (BOOL)hasUpdateDynamicData;
- (void)setHasUpdateDynamicData:(BOOL)arg1;
- (int)noReport;
- (void)setNoReport:(int)arg1;
- (double)paddingBottomSupplemental;
- (void)setPaddingBottomSupplemental:(double)arg1;
- (id)jumpExtInfo;
- (void)setJumpExtInfo:(id)arg1;
- (double)floatStartTime;
- (void)setFloatStartTime:(double)arg1;
- (id)floatComponentId;
- (void)setFloatComponentId:(id)arg1;
- (id)qrExtInfo;
- (void)setQrExtInfo:(id)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (id)borderSize;
- (void)setBorderSize:(id)arg1;
- (id)layoutBGColor;
- (void)setLayoutBGColor:(id)arg1;
- (BOOL)isTwistAnimView;
- (void)setIsTwistAnimView:(BOOL)arg1;
- (BOOL)isShakeAnimView;
- (void)setIsShakeAnimView:(BOOL)arg1;
- (id)randomCardId;
- (void)setRandomCardId:(id)arg1;
- (BOOL)isDefaultRandomCard;
- (void)setIsDefaultRandomCard:(BOOL)arg1;
- (void).cxx_destruct;
@end
