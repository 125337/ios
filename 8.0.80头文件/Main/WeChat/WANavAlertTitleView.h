@interface WANavAlertTitleView : UIView
{
    id <WANavAlertTitleViewDelegate> _delegate; // +0x8
    UIImageView * _alertIconView; // +0x10
    UILabel * _alertLabel; // +0x18
    UIButton * _entryBtn; // +0x20
    NSString * _waName; // +0x28
    NSString * _alertTitle; // +0x30
    UIColor * _normalColor; // +0x38
    UIColor * _highlightColor; // +0x40
    UIImage * _normalIcon; // +0x48
    UIImage * _highlightIcon; // +0x50
}
- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)updateAlertTitle:(id)arg1;
- (void)updateEntryBtnWithWeAppName:(id)arg1;
- (BOOL)shouldShowEntry;
- (void)alert;
- (void)beginHighlight;
- (void)endHighlight;
- (void)onEntryBtnClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)alertIconView;
- (void)setAlertIconView:(id)arg1;
- (id)alertLabel;
- (void)setAlertLabel:(id)arg1;
- (id)entryBtn;
- (void)setEntryBtn:(id)arg1;
- (id)waName;
- (void)setWaName:(id)arg1;
- (id)alertTitle;
- (void)setAlertTitle:(id)arg1;
- (id)normalColor;
- (void)setNormalColor:(id)arg1;
- (id)highlightColor;
- (void)setHighlightColor:(id)arg1;
- (id)normalIcon;
- (void)setNormalIcon:(id)arg1;
- (id)highlightIcon;
- (void)setHighlightIcon:(id)arg1;
- (void).cxx_destruct;
@end
