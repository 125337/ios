@interface WCFinderOriginalEduActionSheet : MMPageSheetBaseViewController <ILinkEventExt, MMCommonActionSheetPickerDelegate>
{
    BOOL _agreementSelect; // +0x70
    BOOL _isLoadingOriginal; // +0x71
    BOOL _shouldShowInterests; // +0x72
    BOOL _showRewardTips; // +0x73
    int _commentScene; // +0x74
    id <WCFinderOriginalEduActionSheetDelegate> _originalDelegate; // +0x78
    NSString * _fromFeedId; // +0x80
    unsigned long long _sourcePageType; // +0x88
    NSArray * _originalItems; // +0x90
    unsigned long long _buttonStyle; // +0x98
    id /* block */ _clickDirectPostBlock; // +0xa0
    id /* block */ _clickDeclarePostBlock; // +0xa8
    id /* block */ _clickStopPromptBlock; // +0xb0
    id /* block */ _needSecondConfirmBlock; // +0xb8
    UIView * _contentContainer; // +0xc0
    MMUIButton * _agreementCheckbox; // +0xc8
    MMUIButton * _acceptBtn; // +0xd0
    FinderOriginalTypeItem * _selectedOriginal; // +0xd8
    MMCommonActionSheetPicker * _startTimePicker; // +0xe0
    unsigned long long _type; // +0xe8
    UILabel * _originalTrailingLabel; // +0xf0
    WCFinderAnimationLoadingView * _loadingView; // +0xf8
    UIView * _typeButton; // +0x100
}
- (id)initWithShowRewardTips:(BOOL)arg1;
- (id)initWithShowRewardTips:(BOOL)arg1 type:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (double)pageSheetContentHeight;
- (void)setupSubviews;
- (void)updateAcceptBtnBkg;
- (void)setAgreementSelect:(BOOL)arg1;
- (void)onCheckBoxClicked:(id)arg1;
- (void)onClickAcceptBtn;
- (id)currentOriginalDesc;
- (void)updateOriginalTrailingLabel:(id)arg1;
- (void)onClickDirectPostBtn;
- (void)onClickStopPromptBtn;
- (void)onClickLearnMoreBtn;
- (void)onClickOriginTypeButton;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)bind25496ReportFromSetView:(id)arg1;
- (id)originalDelegate;
- (void)setOriginalDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)fromFeedId;
- (void)setFromFeedId:(id)arg1;
- (unsigned long long)sourcePageType;
- (void)setSourcePageType:(unsigned long long)arg1;
- (BOOL)agreementSelect;
- (id)originalItems;
- (void)setOriginalItems:(id)arg1;
- (BOOL)isLoadingOriginal;
- (void)setIsLoadingOriginal:(BOOL)arg1;
- (BOOL)shouldShowInterests;
- (void)setShouldShowInterests:(BOOL)arg1;
- (unsigned long long)buttonStyle;
- (void)setButtonStyle:(unsigned long long)arg1;
- (id /* block */)clickDirectPostBlock;
- (void)setClickDirectPostBlock:(id /* block */)arg1;
- (id /* block */)clickDeclarePostBlock;
- (void)setClickDeclarePostBlock:(id /* block */)arg1;
- (id /* block */)clickStopPromptBlock;
- (void)setClickStopPromptBlock:(id /* block */)arg1;
- (id /* block */)needSecondConfirmBlock;
- (void)setNeedSecondConfirmBlock:(id /* block */)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)agreementCheckbox;
- (void)setAgreementCheckbox:(id)arg1;
- (id)acceptBtn;
- (void)setAcceptBtn:(id)arg1;
- (id)selectedOriginal;
- (void)setSelectedOriginal:(id)arg1;
- (id)startTimePicker;
- (void)setStartTimePicker:(id)arg1;
- (BOOL)showRewardTips;
- (void)setShowRewardTips:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)originalTrailingLabel;
- (void)setOriginalTrailingLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)typeButton;
- (void)setTypeButton:(id)arg1;
- (void).cxx_destruct;
@end
