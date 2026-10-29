@interface MMFinderLiveCreateNoticeViewController : MMUIViewController <MMCommonActionSheetPickerDelegate, UITextViewDelegate, textViewDelegate, LiveNoticeModReminderViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, MMLiveCreateNoticeTimingOptionsCollectionViewCellDelegate, MMFinderLiveNoticeDetailsPreviewDelegate>
{
    BOOL _inAdaptedPageSheet; // +0x68
    BOOL _ready; // +0x69
    BOOL _noticeTimed; // +0x6a
    BOOL _bindToCoupons; // +0x6b
    BOOL _untimedNoticeAvailable; // +0x6c
    BOOL _untimedNoticeCreationEnabled; // +0x6d
    BOOL _enableDescExtend; // +0x6e
    int _triggerType; // +0x70
    id <MMFinderLiveCreateNoticeViewControllerDelegate> _delegate; // +0x78
    WCFinderContact * _finderContact; // +0x80
    WCFinderCreateLiveViewModel * _createLiveVM; // +0x88
    MMFinderLiveCreateNoticeReporter * _reporter; // +0x90
    NSString * _descriptionPromptWording; // +0x98
    long long _srcScene; // +0xa0
    id /* block */ _prepareCompletionBlock; // +0xa8
    NSDate * _startTime; // +0xb0
    NSDate * _untimedNoticeExpirationTime; // +0xb8
    NSArray * _couponsStockIDs; // +0xc0
    UIView * _scrollContainerView; // +0xc8
    UIScrollView * _scrollContentView; // +0xd0
    MMLiveScrollGradientMaskingView * _scrollMaskingView; // +0xd8
    UIGestureRecognizer * _backgroundViewGestureRecognizer; // +0xe0
    double _keyboardHeight; // +0xe8
    MMUIActivityIndicatorView * _prepareIndicatorView; // +0xf0
    MMFinderHeaderInfoView * _headerInfoView; // +0xf8
    UICollectionViewFlowLayout * _timingOptionsCollectionViewLayout; // +0x100
    UICollectionView * _timingOptionsCollectionView; // +0x108
    UIView * _timedStartTimeView; // +0x110
    UILabel * _startTimeTitleLabel; // +0x118
    UILabel * _startTimeLabel; // +0x120
    UIImageView * _startTimeArrowView; // +0x128
    NSDateFormatter * _timedOptionTodayDescriptionFormatter; // +0x130
    NSDateFormatter * _timedOptionTomorrowDescriptionFormatter; // +0x138
    NSDateFormatter * _timedOptionDayAfterTomorrowDescriptionFormatter; // +0x140
    NSDateFormatter * _timedOptionGenericDescriptionFormatter; // +0x148
    NSDateFormatter * _timedOptionGenericLongDescriptionFormatter; // +0x150
    NSDateFormatter * _untimedOptionDescriptionFormatter; // +0x158
    UILabel * _timingOptionsDescriptionLabel; // +0x160
    MMCommonActionSheetPicker * _startTimePicker; // +0x168
    MMCommonActionSheetPicker * _specificTimePicker; // +0x170
    UIView * _topicView; // +0x178
    UIView * _topicGestureContainer; // +0x180
    UIView * _shortTopicGestureContainer; // +0x188
    UIView * _seperatorLine; // +0x190
    MMTextView * _topicTextView; // +0x198
    MMTextView * _shortTopicTextView; // +0x1a0
    UILabel * _topicCharacterNumberLabel; // +0x1a8
    UILabel * _shortTopicCharacterNumberLabel; // +0x1b0
    UIGestureRecognizer * _topicViewGestureRecognizer; // +0x1b8
    UIGestureRecognizer * _shortTopicViewGestureRecognizer; // +0x1c0
    UIButton * _createButton; // +0x1c8
    MMUIButton * _tipsButton; // +0x1d0
    UIView * _bindToCouponsView; // +0x1d8
    UIView * _bindToCouponsSwitch; // +0x1e0
    UIView * _bindToCouponsTitle; // +0x1e8
    UIView * _chooseCouponsView; // +0x1f0
    UIView * _couponsViewsLine; // +0x1f8
    UIView * _chooseCouponsTitle; // +0x200
    UILabel * _chosenCouponName; // +0x208
    UIImageView * _chooseCouponsArrowView; // +0x210
    UIView * _couponsViewsBottomLine; // +0x218
    UIView * _bottomContentView; // +0x220
    MMFInderLiveCreateNoticeSelectModeView * _selectModeView; // +0x228
    MMFinderLiveNoticeModReminderView * _modReminderView; // +0x230
    MMFinderLiveNoticeShowReminderBottomView * _reminderBottomView; // +0x238
    MMUIView * _functionView; // +0x240
    NSMutableArray * _functionViewArray; // +0x248
    MMFinderLiveNoticeDetailChooseView * _timeModView; // +0x250
    FinderNewUserPrepareResponse * _userPrepareResponse; // +0x258
    MMFinderLiveModNoticeView * _modNoticeView; // +0x260
}
+ (id)adaptedPageSheetWithFinderContact:(id)arg1 createLiveVM:(id)arg2 defaultsToUntimedNotice:(BOOL)arg3 src:(long long)arg4 reporter:(id)arg5;
- (id)initWithFinderContact:(id)arg1 createLiveVM:(id)arg2 defaultsToUntimedNotice:(BOOL)arg3 src:(long long)arg4 reporter:(id)arg5;
- (void)dealloc;
- (void)prepareWithCompletionBlock:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)setUserPrepareResponse:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadNavigationItems;
- (id)navigationBarBackgroundColor;
- (void)setNoticeTimed:(BOOL)arg1;
- (void)setReady:(BOOL)arg1;
- (void)setUntimedNoticeAvailable:(BOOL)arg1;
- (void)setUntimedNoticeCreationEnabled:(BOOL)arg1;
- (void)loadContentView;
- (void)loadViewsDependOnPrepare;
- (void)loadFunctionView;
- (void)loadSelectModeView;
- (void)updateCreateButtonEnable;
- (void)updateUIForSelectModeChanged;
- (void)loadBottomContentView;
- (void)loadReminderBottomView;
- (void)loadBindToCouponsView;
- (void)chooseCoupons;
- (void)setBindToCoupons:(BOOL)arg1;
- (void)loadHeaderInfoView;
- (void)loadTimeModView;
- (void)loadStartTimeView;
- (void)loadTopicView;
- (void)loadEnableDescExtendTopicView;
- (void)loadTipsButton;
- (void)loadCreateButton;
- (void)layoutContentView;
- (void)layoutFunctionViewSubView;
- (void)layoutHeaderInfoView;
- (void)layoutTimeModView;
- (void)layoutStartTimeView;
- (void)setDescriptionPromptWording:(id)arg1;
- (void)layoutTopicView;
- (void)layoutEnableDescExtendTopicView;
- (void)updateStartTimeLabel;
- (void)fixTopicText:(BOOL)arg1;
- (void)fixShortTopicText:(BOOL)arg1;
- (void)fixTopicText:(BOOL)arg1 textView:(id)arg2 maxLength:(unsigned int)arg3 maxLineCount:(unsigned int)arg4 characterNumberLabel:(id)arg5;
- (id)stringByRemovingMultipleEmptyLinesInString:(id)arg1;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (id)stringByRemovingOverflowedLinesInString:(id)arg1 limitedLineCount:(unsigned long long)arg2;
- (void)letShortTopicTextViewBecomeFirstResponder;
- (void)letTopicTextViewBecomeFirstResponder;
- (void)letShortTopicTextViewResignFirstResponder;
- (void)letTopicTextViewResignFirstResponder;
- (void)letAllTextViewResignFirstResponder;
- (id)createTimerPicker;
- (void)showStartTimePicker;
- (void)showTodayStartTimePicker;
- (void)dismissStartTimePicker;
- (void)dismissSpecificTimePicker;
- (void)dismisAllTimePicker;
- (void)startPreviewNotice;
- (void)startCreateNoticeWithCompletion:(id /* block */)arg1;
- (void)didFinishCreateNoticeWithInfo:(id)arg1;
- (void)didFinishCreateExtentedNoticeWithInfo:(id)arg1;
- (void)didFailToCreateLiveNoticeWithErrorCode:(long long)arg1 errorMessage:(id)arg2;
- (void)didCancelCreateNotice;
- (void)cancelBarButtonItemClicked:(id)arg1;
- (void)handleBackgroundViewGestureRecognizer:(id)arg1;
- (void)handleStartTimeViewGestureRecognizer:(id)arg1;
- (void)handleTopicViewGestureRecognizer:(id)arg1;
- (void)handleTimeModClick;
- (void)createButtonClicked:(id)arg1;
- (void)tipsButtonClicked:(id)arg1;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)commonPickerDismissed:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (BOOL)supportsMember;
- (void)onModReminderViewSelectWithLiveNoticeInfo:(id)arg1 selectType:(int)arg2;
- (void)reminderBottomViewClick;
- (id)functionViewArray;
- (BOOL)isLiveThemeReminderSwitchOpen;
- (BOOL)useCompactLayout;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onDescriptionActionInvokedOnCreateNoticeTimingOptionCell:(id)arg1;
- (id)timedOptionDescriptionForDate:(id)arg1;
- (void)onPreviewCreateNoticeWithCompletion:(id /* block */)arg1;
- (void)onPreviewCreateNoticeFinished:(id)arg1;
- (BOOL)shouldShowPreview;
- (BOOL)isModRole;
- (void)loadModData;
- (void)handleModNotice;
- (void)modNotice:(id)arg1;
- (id)genNewNoticeInfo;
- (unsigned long long)getModifyFieldFlag:(id)arg1;
- (id)modNoticeView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)descriptionPromptWording;
- (long long)srcScene;
- (void)setSrcScene:(long long)arg1;
- (BOOL)inAdaptedPageSheet;
- (void)setInAdaptedPageSheet:(BOOL)arg1;
- (BOOL)ready;
- (id /* block */)prepareCompletionBlock;
- (void)setPrepareCompletionBlock:(id /* block */)arg1;
- (id)startTime;
- (void)setStartTime:(id)arg1;
- (id)untimedNoticeExpirationTime;
- (void)setUntimedNoticeExpirationTime:(id)arg1;
- (id)couponsStockIDs;
- (void)setCouponsStockIDs:(id)arg1;
- (id)scrollContainerView;
- (void)setScrollContainerView:(id)arg1;
- (id)scrollContentView;
- (void)setScrollContentView:(id)arg1;
- (id)scrollMaskingView;
- (void)setScrollMaskingView:(id)arg1;
- (id)backgroundViewGestureRecognizer;
- (void)setBackgroundViewGestureRecognizer:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)prepareIndicatorView;
- (void)setPrepareIndicatorView:(id)arg1;
- (id)headerInfoView;
- (void)setHeaderInfoView:(id)arg1;
- (BOOL)noticeTimed;
- (id)timingOptionsCollectionViewLayout;
- (void)setTimingOptionsCollectionViewLayout:(id)arg1;
- (id)timingOptionsCollectionView;
- (void)setTimingOptionsCollectionView:(id)arg1;
- (id)timedStartTimeView;
- (void)setTimedStartTimeView:(id)arg1;
- (id)startTimeTitleLabel;
- (void)setStartTimeTitleLabel:(id)arg1;
- (id)startTimeLabel;
- (void)setStartTimeLabel:(id)arg1;
- (id)startTimeArrowView;
- (void)setStartTimeArrowView:(id)arg1;
- (id)timedOptionTodayDescriptionFormatter;
- (void)setTimedOptionTodayDescriptionFormatter:(id)arg1;
- (id)timedOptionTomorrowDescriptionFormatter;
- (void)setTimedOptionTomorrowDescriptionFormatter:(id)arg1;
- (id)timedOptionDayAfterTomorrowDescriptionFormatter;
- (void)setTimedOptionDayAfterTomorrowDescriptionFormatter:(id)arg1;
- (id)timedOptionGenericDescriptionFormatter;
- (void)setTimedOptionGenericDescriptionFormatter:(id)arg1;
- (id)timedOptionGenericLongDescriptionFormatter;
- (void)setTimedOptionGenericLongDescriptionFormatter:(id)arg1;
- (id)untimedOptionDescriptionFormatter;
- (void)setUntimedOptionDescriptionFormatter:(id)arg1;
- (id)timingOptionsDescriptionLabel;
- (void)setTimingOptionsDescriptionLabel:(id)arg1;
- (id)startTimePicker;
- (void)setStartTimePicker:(id)arg1;
- (id)specificTimePicker;
- (void)setSpecificTimePicker:(id)arg1;
- (id)topicView;
- (void)setTopicView:(id)arg1;
- (id)topicGestureContainer;
- (void)setTopicGestureContainer:(id)arg1;
- (id)shortTopicGestureContainer;
- (void)setShortTopicGestureContainer:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)topicTextView;
- (void)setTopicTextView:(id)arg1;
- (id)shortTopicTextView;
- (void)setShortTopicTextView:(id)arg1;
- (id)topicCharacterNumberLabel;
- (void)setTopicCharacterNumberLabel:(id)arg1;
- (id)shortTopicCharacterNumberLabel;
- (void)setShortTopicCharacterNumberLabel:(id)arg1;
- (id)topicViewGestureRecognizer;
- (void)setTopicViewGestureRecognizer:(id)arg1;
- (id)shortTopicViewGestureRecognizer;
- (void)setShortTopicViewGestureRecognizer:(id)arg1;
- (id)createButton;
- (void)setCreateButton:(id)arg1;
- (id)tipsButton;
- (void)setTipsButton:(id)arg1;
- (id)bindToCouponsView;
- (void)setBindToCouponsView:(id)arg1;
- (id)bindToCouponsSwitch;
- (void)setBindToCouponsSwitch:(id)arg1;
- (id)bindToCouponsTitle;
- (void)setBindToCouponsTitle:(id)arg1;
- (id)chooseCouponsView;
- (void)setChooseCouponsView:(id)arg1;
- (id)couponsViewsLine;
- (void)setCouponsViewsLine:(id)arg1;
- (id)chooseCouponsTitle;
- (void)setChooseCouponsTitle:(id)arg1;
- (id)chosenCouponName;
- (void)setChosenCouponName:(id)arg1;
- (id)chooseCouponsArrowView;
- (void)setChooseCouponsArrowView:(id)arg1;
- (id)couponsViewsBottomLine;
- (void)setCouponsViewsBottomLine:(id)arg1;
- (id)bottomContentView;
- (void)setBottomContentView:(id)arg1;
- (id)selectModeView;
- (void)setSelectModeView:(id)arg1;
- (BOOL)bindToCoupons;
- (id)modReminderView;
- (void)setModReminderView:(id)arg1;
- (id)reminderBottomView;
- (void)setReminderBottomView:(id)arg1;
- (int)triggerType;
- (void)setTriggerType:(int)arg1;
- (id)functionView;
- (void)setFunctionView:(id)arg1;
- (void)setFunctionViewArray:(id)arg1;
- (id)timeModView;
- (void)setTimeModView:(id)arg1;
- (id)userPrepareResponse;
- (BOOL)untimedNoticeAvailable;
- (BOOL)untimedNoticeCreationEnabled;
- (void)setModNoticeView:(id)arg1;
- (BOOL)enableDescExtend;
- (void)setEnableDescExtend:(BOOL)arg1;
- (void).cxx_destruct;
@end

