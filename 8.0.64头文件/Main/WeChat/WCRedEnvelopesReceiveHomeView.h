@interface WCRedEnvelopesReceiveHomeView : MMUIView <WCRedEnvelopesReceiveHomePromotionViewDelegate, PAGViewListener, WCPayWebPagViewDelegate>
{
    id <WCRedEnvelopesReceiveHomeViewDelegate> m_delegate; // +0x8
    UIImageView * m_backgroundView; // +0x10
    UIImageView * m_backgroundMaskView; // +0x18
    UIButton * openRedEnvelopesButton; // +0x20
    UIImageView * openAnimationImageView; // +0x28
    CGRect m_frame; // +0x30
    NSDictionary * m_dicBaseInfo; // +0x50
    WCRedEnvelopesControlData * m_data; // +0x58
    BOOL m_bSuccessAnmation; // +0x60
    BOOL m_bCloseAnimation; // +0x61
    UIView * oRedView; // +0x68
    UIView * oTopHeaderView; // +0x70
    UIView * imageView; // +0x78
    UIButton * cancel2Button; // +0x80
    MMWebImageView * maskImageView; // +0x88
    BOOL _isPreviewMode; // +0x90
    BOOL _isExpireViewMode; // +0x91
    BOOL _isLiveMode; // +0x92
    BOOL _isPromotionViewShowing; // +0x93
    unsigned int _enterTimestamp; // +0x94
    ContactUpdateHelper * _m_nickNameHelper; // +0x98
    ContactUpdateHelper * _m_successOpenNickNameHelper; // +0xa0
    MMEmoticonView * _emoticonView; // +0xa8
    UIImageView * _emoticonBkgImgView; // +0xb0
    UIImageView * _loadingImgView; // +0xb8
    UIImageView * _nicknameBkgView; // +0xc0
    UIImageView * _descTitleBkgView; // +0xc8
    WCPayWebImageView * _corpImageView; // +0xd0
    WCRedEnvelopesReceiveHomePromotionView * _promotionView; // +0xd8
    UIImageView * _promotionMaskView; // +0xe0
    HongbaoReceiveHomeViewAbtestObject * _abtestObject; // +0xe8
}
- (void)layoutSubviews;
- (void)refreshViewWithData:(id)arg1;
- (BOOL)shouldShowBottomDescriptionWithType:(unsigned long long)arg1 envelopeStutus:(unsigned long long)arg2;
- (BOOL)shouldShowDetailButtonWithIsSender:(BOOL)arg1 Type:(unsigned long long)arg2 ReceiveStutus:(unsigned long long)arg3 envelopeStutus:(unsigned long long)arg4 data:(id)arg5;
- (void)initAbtestObject;
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (BOOL)accessibilityPerformEscape;
- (void)OnCancelButtonDone;
- (void)OnOpenList;
- (void)OnOpenRedEnvelopes;
- (void)reportLocationAndWifi;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)removeView;
- (void)showSuccessOpenAnimation;
- (id)convertToImage:(id)arg1;
- (BOOL)hasEmoticon;
- (id)emoticonView;
- (id)emoticonBkgImgView;
- (id)nicknameBkgView;
- (id)descTitleBkgView;
- (BOOL)hasRedSkin;
- (id)generateMaskImage:(id)arg1;
- (id)cropImage:(id)arg1 toRect:(CGRect)arg2;
- (id)creatImageWithMaskImage:(id)arg1 andBackimage:(id)arg2;
- (void)showPromotionView:(id)arg1;
- (void)onClickProtomotionView:(id)arg1;
- (BOOL)hasSkinWidget;
- (BOOL)hasPagSkinWidget;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (double)getTopCurveBottomY;
- (BOOL)isPreviewMode;
- (void)setIsPreviewMode:(BOOL)arg1;
- (BOOL)isExpireViewMode;
- (void)setIsExpireViewMode:(BOOL)arg1;
- (BOOL)isLiveMode;
- (void)setIsLiveMode:(BOOL)arg1;
- (id)m_nickNameHelper;
- (void)setM_nickNameHelper:(id)arg1;
- (id)m_successOpenNickNameHelper;
- (void)setM_successOpenNickNameHelper:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (void)setEmoticonBkgImgView:(id)arg1;
- (id)loadingImgView;
- (void)setLoadingImgView:(id)arg1;
- (void)setNicknameBkgView:(id)arg1;
- (void)setDescTitleBkgView:(id)arg1;
- (id)corpImageView;
- (void)setCorpImageView:(id)arg1;
- (id)promotionView;
- (void)setPromotionView:(id)arg1;
- (id)promotionMaskView;
- (void)setPromotionMaskView:(id)arg1;
- (BOOL)isPromotionViewShowing;
- (void)setIsPromotionViewShowing:(BOOL)arg1;
- (id)abtestObject;
- (void)setAbtestObject:(id)arg1;
- (unsigned int)enterTimestamp;
- (void)setEnterTimestamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
