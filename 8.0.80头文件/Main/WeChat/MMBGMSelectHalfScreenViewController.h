@interface MMBGMSelectHalfScreenViewController : MMPageSheetBaseViewController <MMBGMSelectedViewDelegate>
{
    BOOL _isShowingInView; // +0x70
    BOOL _useIphoneUIStyleInIpad; // +0x71
    id <MMBGMSelectHalfScreenViewControllerDelegate> _delegate; // +0x78
    NSMutableArray * _tabModels; // +0x80
    MMBGMPanelPublishContext * _publishContext; // +0x88
    unsigned long long _entranceType; // +0x90
    long long _snsEditSource; // +0x98
    UIColor * _maskBackgroundColor; // +0xa0
    UIView * _pageSheetWeakMaskView; // +0xa8
    UIView * _publishingPanelHostView; // +0xb0
    MMBGMSelectedView * _musicView; // +0xb8
    MMBGMSelectedConfig * _config; // +0xc0
    WeToast * _localImportLoadingToast; // +0xc8
    WCFinderDataItem * _localImportInteractedVideoDataItem; // +0xd0
}
- (BOOL)startFocusFeedCellPlaying;
- (BOOL)stopFocusFeedCellPlaying;
- (void)setLocalImportedData:(id)arg1;
- (void)importLocalMusicFromURL:(id)arg1 sourceName:(id)arg2;
- (void)importLocalMusicFromURL:(id)arg1 sourceName:(id)arg2 successToastText:(id)arg3;
- (void)importLocalMusicFromURL:(id)arg1 sourceName:(id)arg2 musicSelectSource:(unsigned long long)arg3 successToastText:(id)arg4;
- (void)showLocalImportActionSheet;
- (void)showLocalImportImportedActionSheetWithData:(id)arg1;
- (BOOL)shouldShowLocalImportTrimActionForData:(id)arg1;
- (void)editLocalImportedMusic:(id)arg1;
- (void)presentDocumentPicker;
- (void)presentInteractedVideoPicker;
- (void)prepareToPresentInteractedVideoPickerWithCompletion:(id /* block */)arg1;
- (void)presentPreparedInteractedVideoPicker;
- (void)finderFeedPickerViewControllerDidClickCancel:(id)arg1;
- (void)finderFeedPickerViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (void)notifyLocalImportInteractedVideoPickerDismissed;
- (void)importLocalMusicFromInteractedVideoDataItem:(id)arg1;
- (id)localImportDisplayTitleForInteractedVideoDataItem:(id)arg1;
- (void)clearLocalImportInteractedVideoState;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)importLocalMusicFromURL:(id)arg1 displayTitle:(id)arg2 sourceName:(id)arg3 identifierTag:(id)arg4 musicSelectSource:(unsigned long long)arg5 authorName:(id)arg6 feedId:(id)arg7 coverUrl:(id)arg8 successToastText:(id)arg9;
- (void)deliverLocalImportMusicData:(id)arg1 successToastText:(id)arg2;
- (void)showLocalImportUnsupportedToast;
- (void)showLocalImportLoadingToast;
- (void)hideLocalImportLoadingToast;
- (void)clearLocalImportedData;
- (id)localImportAudioCacheDir;
- (unsigned long long)bgmStartPlayTimeStamp;
- (void)setBgmStartPlayTimeStamp:(unsigned long long)arg1;
- (void)markBGMVCShow;
- (void)markBGMVCClose;
- (void)markBGMVCChangeMusic;
- (void)reportWithMudicData:(id)arg1 tabIndex:(unsigned long long)arg2 duration:(unsigned long long)arg3;
- (id)initWithTabModel:(id)arg1 config:(id)arg2;
- (void)viewDidLoad;
- (double)contentHeightForHostView:(id)arg1;
- (double)pageSheetContentHeight;
- (BOOL)usesDuoHostGeometry;
- (double)pageSheetContentWidth;
- (void)dealloc;
- (BOOL)isMusicOn;
- (BOOL)isOriginSoundSelected;
- (BOOL)isLyricOn;
- (void)manualSetMusicOn:(BOOL)arg1;
- (void)manualSetOstOn:(BOOL)arg1;
- (void)manualSetLyricOn:(BOOL)arg1;
- (void)refreshVolumeButtonState;
- (void)updateCurrentSelectedMusicPlaying:(BOOL)arg1;
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
- (void)selectMusicAtTabIndex:(unsigned long long)arg1 index:(unsigned long long)arg2 shouldInvokeSelectedFunc:(BOOL)arg3;
- (void)setAllCellUnSelected;
- (void)switchToTabIndex:(unsigned long long)arg1;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)addToPageSheetStack;
- (void)removeFromPageSheetStack;
- (void)bgmSelectedViewDidSelectedMusic:(id)arg1 atTabIndex:(unsigned long long)arg2 index:(unsigned long long)arg3 isTriggerByTap:(BOOL)arg4;
- (void)bgmSelectedViewDidEditMusic:(id)arg1 atTabIndex:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (id)bgmSelectedView:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3 tabIndex:(unsigned long long)arg4;
- (void)bgmSelectedView:(id)arg1 willShowMusic:(id)arg2 tabIndex:(unsigned long long)arg3 musicIndex:(unsigned long long)arg4;
- (void)bgmSelectedViewDidClickSearchBar:(id)arg1;
- (void)bgmSelectedView:(id)arg1 didSearchWithKey:(id)arg2;
- (void)bgmSelectedViewDidClickMusicOnBtn:(BOOL)arg1;
- (void)bgmSelectedViewDidClickLyricOnBtn:(BOOL)arg1;
- (void)bgmSelectedViewDidClickOstOnBtn:(BOOL)arg1;
- (void)bgmSelectedViewDidClickVolumeBtn:(id)arg1;
- (void)bgmSelectedViewDidCloseSearchView:(id)arg1 latestSelectedMusic:(id)arg2;
- (unsigned long long)bgmSelectedViewGetMaterialDuration:(id)arg1;
- (BOOL)bgmSelectedViewIsShowing:(id)arg1;
- (void)bgmSelectedViewWillStartPlayingVideo:(id)arg1;
- (void)bgmSelectedViewWillStopPlayingVideo:(id)arg1;
- (void)bgmSelectedViewDidTapLocalImport:(id)arg1;
- (void)bgmSelectedView:(id)arg1 didTapLocalImportMore:(id)arg2;
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
- (long long)snsEditSource;
- (void)setSnsEditSource:(long long)arg1;
- (id)maskBackgroundColor;
- (void)setMaskBackgroundColor:(id)arg1;
- (BOOL)useIphoneUIStyleInIpad;
- (void)setUseIphoneUIStyleInIpad:(BOOL)arg1;
- (id)pageSheetWeakMaskView;
- (void)setPageSheetWeakMaskView:(id)arg1;
- (id)publishingPanelHostView;
- (void)setPublishingPanelHostView:(id)arg1;
- (id)musicView;
- (void)setMusicView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)localImportLoadingToast;
- (void)setLocalImportLoadingToast:(id)arg1;
- (id)localImportInteractedVideoDataItem;
- (void)setLocalImportInteractedVideoDataItem:(id)arg1;
- (void).cxx_destruct;
@end
