@interface WCFinderCreateEventViewController : MMUIViewController <MMImageCropperDelegate, UITextViewDelegate, ILinkEventExt>
{
    id <WCFinderCreateEvenDelegate> _delegate; // +0x70
    WCFinderEventModel * _event; // +0x78
    UIImage * _choosedImage; // +0x80
    UIScrollView * _scrollView; // +0x88
    UIButton * _confirmButton; // +0x90
    MMWebImageView * _backgroundImageView; // +0x98
    CAGradientLayer * _gradientLayer; // +0xa0
    MMTextView * _activityNameTextView; // +0xa8
    MMTextView * _activityDescTextView; // +0xb0
    UIButton * _timeButton; // +0xb8
    UIView * _contentView; // +0xc0
    UIDatePicker * _datePicker; // +0xc8
    UIView * _dateActionSheet; // +0xd0
    UIView * _transparentView; // +0xd8
    MMWebImageView * _headImageView; // +0xe0
    UILabel * _nameLabel; // +0xe8
    UIView * _nameBackground; // +0xf0
    UIView * _descBackground; // +0xf8
    UILabel * _nameCountLabel; // +0x100
    UILabel * _descCountLabel; // +0x108
    UIButton * _imageButton; // +0x110
    RichTextView * _statementView; // +0x118
    MMUIButton * _agreetButton; // +0x120
    UIView * _agreetView; // +0x128
}
- (id)initWithEvent:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (void)layoutViews;
- (void)layoutComponents;
- (void)showReadOnly;
- (void)updateNoAlubm;
- (void)updateAlbum;
- (void)scrollToEditZone;
- (void)updateConfirmButtonStatus;
- (void)updatePostWarning;
- (void)OnCancel;
- (void)OnReturn;
- (void)postEvent:(id)arg1;
- (void)onDelAlbum;
- (void)onChooseImage;
- (void)onShowAlbumActionSheet;
- (void)onNameEdit;
- (void)onDescEdit;
- (void)onEndEditing;
- (void)onShowActionSheet;
- (void)onHideActionSheet;
- (void)onDateChanged;
- (void)onAgreementCheckBoxClick;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)showError:(id)arg1;
- (BOOL)canCreateEvent;
- (BOOL)eventInfoRequired;
- (id)endDateStr;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)scrollView;
- (id)confirmButton;
- (id)activityNameTextView;
- (id)activityDescTextView;
- (id)timeButton;
- (id)backgroundImageView;
- (id)statementView;
- (id)agreetButton;
- (id)agreetView;
- (id)dateActionSheet;
- (id)transparentView;
- (id)nameCountLabel;
- (id)descCountLabel;
- (id)imageButton;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (id)choosedImage;
- (void)setChoosedImage:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void)setActivityNameTextView:(id)arg1;
- (void)setActivityDescTextView:(id)arg1;
- (void)setTimeButton:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)datePicker;
- (void)setDatePicker:(id)arg1;
- (void)setDateActionSheet:(id)arg1;
- (void)setTransparentView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)nameBackground;
- (void)setNameBackground:(id)arg1;
- (id)descBackground;
- (void)setDescBackground:(id)arg1;
- (void)setNameCountLabel:(id)arg1;
- (void)setDescCountLabel:(id)arg1;
- (void)setImageButton:(id)arg1;
- (void)setStatementView:(id)arg1;
- (void)setAgreetButton:(id)arg1;
- (void)setAgreetView:(id)arg1;
- (void).cxx_destruct;
@end
