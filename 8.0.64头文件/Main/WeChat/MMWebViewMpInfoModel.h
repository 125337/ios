@interface MMWebViewMpInfoModel : NSObject
{
    BOOL _enableShareImageWatermark; // +0x8
    BOOL _hasItemShowType; // +0x9
    BOOL _isPaySubcribe; // +0xa
    BOOL _isTopBarShow; // +0xb
    BOOL _showSourceInfo; // +0xc
    BOOL _enableReadArticle; // +0xd
    BOOL _sendArticleReadingBtnClicked; // +0xe
    BOOL _disableShowFinderLiveTopBar; // +0xf
    BOOL _enableForwardMP; // +0x10
    BOOL _hasFinderElement; // +0x11
    BOOL _isShowMenuBrandInfo; // +0x12
    BOOL _isDisableMenuHeader; // +0x13
    unsigned int _watermarkType; // +0x14
    unsigned int _msgId; // +0x18
    unsigned int _itemIdx; // +0x1c
    unsigned int _itemShowType; // +0x20
    unsigned int _brandServiceType; // +0x24
    unsigned int _landingTabId; // +0x28
    NSString * _brandIconUrl; // +0x30
    NSString * _brandName; // +0x38
    NSString * _brandUserName; // +0x40
    NSString * _pageTitle; // +0x48
    NSString * _pageCover; // +0x50
    NSString * _pageCustomSnapShotBase64Str; // +0x58
    NSString * _alias; // +0x60
    NSDictionary * _shareImageWatermarkParams; // +0x68
    NSString * _recentReadUrl; // +0x70
    NSString * _underlineUrl; // +0x78
    NSString * _bizId; // +0x80
    MMWebViewMpInfoModelVideoInfo * _videoInfo; // +0x88
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
- (id)videoInfo;
- (void)setVideoInfo:(id)arg1;
- (BOOL)hasFinderElement;
- (void)setHasFinderElement:(BOOL)arg1;
- (BOOL)isShowMenuBrandInfo;
- (void)setIsShowMenuBrandInfo:(BOOL)arg1;
- (BOOL)isDisableMenuHeader;
- (void)setIsDisableMenuHeader:(BOOL)arg1;
- (unsigned int)brandServiceType;
- (void)setBrandServiceType:(unsigned int)arg1;
- (unsigned int)landingTabId;
- (void)setLandingTabId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
