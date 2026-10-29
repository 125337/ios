@interface MMBGMSelectedOptionalConfig : NSObject
{
    BOOL _notShowSearchBar; // +0x8
    BOOL _notShowOstOnButton; // +0x9
    BOOL _notShowLyricOnButton; // +0xa
    BOOL _notCallDelegateOnManualSetMusicButton; // +0xb
    BOOL _shouldShowVolumeButton; // +0xc
    BOOL _enablesResetResearchViewOnEnter; // +0xd
    BOOL _shouldShowSecondCutPromotionEntry; // +0xe
    BOOL _adaptsDuoPublishingPanel; // +0xf
    BOOL _adaptsDuoHostGeometry; // +0x10
    BOOL _hideBottomBar; // +0x11
    BOOL _canSearchFinderFeed; // +0x12
    BOOL _showEditMusicButton; // +0x13
    BOOL _shouldEnableFavAndRecent; // +0x14
    BOOL _shouldUseNewNonMusicBottomIcon; // +0x15
    int _finderBgmListAssetType; // +0x18
    unsigned int _finderBgmListPicNum; // +0x1c
    unsigned long long _preferDuration; // +0x20
    NSMutableArray * _imagesDataArray; // +0x28
    MMBGMAssetClassfyResult * _assetClassfyResult; // +0x30
    unsigned long long _shouldHideTabBar; // +0x38
    unsigned long long _cellType; // +0x40
    unsigned long long _targetType; // +0x48
    NSMutableArray * _assertItems; // +0x50
    double _customPanelHeight; // +0x58
    unsigned long long _focusTabIndex; // +0x60
    MMBGMSelectedLocalImportConfig * _localImportConfig; // +0x68
    NSString * _recommendPrompt; // +0x70
}
+ (double)panelHeightForFinder;
- (id)init;
- (int)effectiveFinderBgmListAssetType;
- (unsigned int)effectiveFinderBgmListPicNum;
- (unsigned long long)preferDuration;
- (void)setPreferDuration:(unsigned long long)arg1;
- (id)imagesDataArray;
- (void)setImagesDataArray:(id)arg1;
- (int)finderBgmListAssetType;
- (void)setFinderBgmListAssetType:(int)arg1;
- (unsigned int)finderBgmListPicNum;
- (void)setFinderBgmListPicNum:(unsigned int)arg1;
- (id)assetClassfyResult;
- (void)setAssetClassfyResult:(id)arg1;
- (BOOL)notShowSearchBar;
- (void)setNotShowSearchBar:(BOOL)arg1;
- (BOOL)notShowOstOnButton;
- (void)setNotShowOstOnButton:(BOOL)arg1;
- (BOOL)notShowLyricOnButton;
- (void)setNotShowLyricOnButton:(BOOL)arg1;
- (BOOL)notCallDelegateOnManualSetMusicButton;
- (void)setNotCallDelegateOnManualSetMusicButton:(BOOL)arg1;
- (BOOL)shouldShowVolumeButton;
- (void)setShouldShowVolumeButton:(BOOL)arg1;
- (unsigned long long)shouldHideTabBar;
- (void)setShouldHideTabBar:(unsigned long long)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (BOOL)enablesResetResearchViewOnEnter;
- (void)setEnablesResetResearchViewOnEnter:(BOOL)arg1;
- (unsigned long long)targetType;
- (void)setTargetType:(unsigned long long)arg1;
- (id)assertItems;
- (void)setAssertItems:(id)arg1;
- (BOOL)shouldShowSecondCutPromotionEntry;
- (void)setShouldShowSecondCutPromotionEntry:(BOOL)arg1;
- (double)customPanelHeight;
- (void)setCustomPanelHeight:(double)arg1;
- (BOOL)adaptsDuoPublishingPanel;
- (void)setAdaptsDuoPublishingPanel:(BOOL)arg1;
- (BOOL)adaptsDuoHostGeometry;
- (void)setAdaptsDuoHostGeometry:(BOOL)arg1;
- (BOOL)hideBottomBar;
- (void)setHideBottomBar:(BOOL)arg1;
- (unsigned long long)focusTabIndex;
- (void)setFocusTabIndex:(unsigned long long)arg1;
- (BOOL)canSearchFinderFeed;
- (void)setCanSearchFinderFeed:(BOOL)arg1;
- (BOOL)showEditMusicButton;
- (void)setShowEditMusicButton:(BOOL)arg1;
- (BOOL)shouldEnableFavAndRecent;
- (void)setShouldEnableFavAndRecent:(BOOL)arg1;
- (id)localImportConfig;
- (void)setLocalImportConfig:(id)arg1;
- (BOOL)shouldUseNewNonMusicBottomIcon;
- (void)setShouldUseNewNonMusicBottomIcon:(BOOL)arg1;
- (id)recommendPrompt;
- (void)setRecommendPrompt:(id)arg1;
- (void).cxx_destruct;
@end
