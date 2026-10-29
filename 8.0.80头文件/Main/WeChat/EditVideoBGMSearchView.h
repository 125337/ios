@interface EditVideoBGMSearchView : MMUIView <EditVideoBGMSearchTagViewDelegate, EditVideoBGMSearchResultViewDelegate, EditVideoBGMPlayerDelegate, UITextFieldDelegate, MMUITextFieldDelegate, EditVideoBGMFetchFeedbackLogicDelegate, WCAudioModuleDelegate>
{
    NSString * _audioModuleIdentifier; // +0x8
    BOOL _isSearchingAfterInputEnabled; // +0x10
    BOOL _isLoadingMoreData; // +0x11
    BOOL _isNoMoreData; // +0x12
    BOOL _isLastInputModeDictation; // +0x13
    unsigned int _entranceType; // +0x14
    unsigned int _nextSearchPageOffset; // +0x18
    id <EditVideoBGMSearchViewDelegate> _delegate; // +0x20
    unsigned long long _recommentId; // +0x28
    NSMutableArray * _musicList; // +0x30
    UIView * _tapAndPanView; // +0x38
    UIView * _contentView; // +0x40
    UIView * _topBarView; // +0x48
    UIButton * _topFinishView; // +0x50
    UITextField * _textField; // +0x58
    UIView * _tagView; // +0x60
    MMUIActivityIndicatorView * _indicatorView; // +0x68
    UILabel * _tipLabel; // +0x70
    EditVideoBGMSearchResultView * _searchResultView; // +0x78
    EditVideoBGMPlayer * _bgmPlayer; // +0x80
    RecommendedMusicInfo * _selectedMusicInfo; // +0x88
    WCStoryBgmSearchCgiObj * _bgmSearchObj; // +0x90
    unsigned long long _searchId; // +0x98
    NSMutableArray * _searchResultMusicList; // +0xa0
    NSString * _searchKey; // +0xa8
    EditVideoBGMFetchFeedbackLogic * _kvReportlogic; // +0xb0
    unsigned long long _maxExposureIndex; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initData;
- (void)initView;
- (void)addTapAndPanView;
- (void)addTapGesture;
- (void)addPanGesture;
- (void)addContentView;
- (void)addTopBarView;
- (void)addTopCancelView;
- (void)addTopFinishView;
- (void)setTopFinishViewEnable:(BOOL)arg1;
- (void)addTitleView;
- (void)addSearchView;
- (id)genTextFieldRightView;
- (void)startSearchWith:(id)arg1 andResignInputField:(BOOL)arg2;
- (void)showSearchingView;
- (void)unShowSearchingView;
- (void)showNotFoundTips;
- (id)tipLabel;
- (void)proccessSearchResultWithKeyword:(id)arg1 requestId:(unsigned long long)arg2 andMusicList:(id)arg3;
- (void)proccessSearchResultMoreData:(unsigned long long)arg1 andMusicList:(id)arg2;
- (BOOL)becomeFirstResponder;
- (unsigned long long)bussId;
- (void)reportWithType:(unsigned long long)arg1;
- (void)readyToPlay;
- (void)onTap:(id)arg1;
- (void)onCancelBtnClick;
- (void)onFinishBtnClick;
- (void)onTextFieldCleanBtnClick;
- (void)onSelectTag:(id)arg1;
- (void)onSelectSearchViewClick;
- (void)onSelectSearchResult:(id)arg1 index:(unsigned long long)arg2;
- (void)onSelectSearchViewTripLoadMoreData;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldEditingChanged:(id)arg1;
- (void)mmTextFieldDidChange:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (unsigned long long)editVideoBGMFetchFeedbackLogicGetBussnessId;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)_updateAudioSession;
- (void)_activeAudioModule;
- (void)_deactiveAudioModule;
- (id)_getAudioModuleIdentifier;
- (void)_tryToUpdatePlayerToMute:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)recommentId;
- (void)setRecommentId:(unsigned long long)arg1;
- (id)musicList;
- (void)setMusicList:(id)arg1;
- (unsigned int)entranceType;
- (void)setEntranceType:(unsigned int)arg1;
- (BOOL)isSearchingAfterInputEnabled;
- (void)setIsSearchingAfterInputEnabled:(BOOL)arg1;
- (id)tapAndPanView;
- (void)setTapAndPanView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)topBarView;
- (void)setTopBarView:(id)arg1;
- (id)topFinishView;
- (void)setTopFinishView:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)tagView;
- (void)setTagView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void)setTipLabel:(id)arg1;
- (id)searchResultView;
- (void)setSearchResultView:(id)arg1;
- (id)bgmPlayer;
- (void)setBgmPlayer:(id)arg1;
- (id)selectedMusicInfo;
- (void)setSelectedMusicInfo:(id)arg1;
- (id)bgmSearchObj;
- (void)setBgmSearchObj:(id)arg1;
- (unsigned long long)searchId;
- (void)setSearchId:(unsigned long long)arg1;
- (unsigned int)nextSearchPageOffset;
- (void)setNextSearchPageOffset:(unsigned int)arg1;
- (id)searchResultMusicList;
- (void)setSearchResultMusicList:(id)arg1;
- (id)searchKey;
- (void)setSearchKey:(id)arg1;
- (BOOL)isLoadingMoreData;
- (void)setIsLoadingMoreData:(BOOL)arg1;
- (BOOL)isNoMoreData;
- (void)setIsNoMoreData:(BOOL)arg1;
- (id)kvReportlogic;
- (void)setKvReportlogic:(id)arg1;
- (unsigned long long)maxExposureIndex;
- (void)setMaxExposureIndex:(unsigned long long)arg1;
- (BOOL)isLastInputModeDictation;
- (void)setIsLastInputModeDictation:(BOOL)arg1;
- (void).cxx_destruct;
@end
