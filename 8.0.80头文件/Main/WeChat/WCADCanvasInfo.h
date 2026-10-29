@interface WCADCanvasInfo : NSObject <NSCoding>
{
    NSArray * originalPageList; // +0x8
    NSArray * adCanvasPageList; // +0x10
    NSString * fromAdXml; // +0x18
    NSString * shareTitle; // +0x20
    NSString * shareDesc; // +0x28
    NSString * shareWebUrl; // +0x30
    NSString * shareThumbUrl; // +0x38
    long long sizeType; // +0x40
    int basicWidth; // +0x48
    int basicRootFontSize; // +0x4c
    long long widthRoundingType; // +0x50
    long long heightRoundingType; // +0x58
    BOOL shouldVideoLayerRasterize; // +0x60
    int type; // +0x64
    int subType; // +0x68
    int visibleCount; // +0x6c
    NSString * canvasId; // +0x70
    BOOL _isInteractiveCanvas; // +0x78
    BOOL _forceOpenVoice; // +0x79
    BOOL _canvasFullScreen; // +0x7a
    int enterType; // +0x7c
    int disableShareBitSet; // +0x80
    int bizId; // +0x84
    int _forceStay; // +0x88
    int _statusBarStyle; // +0x8c
    NSString * shareAppId; // +0x90
    NSString * shareType; // +0x98
    NSString * userInfo; // +0xa0
    WCArrowDownIconStyle * _arrowDownIconStyle; // +0xa8
    NSString * _officialSyncBuffer; // +0xb0
    NSString * _rightBarTitle; // +0xb8
    NSString * _rightBarCanvasId; // +0xc0
    NSString * _rightBarCanvasExt; // +0xc8
    NSString * _canvasInfoId; // +0xd0
    NSString * _pageId; // +0xd8
    NSArray * _globalComponentItems; // +0xe0
    WCADCanvasEggAnimationInfo * _eggAnimationInfo; // +0xe8
    WCADCanvasGiveHBCardInfo * _giveHBCardInfo; // +0xf0
    WCADCanvasPageBackgroundCoverInfo * _backgroundCoverInfo; // +0xf8
    NSString * _canvasDynamicInfo; // +0x100
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateAdCanvasPageListWithinMaxCount:(unsigned long long)arg1;
- (id)adCanvasPageList;
- (BOOL)hasLoadAllVisiblePages;
- (id)fetchFirstComponentWithAvailableImage;
- (BOOL)canShowTwistAnimation;
- (id)fetchTransitionImgInfoForTwistAnimation;
- (BOOL)canShowShakeAnimation;
- (id)fetchTransitionImgInfosForShakeAnimation;
- (id)fetchTransitionAnimationInfoForShakeAnimation;
- (id)fetchRandomEncoreInfo;
- (id)fetchRandomEncorePickInfo;
- (id)fetchRandomPickComponentCardInfo;
- (id)fetchDefaultComponentItemForTwistAnimation;
- (BOOL)isSpecialFinderRedEnvelopeCanvas;
- (id)originalPageList;
- (void)setOriginalPageList:(id)arg1;
- (id)fromAdXml;
- (void)setFromAdXml:(id)arg1;
- (id)shareTitle;
- (void)setShareTitle:(id)arg1;
- (id)shareDesc;
- (void)setShareDesc:(id)arg1;
- (id)shareWebUrl;
- (void)setShareWebUrl:(id)arg1;
- (id)shareThumbUrl;
- (void)setShareThumbUrl:(id)arg1;
- (long long)sizeType;
- (void)setSizeType:(long long)arg1;
- (int)basicWidth;
- (void)setBasicWidth:(int)arg1;
- (int)basicRootFontSize;
- (void)setBasicRootFontSize:(int)arg1;
- (long long)widthRoundingType;
- (void)setWidthRoundingType:(long long)arg1;
- (long long)heightRoundingType;
- (void)setHeightRoundingType:(long long)arg1;
- (BOOL)shouldVideoLayerRasterize;
- (void)setShouldVideoLayerRasterize:(BOOL)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)subType;
- (void)setSubType:(int)arg1;
- (int)enterType;
- (void)setEnterType:(int)arg1;
- (int)disableShareBitSet;
- (void)setDisableShareBitSet:(int)arg1;
- (int)visibleCount;
- (void)setVisibleCount:(int)arg1;
- (int)bizId;
- (void)setBizId:(int)arg1;
- (id)shareAppId;
- (void)setShareAppId:(id)arg1;
- (id)shareType;
- (void)setShareType:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)arrowDownIconStyle;
- (void)setArrowDownIconStyle:(id)arg1;
- (int)forceStay;
- (void)setForceStay:(int)arg1;
- (id)officialSyncBuffer;
- (void)setOfficialSyncBuffer:(id)arg1;
- (id)rightBarTitle;
- (void)setRightBarTitle:(id)arg1;
- (id)rightBarCanvasId;
- (void)setRightBarCanvasId:(id)arg1;
- (id)rightBarCanvasExt;
- (void)setRightBarCanvasExt:(id)arg1;
- (id)canvasInfoId;
- (void)setCanvasInfoId:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (BOOL)isInteractiveCanvas;
- (void)setIsInteractiveCanvas:(BOOL)arg1;
- (id)globalComponentItems;
- (void)setGlobalComponentItems:(id)arg1;
- (id)eggAnimationInfo;
- (void)setEggAnimationInfo:(id)arg1;
- (id)giveHBCardInfo;
- (void)setGiveHBCardInfo:(id)arg1;
- (id)backgroundCoverInfo;
- (void)setBackgroundCoverInfo:(id)arg1;
- (int)statusBarStyle;
- (void)setStatusBarStyle:(int)arg1;
- (BOOL)forceOpenVoice;
- (void)setForceOpenVoice:(BOOL)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (BOOL)canvasFullScreen;
- (void)setCanvasFullScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end
