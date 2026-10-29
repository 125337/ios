@interface WCCanvasComponentButtonInfo : MMObject <NSCoding>
{
    BOOL _bInternalJumpAppStore; // +0x8
    BOOL _hideProductActionHeader; // +0x9
    BOOL _showProductActionCancelButton; // +0xa
    BOOL _bCanLongPress; // +0xb
    BOOL _bHideActionSheet; // +0xc
    BOOL _showMessageCard; // +0xd
    BOOL _needUpdateQrUrl; // +0xe
    BOOL _qrScanDirectJump; // +0xf
    BOOL _needRequestLBS; // +0x10
    BOOL _isSimpleFinderLiveNotice; // +0x11
    BOOL _isJumpInHalfScreenStyle; // +0x12
    BOOL _autoJump; // +0x13
    int _btnType; // +0x14
    unsigned int _btnAlignmentType; // +0x18
    unsigned int _fontSize; // +0x1c
    unsigned int _btnHeight; // +0x20
    int _btnFontType; // +0x24
    int _platform; // +0x28
    unsigned int _btnIconSize; // +0x2c
    int _jumpCanvasNoStore; // +0x30
    int _btnCanvasEnterType; // +0x34
    int _btnCanvasSource; // +0x38
    int _miniProgramType; // +0x3c
    int _jumpAnimationType; // +0x40
    unsigned int _finderLiveStartTime; // +0x44
    NSString * _title; // +0x48
    NSString * _jumpUrl; // +0x50
    NSString * _fontColorStr; // +0x58
    NSString * _fontColorDisabled; // +0x60
    double _borderSize; // +0x68
    NSString * _btnBgColorTheme; // +0x70
    NSString * _btnBgColorDisabled; // +0x78
    NSString * _btnBorderColorTheme; // +0x80
    NSString * _btnBorderColorDisabled; // +0x88
    double _cornerRadius; // +0x90
    NSString * _warningIos; // +0x98
    NSString * _btnIconUrl; // +0xa0
    NSString * _cardTpId; // +0xa8
    NSString * _cardExt; // +0xb0
    NSString * _btnBgImgUrl; // +0xb8
    NSString * _btnJumpApp; // +0xc0
    NSString * _appPageUrl; // +0xc8
    NSString * _openSdkAppId; // +0xd0
    NSString * _jumpCanvasId; // +0xd8
    NSString * _jumpCanvasExt; // +0xe0
    NSString * _jumpCanvasDynamicInfo; // +0xe8
    NSString * _weappUserName; // +0xf0
    NSString * _weappPath; // +0xf8
    POIInfo * _poiInfo; // +0x100
    NSArray * _phoneNumList; // +0x108
    NSString * _productActionBuffer; // +0x110
    NSString * _productActionTitle; // +0x118
    NSString * _productActionIconUrl; // +0x120
    WCCanvasComponentItem * _productActionItem; // +0x128
    NSString * _weAppID; // +0x130
    NSString * _businessId; // +0x138
    NSString * _sessionFrom; // +0x140
    NSString * _pageId; // +0x148
    NSString * _sendMessageImg; // +0x150
    NSString * _sendMessagePath; // +0x158
    NSString * _sendMessageTitle; // +0x160
    unsigned long long _sid; // +0x168
    unsigned long long _compid; // +0x170
    NSString * _qrUrl; // +0x178
    WCAdQuicklyAddBrandInfo * _quicklyAddBrandInfo; // +0x180
    NSString * _profileUserName; // +0x188
    NSString * _wxGroupInfo; // +0x190
    NSString * _couponAppId; // +0x198
    NSString * _couponStockId; // +0x1a0
    WCAdCardBtnInfo * _couponSuccessActionInfo; // +0x1a8
    NSString * _finderUsername; // +0x1b0
    NSString * _finderLiveNoticeId; // +0x1b8
    NSString * _finderLiveSuccessBtnTitle; // +0x1c0
    NSString * _finderLiveFinishTitle; // +0x1c8
    WCAdFinderInfo * _finderFeedInfo; // +0x1d0
    NSString * _emotionProductId; // +0x1d8
    NSString * _customerServiceUrl; // +0x1e0
    WCAdAppointmentInfo * _appointmentInfo; // +0x1e8
    WCAdFinderFollowInfo * _finderFollowInfo; // +0x1f0
    WCAdCombineFollowInfo * _combineFollowInfo; // +0x1f8
    WCAdRedPacketCoverInfo * _redPacketCoverInfo; // +0x200
    NSString * _doubleLinkH5Url; // +0x208
    WCAdStatePublishInfo * _statePublishInfo; // +0x210
    WCAdCardBtnInfo * _actionOnSuccess; // +0x218
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 toComponentItem:(id)arg2 withSizeType:(long long)arg3 basicWidth:(int)arg4 basicRootFontSize:(int)arg5 widthRoundingType:(long long)arg6 heightRoundingType:(long long)arg7;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAppSchemaJumpInfoValid;
- (BOOL)isWeAppInfoValid;
- (BOOL)isDoubleLinkH5URLInfoValid;
- (id)title;
- (void)setTitle:(id)arg1;
- (int)btnType;
- (void)setBtnType:(int)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (unsigned int)btnAlignmentType;
- (void)setBtnAlignmentType:(unsigned int)arg1;
- (unsigned int)fontSize;
- (void)setFontSize:(unsigned int)arg1;
- (id)fontColorStr;
- (void)setFontColorStr:(id)arg1;
- (id)fontColorDisabled;
- (void)setFontColorDisabled:(id)arg1;
- (double)borderSize;
- (void)setBorderSize:(double)arg1;
- (unsigned int)btnHeight;
- (void)setBtnHeight:(unsigned int)arg1;
- (id)btnBgColorTheme;
- (void)setBtnBgColorTheme:(id)arg1;
- (id)btnBgColorDisabled;
- (void)setBtnBgColorDisabled:(id)arg1;
- (id)btnBorderColorTheme;
- (void)setBtnBorderColorTheme:(id)arg1;
- (id)btnBorderColorDisabled;
- (void)setBtnBorderColorDisabled:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (int)btnFontType;
- (void)setBtnFontType:(int)arg1;
- (int)platform;
- (void)setPlatform:(int)arg1;
- (id)warningIos;
- (void)setWarningIos:(id)arg1;
- (BOOL)bInternalJumpAppStore;
- (void)setBInternalJumpAppStore:(BOOL)arg1;
- (id)btnIconUrl;
- (void)setBtnIconUrl:(id)arg1;
- (unsigned int)btnIconSize;
- (void)setBtnIconSize:(unsigned int)arg1;
- (id)cardTpId;
- (void)setCardTpId:(id)arg1;
- (id)cardExt;
- (void)setCardExt:(id)arg1;
- (id)btnBgImgUrl;
- (void)setBtnBgImgUrl:(id)arg1;
- (id)btnJumpApp;
- (void)setBtnJumpApp:(id)arg1;
- (id)appPageUrl;
- (void)setAppPageUrl:(id)arg1;
- (id)openSdkAppId;
- (void)setOpenSdkAppId:(id)arg1;
- (id)jumpCanvasId;
- (void)setJumpCanvasId:(id)arg1;
- (id)jumpCanvasExt;
- (void)setJumpCanvasExt:(id)arg1;
- (int)jumpCanvasNoStore;
- (void)setJumpCanvasNoStore:(int)arg1;
- (id)jumpCanvasDynamicInfo;
- (void)setJumpCanvasDynamicInfo:(id)arg1;
- (int)btnCanvasEnterType;
- (void)setBtnCanvasEnterType:(int)arg1;
- (int)btnCanvasSource;
- (void)setBtnCanvasSource:(int)arg1;
- (id)weappUserName;
- (void)setWeappUserName:(id)arg1;
- (id)weappPath;
- (void)setWeappPath:(id)arg1;
- (int)miniProgramType;
- (void)setMiniProgramType:(int)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (id)phoneNumList;
- (void)setPhoneNumList:(id)arg1;
- (id)productActionBuffer;
- (void)setProductActionBuffer:(id)arg1;
- (id)productActionTitle;
- (void)setProductActionTitle:(id)arg1;
- (id)productActionIconUrl;
- (void)setProductActionIconUrl:(id)arg1;
- (id)productActionItem;
- (void)setProductActionItem:(id)arg1;
- (BOOL)hideProductActionHeader;
- (void)setHideProductActionHeader:(BOOL)arg1;
- (BOOL)showProductActionCancelButton;
- (void)setShowProductActionCancelButton:(BOOL)arg1;
- (BOOL)bCanLongPress;
- (void)setBCanLongPress:(BOOL)arg1;
- (BOOL)bHideActionSheet;
- (void)setBHideActionSheet:(BOOL)arg1;
- (id)weAppID;
- (void)setWeAppID:(id)arg1;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (id)sessionFrom;
- (void)setSessionFrom:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (BOOL)showMessageCard;
- (void)setShowMessageCard:(BOOL)arg1;
- (id)sendMessageImg;
- (void)setSendMessageImg:(id)arg1;
- (id)sendMessagePath;
- (void)setSendMessagePath:(id)arg1;
- (id)sendMessageTitle;
- (void)setSendMessageTitle:(id)arg1;
- (unsigned long long)sid;
- (void)setSid:(unsigned long long)arg1;
- (unsigned long long)compid;
- (void)setCompid:(unsigned long long)arg1;
- (id)qrUrl;
- (void)setQrUrl:(id)arg1;
- (BOOL)needUpdateQrUrl;
- (void)setNeedUpdateQrUrl:(BOOL)arg1;
- (BOOL)qrScanDirectJump;
- (void)setQrScanDirectJump:(BOOL)arg1;
- (BOOL)needRequestLBS;
- (void)setNeedRequestLBS:(BOOL)arg1;
- (id)quicklyAddBrandInfo;
- (void)setQuicklyAddBrandInfo:(id)arg1;
- (id)profileUserName;
- (void)setProfileUserName:(id)arg1;
- (id)wxGroupInfo;
- (void)setWxGroupInfo:(id)arg1;
- (int)jumpAnimationType;
- (void)setJumpAnimationType:(int)arg1;
- (id)couponAppId;
- (void)setCouponAppId:(id)arg1;
- (id)couponStockId;
- (void)setCouponStockId:(id)arg1;
- (id)couponSuccessActionInfo;
- (void)setCouponSuccessActionInfo:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderLiveNoticeId;
- (void)setFinderLiveNoticeId:(id)arg1;
- (id)finderLiveSuccessBtnTitle;
- (void)setFinderLiveSuccessBtnTitle:(id)arg1;
- (id)finderLiveFinishTitle;
- (void)setFinderLiveFinishTitle:(id)arg1;
- (unsigned int)finderLiveStartTime;
- (void)setFinderLiveStartTime:(unsigned int)arg1;
- (BOOL)isSimpleFinderLiveNotice;
- (void)setIsSimpleFinderLiveNotice:(BOOL)arg1;
- (id)finderFeedInfo;
- (void)setFinderFeedInfo:(id)arg1;
- (id)emotionProductId;
- (void)setEmotionProductId:(id)arg1;
- (id)customerServiceUrl;
- (void)setCustomerServiceUrl:(id)arg1;
- (id)appointmentInfo;
- (void)setAppointmentInfo:(id)arg1;
- (id)finderFollowInfo;
- (void)setFinderFollowInfo:(id)arg1;
- (id)combineFollowInfo;
- (void)setCombineFollowInfo:(id)arg1;
- (id)redPacketCoverInfo;
- (void)setRedPacketCoverInfo:(id)arg1;
- (id)doubleLinkH5Url;
- (void)setDoubleLinkH5Url:(id)arg1;
- (BOOL)isJumpInHalfScreenStyle;
- (void)setIsJumpInHalfScreenStyle:(BOOL)arg1;
- (BOOL)autoJump;
- (void)setAutoJump:(BOOL)arg1;
- (id)statePublishInfo;
- (void)setStatePublishInfo:(id)arg1;
- (id)actionOnSuccess;
- (void)setActionOnSuccess:(id)arg1;
- (void).cxx_destruct;
@end
