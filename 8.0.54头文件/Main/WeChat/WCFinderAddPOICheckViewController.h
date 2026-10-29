@interface WCFinderAddPOICheckViewController : MMUIViewController <ILinkEventExt, MMPickLocationViewControllerDelegate>
{
    NSString * _finderUsername; // +0x68
    UILabel * _titleLabel; // +0x70
    UILabel * _subtitleLabel; // +0x78
    UIImageView * _previewImageView; // +0x80
    MMUIButton * _checkBox; // +0x88
    RichTextView * _protoTextView; // +0x90
    UIButton * _addButton; // +0x98
    MMPickLocationViewController * _pickLocationViewController; // +0xa0
}
- (id)initWithFinderUsername:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)tapCheckBox;
- (void)updateAddButton;
- (void)tapAddButton;
- (void)showPickLocationVC;
- (void)tapBackButton;
- (void)initViews;
- (id)onGetRightBarButton;
- (void)onTapAddButton;
- (void)onCancelSeletctedLocation;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)checkBox;
- (id)protoTextView;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg1;
- (void)setCheckBox:(id)arg1;
- (void)setProtoTextView:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (id)pickLocationViewController;
- (void)setPickLocationViewController:(id)arg1;
- (void).cxx_destruct;
@end

