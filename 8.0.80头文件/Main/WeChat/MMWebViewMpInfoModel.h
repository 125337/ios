@interface MMWebViewMpInfoModel : NSObject
{
    BOOL _enableShareImageWatermark; // +0x8
    BOOL _hasScene; // +0x9
    BOOL _hasSubScene; // +0xa
    BOOL _hasItemShowType; // +0xb
    BOOL _isPaySubcribe; // +0xc
    BOOL _isTopBarShow; // +0xd
    BOOL _showSourceInfo; // +0xe
    BOOL _enableReadArticle; // +0xf
    BOOL _sendArticleReadingBtnClicked; // +0x10
    BOOL _disableShowFinderLiveTopBar; // +0x11
    BOOL _enableForwardMP; // +0x12
    BOOL _enableFrontShareImg; // +0x13
    BOOL _hasFinderElement; // +0x14
    BOOL _isShowMenuBrandInfo; // +0x15
    BOOL _isDisableMenuHeader; // +0x16
    BOOL _showCustomFontScale; // +0x17
    unsigned int _watermarkType; // +0x18
    unsigned int _msgId; // +0x1c
    unsigned int _itemIdx; // +0x20
    unsigned int _scene; // +0x24
    unsigned int _subScene; // +0x28
    unsigned int _itemShowType; // +0x2c
    unsigned int _brandServiceType; // +0x30
    unsigned int _landingTabId; // +0x34
    NSString * _brandIconUrl; // +0x38
    NSString * _brandName; // +0x40
    NSString * _brandUserName; // +0x48
    NSString * _pageTitle; // +0x50
    NSString * _pageCover; // +0x58
    NSString * _coverPicImageUrl; // +0x60
    double _coverPicWidth; // +0x68
    double _coverPicHeight; // +0x70
    long long _picCount; // +0x78
    NSString * _pageCustomSnapShotBase64Str; // +0x80
    NSString * _alias; // +0x88
    NSDictionary * _shareImageWatermarkParams; // +0x90
    NSString * _recentReadUrl; // +0x98
    NSString * _underlineUrl; // +0xa0
    NSString * _bizId; // +0xa8
    long long _sessionId; // +0xb0
    long long _enterId; // +0xb8
    long long _view; // +0xc0
    MMWebViewMpInfoModelVideoInfo * _videoInfo; // +0xc8
    NSArray * _negativeFeedbackReason; // +0xd0
    NSString * _negativeFeedbackTitle; // +0xd8
}
- (BOOL)isProfileModelDataValid;
- (id)mpPageCommonId;
- (BOOL)isMenuItemNeedHiddenInMpPage:(id)arg1;
- (BOOL)isForwardMPEnabled;
- (BOOL)isUsePageCoverInHistoryRec;
- (id)brandIconUrl;
- (void)setBrandIconUrl:(id)arg1;
- (id)brandName;
- (void)setBrandName:(id)arg1;
- (id)brandUserName;
- (void)setBrandUserName:(id)arg1;
- (id)pageTitle;
- (void)setPageTitle:(id)arg1;
- (id)pageCover;
- (void)setPageCover:(id)arg1;
- (id)coverPicImageUrl;
- (void)setCoverPicImageUrl:(id)arg1;
- (double)coverPicWidth;
- (void)setCoverPicWidth:(double)arg1;
- (double)coverPicHeight;
- (void)setCoverPicHeight:(double)arg1;
- (long long)picCount;
- (void)setPicCount:(long long)arg1;
- (id)pageCustomSnapShotBase64Str;
- (void)setPageCustomSnapShotBase64Str:(id)arg1;
- (unsigned int)watermarkType;
- (void)setWatermarkType:(unsigned int)arg1;
- (id)alias;
- (void)setAlias:(id)arg1;
- (BOOL)enableShareImageWatermark;
- (void)setEnableShareImageWatermark:(BOOL)arg1;
- (id)shareImageWatermarkParams;
- (void)setShareImageWatermarkParams:(id)arg1;
- (id)recentReadUrl;
- (void)setRecentReadUrl:(id)arg1;
- (id)underlineUrl;
- (void)setUnderlineUrl:(id)arg1;
- (id)bizId;
- (void)setBizId:(id)arg1;
- (unsigned int)msgId;
- (void)setMsgId:(unsigned int)arg1;
- (unsigned int)itemIdx;
- (void)setItemIdx:(unsigned int)arg1;
- (BOOL)hasScene;
- (void)setHasScene:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)hasSubScene;
- (void)setHasSubScene:(BOOL)arg1;
- (unsigned int)subScene;
- (void)setSubScene:(unsigned int)arg1;
- (long long)sessionId;
- (void)setSessionId:(long long)arg1;
- (long long)enterId;
- (void)setEnterId:(long long)arg1;
- (long long)view;
- (void)setView:(long long)arg1;
- (BOOL)hasItemShowType;
- (void)setHasItemShowType:(BOOL)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (BOOL)isPaySubcribe;
- (void)setIsPaySubcribe:(BOOL)arg1;
- (BOOL)isTopBarShow;
- (void)setIsTopBarShow:(BOOL)arg1;
- (BOOL)showSourceInfo;
- (void)setShowSourceInfo:(BOOL)arg1;
- (BOOL)enableReadArticle;
- (void)setEnableReadArticle:(BOOL)arg1;
- (BOOL)sendArticleReadingBtnClicked;
- (void)setSendArticleReadingBtnClicked:(BOOL)arg1;
- (BOOL)disableShowFinderLiveTopBar;
- (void)setDisableShowFinderLiveTopBar:(BOOL)arg1;
- (BOOL)enableForwardMP;
- (void)setEnableForwardMP:(BOOL)arg1;
- (BOOL)enableFrontShareImg;
- (void)setEnableFrontShareImg:(BOOL)arg1;
- (id)videoInfo;
- (void)setVideoInfo:(id)arg1;
- (BOOL)hasFinderElement;
- (void)setHasFinderElement:(BOOL)arg1;
- (BOOL)isShowMenuBrandInfo;
- (void)setIsShowMenuBrandInfo:(BOOL)arg1;
- (BOOL)isDisableMenuHeader;
- (void)setIsDisableMenuHeader:(BOOL)arg1;
- (BOOL)showCustomFontScale;
- (void)setShowCustomFontScale:(BOOL)arg1;
- (unsigned int)brandServiceType;
- (void)setBrandServiceType:(unsigned int)arg1;
- (unsigned int)landingTabId;
- (void)setLandingTabId:(unsigned int)arg1;
- (id)negativeFeedbackReason;
- (void)setNegativeFeedbackReason:(id)arg1;
- (id)negativeFeedbackTitle;
- (void)setNegativeFeedbackTitle:(id)arg1;
- (void).cxx_destruct;
@end
