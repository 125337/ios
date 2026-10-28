@interface MMFinderLiveBulletinViewController : MMCPUIViewController <MMGrowTextViewDelegate, WCActionSheetDelegate, MMFinderLiveCreateNoticeViewControllerDelegate, WCFinderUserPrepareCgiDelegate, UITextViewDelegate>
{
    BOOL _isFromThemeGuide; // +0x70
    BOOL _isEdit; // +0x71
    BOOL _isBeingLayouted; // +0x72
    BOOL _enableDescExtend; // +0x73
    unsigned long long _scene; // +0x78
    NSString * _descriptionExtend; // +0x80
    NSString * _descriptionStr; // +0x88
    NSString * _placeHolderStr; // +0x90
    NSString * _aiAssistantInfoId; // +0x98
    id <MMFinderLiveBulletinViewControllerDelegate> _actionDelegate; // +0xa0
    MMFinderLiveTask * _liveTask; // +0xa8
    MMUIButton * _singleCloseButton; // +0xb0
    UIView * _bottomToolBar; // +0xb8
    NSArray * _bottomButtonArray; // +0xc0
    double _keyboardHeight; // +0xc8
    UIView * _noticeContainer; // +0xd0
    WCFinderCreateLiveViewModel * _createLiveVM; // +0xd8
    FinderNewUserPrepareResponse * _prepareResponse; // +0xe0
    MMUILabel * _titleLabel; // +0xe8
    UIButton * _leftButton; // +0xf0
    UIButton * _rightButton; // +0xf8
    MMGrowTextView * _growTextView; // +0x100
    UILabel * _titleCountTips; // +0x108
    UIView * _separateLineUnderDesc; // +0x110
    MMGrowTextView * _descriptionTextView; // +0x118
    UILabel * _descCountTips; // +0x120
    UILabel * _wordCountTips; // +0x128
}
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)preferredStatusBarStyle;
- (long long)overrideUserInterfaceStyle;
- (id)initWithTask:(id)arg1 enableDescExtend:(BOOL)arg2 descriptionStr:(id)arg3 descriptionExtend:(id)arg4 aiAssistantInfoId:(id)arg5;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)titleLabel;
- (void)dealloc;
- (void)updateRightDoneButton;
- (id)growTextView;
- (id)separateLineUnderDesc;
- (id)descriptionTextView;
- (void)fixTopicText:(BOOL)arg1 openMaxLines:(BOOL)arg2;
- (void)fixTitleText:(BOOL)arg1;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (id)descCountTips;
- (id)titleCountTips;
- (id)wordCountTips;
- (double)getTopButtonsTop;
- (double)getTextViewTop;
- (BOOL)isPortrait;
- (void)layoutSubviewsAnimated:(BOOL)arg1;
- (double)maxDescriptionTextViewHeight;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTapDone;
- (void)processBulletinData;
- (void)finishWithInfo:(id)arg1;
- (void)onTapCancel;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)initBottomView;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)isFromThemeGuide;
- (void)setIsFromThemeGuide:(BOOL)arg1;
- (BOOL)isEdit;
- (void)setIsEdit:(BOOL)arg1;
- (id)descriptionExtend;
- (void)setDescriptionExtend:(id)arg1;
- (id)descriptionStr;
- (void)setDescriptionStr:(id)arg1;
- (id)placeHolderStr;
- (void)setPlaceHolderStr:(id)arg1;
- (id)aiAssistantInfoId;
- (void)setAiAssistantInfoId:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)singleCloseButton;
- (void)setSingleCloseButton:(id)arg1;
- (id)bottomToolBar;
- (void)setBottomToolBar:(id)arg1;
- (id)bottomButtonArray;
- (void)setBottomButtonArray:(id)arg1;
- (BOOL)isBeingLayouted;
- (void)setIsBeingLayouted:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)noticeContainer;
- (void)setNoticeContainer:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (id)prepareResponse;
- (void)setPrepareResponse:(id)arg1;
- (BOOL)enableDescExtend;
- (void)setEnableDescExtend:(BOOL)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (void)setGrowTextView:(id)arg1;
- (void)setTitleCountTips:(id)arg1;
- (void)setSeparateLineUnderDesc:(id)arg1;
- (void)setDescriptionTextView:(id)arg1;
- (void)setDescCountTips:(id)arg1;
- (void)setWordCountTips:(id)arg1;
- (void).cxx_destruct;
@end
