@interface EditVideoBGMView : MMUIView <MMMusicPickerScrollViewDelegate, UIGestureRecognizerDelegate, EditVideoBGMSearchViewDelegate, EditVideoBGMFetchFeedbackLogicDelegate>
{
    BOOL _lyricsOn; // +0x8
    BOOL _musicOn; // +0x9
    BOOL _defaultOriginalSoundMute; // +0xa
    BOOL _isSearchMusicAfterInputEnabled; // +0xb
    BOOL _isPreviewVideoMute; // +0xc
    BOOL _isLastInputModeDictation; // +0xd
    BOOL _isClickSearchMusic; // +0xe
    unsigned int _entranceType; // +0x10
    id <EditVideoBgmViewDelegate> _delegate; // +0x18
    EditVideoMusicController * _musicController; // +0x20
    ColorGradientView * _colorGradientView; // +0x28
    long long _curMusicIndex; // +0x30
    UIView * _contentView; // +0x38
    UIView * _searchBarContainer; // +0x40
    UIView * _responseView; // +0x48
    MMMusicPickerScrollView * _musicPickerView; // +0x50
    MMUIButton * _musicOnOffBtn; // +0x58
    MMUIButton * _lyricsOnOffBtn; // +0x60
    MMUIButton * _closeBtn; // +0x68
    EditVideoBGMSearchView * _searchView; // +0x70
    EditVideoBGMFetchFeedbackLogic * _fetchBgmFeedBackLogic; // +0x78
    unsigned long long _musicAddBySearchCount; // +0x80
    NSMutableArray * _searchMusicTagForAddedMusics; // +0x88
    MMUIButton * _closeButton; // +0x90
    MMUIButton * _originalSoundOnOffBtn; // +0x98
    MMUIButton * _searchBtn; // +0xa0
    NSString * _musicLogoName; // +0xa8
}
- (id)closeButton;
- (void)onClickCloseButton:(id)arg1;
- (void)triggerSelectCurIndexMusicAction;
- (void)replayFromWithStartTime:(double)arg1;
- (void)closeBGMSearchView;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 appearanceOption:(unsigned long long)arg2;
- (id)initWithFrame:(CGRect)arg1 appearanceOption:(unsigned long long)arg2 defaultOriginalSoundMute:(BOOL)arg3 musicLogoName:(id)arg4;
- (id)initWithFrame:(CGRect)arg1 appearanceOption:(unsigned long long)arg2 defaultOriginalSoundMute:(BOOL)arg3 musicLogoName:(id)arg4 entranceType:(unsigned int)arg5;
- (void)layoutSubviews;
- (void)setLyricsOn:(BOOL)arg1;
- (void)setMusicController:(id)arg1;
- (void)setMusicOn:(BOOL)arg1;
- (id)searchMusicTagForAddedMusics;
- (void)dealloc;
- (void)returnToThisView;
- (void)kvReportBgmData;
- (void)reportFetchBgmFeedback:(BOOL)arg1;
- (void)startPickMusic;
- (void)initViewWithAppearanceOptionOption:(unsigned long long)arg1;
- (void)addCloseButtonWithOption:(unsigned long long)arg1;
- (void)addContentViewWithButtonOption:(unsigned long long)arg1;
- (void)addConfigButtonsWithOption:(unsigned long long)arg1;
- (void)addBackgoundViewWithOption:(unsigned long long)arg1;
- (void)addSearchBtnWithOption:(unsigned long long)arg1;
- (void)setSearchBtnBGColor:(id)arg1;
- (void)realClearPlayer;
- (void)addMusicPickerView;
- (void)addVoiceOverResponseView;
- (id)addMusicOnOffBtn;
- (id)addOriginSoundOnOffBtn;
- (id)addLyricsOnOffBtn;
- (void)addTapGesture;
- (void)addPanGesture;
- (void)playMusic;
- (void)replayMusic;
- (void)changeMusicPlayState:(BOOL)arg1 enterSearch:(BOOL)arg2;
- (void)onSearchBtnClick:(id)arg1;
- (void)onMusicOnOffBtnClick:(id)arg1;
- (void)onOriginSoundOnOffBtnClick:(id)arg1;
- (BOOL)isOriginalSoundMute;
- (void)onLyricsOnOffBtnClick:(id)arg1;
- (BOOL)isFinderEntrance;
- (id)getBtnNormalImg;
- (id)getBtnSelectedImg;
- (void)onTap:(id)arg1;
- (id)genEditVideoBGMSelectMusicInfo;
- (void)MMMusicPickerScrollViewDidSelectMusic:(long long)arg1;
- (void)MMMusicPickerScrollViewBtnClick;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)didBecomeActive;
- (void)inputModeDidChange:(id)arg1;
- (void)onEditVideoBGMSearchViewCancel;
- (void)onEditVideoBGMSearchViewFinish:(id)arg1 searchKey:(id)arg2;
- (unsigned long long)editVideoBGMFetchFeedbackLogicGetBussnessId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLyricsOn;
- (BOOL)isMusicOn;
- (id)musicController;
- (unsigned int)entranceType;
- (void)setEntranceType:(unsigned int)arg1;
- (id)colorGradientView;
- (void)setColorGradientView:(id)arg1;
- (BOOL)defaultOriginalSoundMute;
- (void)setDefaultOriginalSoundMute:(BOOL)arg1;
- (BOOL)isSearchMusicAfterInputEnabled;
- (void)setIsSearchMusicAfterInputEnabled:(BOOL)arg1;
- (BOOL)isPreviewVideoMute;
- (void)setIsPreviewVideoMute:(BOOL)arg1;
- (long long)curMusicIndex;
- (void)setCurMusicIndex:(long long)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)searchBarContainer;
- (void)setSearchBarContainer:(id)arg1;
- (id)responseView;
- (void)setResponseView:(id)arg1;
- (id)musicPickerView;
- (void)setMusicPickerView:(id)arg1;
- (id)musicOnOffBtn;
- (void)setMusicOnOffBtn:(id)arg1;
- (id)lyricsOnOffBtn;
- (void)setLyricsOnOffBtn:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (BOOL)isLastInputModeDictation;
- (void)setIsLastInputModeDictation:(BOOL)arg1;
- (id)searchView;
- (void)setSearchView:(id)arg1;
- (id)fetchBgmFeedBackLogic;
- (void)setFetchBgmFeedBackLogic:(id)arg1;
- (BOOL)isClickSearchMusic;
- (void)setIsClickSearchMusic:(BOOL)arg1;
- (unsigned long long)musicAddBySearchCount;
- (void)setMusicAddBySearchCount:(unsigned long long)arg1;
- (void)setSearchMusicTagForAddedMusics:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (id)originalSoundOnOffBtn;
- (void)setOriginalSoundOnOffBtn:(id)arg1;
- (id)searchBtn;
- (void)setSearchBtn:(id)arg1;
- (id)musicLogoName;
- (void)setMusicLogoName:(id)arg1;
- (void).cxx_destruct;
@end

