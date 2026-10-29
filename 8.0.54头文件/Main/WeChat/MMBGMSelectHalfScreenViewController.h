@interface MMBGMSelectHalfScreenViewController : MMPageSheetBaseViewController <MMBGMSelectedViewDelegate>
{
    BOOL _isShowingInView; // +0x68
    BOOL _useIphoneUIStyleInIpad; // +0x69
    id <MMBGMSelectHalfScreenViewControllerDelegate> _delegate; // +0x70
    NSMutableArray * _tabModels; // +0x78
    MMBGMPanelPublishContext * _publishContext; // +0x80
    unsigned long long _entranceType; // +0x88
    UIColor * _maskBackgroundColor; // +0x90
    MMBGMSelectedView * _musicView; // +0x98
    MMBGMSelectedConfig * _config; // +0xa0
}
- (id)initWithTabModel:(id)arg1 config:(id)arg2;
- (void)viewDidLoad;
- (BOOL)isMusicOn;
- (BOOL)isOriginSoundSelected;
- (BOOL)isLyricOn;
- (void)manualSetMusicOn:(BOOL)arg1;
- (void)manualSetOstOn:(BOOL)arg1;
- (void)manualSetLyricOn:(BOOL)arg1;
- (void)addMusicData:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)findAndSetMusicPlaying:(id)arg1;
- (id)genMusicSelectedResult;
- (id)currentMusicData;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)setBgmViewShow;
- (unsigned long long)currentSelectedTabIndex;
- (void)selectMusicAtTabIndex:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)setAllCellUnSelected;
- (void)switchToTabIndex:(unsigned long long)arg1;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)bgmSelectedViewDidSelectedMusic:(id)arg1 atTabIndex:(unsigned long long)arg2 index:(unsigned long long)arg3 isTriggerByTap:(BOOL)arg4;
- (id)bgmSelectedView:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3 tabIndex:(unsigned long long)arg4;
- (void)bgmSelectedView:(id)arg1 willShowMusic:(id)arg2 tabIndex:(unsigned long long)arg3 musicIndex:(unsigned long long)arg4;
- (void)bgmSelectedViewDidClickSearchBar:(id)arg1;
- (void)bgmSelectedView:(id)arg1 didSearchWithKey:(id)arg2;
- (void)bgmSelectedViewDidClickMusicOnBtn:(BOOL)arg1;
- (void)bgmSelectedViewDidClickLyricOnBtn:(BOOL)arg1;
- (void)bgmSelectedViewDidClickOstOnBtn:(BOOL)arg1;
- (void)bgmSelectedViewDidCloseSearchView:(id)arg1 latestSelectedMusic:(id)arg2;
- (id)getSecondCutPromotionMaskView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isShowingInView;
- (void)setIsShowingInView:(BOOL)arg1;
- (id)tabModels;
- (void)setTabModels:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (id)maskBackgroundColor;
- (void)setMaskBackgroundColor:(id)arg1;
- (BOOL)useIphoneUIStyleInIpad;
- (void)setUseIphoneUIStyleInIpad:(BOOL)arg1;
- (id)musicView;
- (void)setMusicView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

