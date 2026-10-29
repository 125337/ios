@interface MMBGMSelectedOptionalConfig : NSObject
{
    BOOL _notShowSearchBar; // +0x8
    BOOL _notShowOstOnButton; // +0x9
    BOOL _notShowLyricOnButton; // +0xa
    BOOL _notCallDelegateOnManualSetMusicButton; // +0xb
    BOOL _shouldHightlightSearchQuery; // +0xc
    BOOL _enablesResetResearchViewOnEnter; // +0xd
    BOOL _shouldShowSecondCutPromotionEntry; // +0xe
    BOOL _shouldShowMusicCategoryPanel; // +0xf
    unsigned long long _preferDuration; // +0x10
    NSMutableArray * _imagesDataArray; // +0x18
    MMBGMAssetClassfyResult * _assetClassfyResult; // +0x20
    unsigned long long _shouldHideTabBar; // +0x28
    unsigned long long _cellType; // +0x30
    unsigned long long _targetType; // +0x38
    NSMutableArray * _assertItems; // +0x40
}
- (BOOL)shouldShowMusicCategoryPanel;
- (unsigned long long)preferDuration;
- (void)setPreferDuration:(unsigned long long)arg1;
- (id)imagesDataArray;
- (void)setImagesDataArray:(id)arg1;
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
- (unsigned long long)shouldHideTabBar;
- (void)setShouldHideTabBar:(unsigned long long)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (BOOL)shouldHightlightSearchQuery;
- (void)setShouldHightlightSearchQuery:(BOOL)arg1;
- (BOOL)enablesResetResearchViewOnEnter;
- (void)setEnablesResetResearchViewOnEnter:(BOOL)arg1;
- (unsigned long long)targetType;
- (void)setTargetType:(unsigned long long)arg1;
- (id)assertItems;
- (void)setAssertItems:(id)arg1;
- (BOOL)shouldShowSecondCutPromotionEntry;
- (void)setShouldShowSecondCutPromotionEntry:(BOOL)arg1;
- (void)setShouldShowMusicCategoryPanel:(BOOL)arg1;
- (void).cxx_destruct;
@end

