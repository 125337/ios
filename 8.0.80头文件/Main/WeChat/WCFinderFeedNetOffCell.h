@interface WCFinderFeedNetOffCell : WCFinderTableViewCell <WCFinderFocusCellProtocol>
{
    id <WCFinderFeedNetOffCellDelegate> _delegate; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    UIScrollView * _contentScrollView; // +0x18
    CAGradientLayer * _bottomGradientLayer; // +0x20
    UIImageView * _downloadIconView; // +0x28
    UILabel * _mainTitleView; // +0x30
    UIView * _descView; // +0x38
    MMUIButton * _increaseButton; // +0x40
    MMUIButton * _cancelButton; // +0x48
    MMUIButton * _settingButton; // +0x50
}
+ (id)increaseSelectConfig;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateWithContentVM:(id)arg1;
- (void)layoutUI;
- (void)cellStartExposeReportAction;
- (void)onIncreaseButtonDidClick;
- (void)onCancelButtonDidClick;
- (void)onSettingButtonDidClick;
- (id)reportDict;
- (id)contentScrollView;
- (id)bottomGradientLayer;
- (id)downloadIconView;
- (id)mainTitleView;
- (id)descView;
- (id)genDescLabelWithText:(id)arg1;
- (id)increaseButton;
- (id)cancelButton;
- (id)settingButton;
- (BOOL)shouldCaluculateAsFocusCell;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void)setContentScrollView:(id)arg1;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setDownloadIconView:(id)arg1;
- (void)setMainTitleView:(id)arg1;
- (void)setDescView:(id)arg1;
- (void)setIncreaseButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setSettingButton:(id)arg1;
- (void).cxx_destruct;
@end
