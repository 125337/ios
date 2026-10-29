@interface MMWebViewMpInfoModel : NSObject
{
    BOOL _hasItemShowType; // +0x8
    BOOL _isPaySubcribe; // +0x9
    BOOL _isTopBarShow; // +0xa
    BOOL _showSourceInfo; // +0xb
    BOOL _enableReadArticle; // +0xc
    BOOL _disableShowFinderLiveTopBar; // +0xd
    BOOL _hasFinderElement; // +0xe
    BOOL _isShowMenuBrandInfo; // +0xf
    BOOL _isDisableMenuHeader; // +0x10
    unsigned int _msgId; // +0x14
    unsigned int _itemIdx; // +0x18
    unsigned int _itemShowType; // +0x1c
    NSString * _brandIconUrl; // +0x20
    NSString * _brandName; // +0x28
    NSString * _brandUserName; // +0x30
    NSString * _pageTitle; // +0x38
    NSString * _pageCover; // +0x40
    NSString * _pageCustomSnapShotBase64Str; // +0x48
    NSString * _bizId; // +0x50
    MMWebViewMpInfoModelVideoInfo * _videoInfo; // +0x58
}
- (BOOL)isProfileModelDataValid;
- (id)mpPageCommonId;
- (BOOL)isMenuItemNeedHiddenInMpPage:(id)arg1;
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
- (BOOL)disableShowFinderLiveTopBar;
- (void)setDisableShowFinderLiveTopBar:(BOOL)arg1;
- (id)videoInfo;
- (void)setVideoInfo:(id)arg1;
- (BOOL)hasFinderElement;
- (void)setHasFinderElement:(BOOL)arg1;
- (BOOL)isShowMenuBrandInfo;
- (void)setIsShowMenuBrandInfo:(BOOL)arg1;
- (BOOL)isDisableMenuHeader;
- (void)setIsDisableMenuHeader:(BOOL)arg1;
- (void).cxx_destruct;
@end

