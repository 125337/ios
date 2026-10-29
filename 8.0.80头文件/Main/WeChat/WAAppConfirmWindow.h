@interface WAAppConfirmWindow : UIView
{
    UIView * _contentView; // +0x8
    UILabel * _titleLabel; // +0x10
    UIView * _titleSplitLine; // +0x18
    UILabel * _contentLabel; // +0x20
    NSMutableArray * _itemLabels; // +0x28
    UIButton * _link; // +0x30
    UIView * _buttonSplitLine; // +0x38
    UIView * _buttonVerticalSpliteLine; // +0x40
    UIButton * _cancelButton; // +0x48
    UIButton * _confirmButton; // +0x50
    NSString * _title; // +0x58
    NSString * _content; // +0x60
    NSArray * _authItems; // +0x68
    NSString * _linkTitle; // +0x70
    id <WAAppConfirmWindowDelegate> _confirmWindowDelegate; // +0x78
}
+ (id)setupWindow:(id)arg1 title:(id)arg2 content:(id)arg3 authGroupList:(id)arg4 link:(id)arg5;
- (void)closeWindow;
- (void)initView;
- (void)layoutSubviews;
- (CGRect)contentViewFrame;
- (unsigned long long)designContentWidth;
- (double)designNoTableContentHeightToContentWidthRatio;
- (id)titleText;
- (void)onClickButtonConfirm:(id)arg1;
- (void)onClickButtonCancel:(id)arg1;
- (void)onLinkClicked:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)authItems;
- (void)setAuthItems:(id)arg1;
- (id)linkTitle;
- (void)setLinkTitle:(id)arg1;
- (id)confirmWindowDelegate;
- (void)setConfirmWindowDelegate:(id)arg1;
- (void).cxx_destruct;
@end
