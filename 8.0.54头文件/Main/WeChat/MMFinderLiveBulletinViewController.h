@interface MMFinderLiveBulletinViewController : MMCPUIViewController <MMGrowTextViewDelegate, WCActionSheetDelegate, MMFinderLiveCreateNoticeViewControllerDelegate, WCFinderUserPrepareCgiDelegate, UITextViewDelegate>
{
    BOOL _isFromThemeGuide; // +0x68
    BOOL _isEdit; // +0x69
    BOOL _showNotice; // +0x6a
    BOOL _isBeingLayouted; // +0x6b
    BOOL _enableDescExtend; // +0x6c
    unsigned long long _scene; // +0x70
    NSString * _descriptionExtend; // +0x78
    NSString * _descriptionStr; // +0x80
    NSString * _defaultImage; // +0x88
    NSString * _placeHolderStr; // +0x90
    id <MMFinderLiveBulletinViewControllerDelegate> _actionDelegate; // +0x98
    MMFinderLiveTask * _liveTask; // +0xa0
    UIImage * _bulletinImage; // +0xa8
    MMWebImageView * _bulletinImageView; // +0xb0
    MMUIButton * _singleCloseButton; // +0xb8
    UIView * _bottomToolBar; // +0xc0
    NSArray * _bottomButtonArray; // +0xc8
    double _keyboardHeight; // +0xd0
    UIView * _noticeContainer; // +0xd8
    WCFinderCreateLiveViewModel * _createLiveVM; // +0xe0
    FinderNewUserPrepareResponse * _prepareResponse; // +0xe8
    MMUILabel * _titleLabel; // +0xf0
    UIButton * _leftButton; // +0xf8
    UIButton * _rightButton; // +0x100
    MMGrowTextView * _growTextView; // +0x108
    UILabel * _titleCountTips; // +0x110
    UIView * _separateLineUnderDesc; // +0x118
    MMGrowTextView * _descriptionTextView; // +0x120
    UILabel * _descCountTips; // +0x128
    UILabel * _wordCountTips; // +0x130
}
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)preferredStatusBarStyle;
- (long long)overrideUserInterfaceStyle;
- (id)initWithTask:(id)arg1 enableDescExtend:(BOOL)arg2 descriptionStr:(id)arg3 descriptionExtend:(id)arg4;
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
- (void)updateImageView;
- (id)descCountTips;
- (id)titleCountTips;
- (id)wordCountTips;
- (void)onSingleCloseButton:(id)arg1;
- (void)onNoticeCloseButton:(id)arg1;
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
- (void)processBulletinData:(id)arg1;
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
- (BOOL)showNotice;
- (void)setShowNotice:(BOOL)arg1;
- (id)descriptionExtend;
- (void)setDescriptionExtend:(id)arg1;
- (id)descriptionStr;
- (void)setDescriptionStr:(id)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (id)placeHolderStr;
- (void)setPlaceHolderStr:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)bulletinImage;
- (void)setBulletinImage:(id)arg1;
- (id)bulletinImageView;
- (void)setBulletinImageView:(id)arg1;
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

