@interface WCPayTransferDelayOptionView : WCPayNavigationView
{
    unsigned int _selected; // +0x8
    id <WCPayTransferDelayOptionViewDelegate> _m_delegate; // +0x10
    NSArray * _options; // +0x18
    WCPayCss * _css; // +0x20
    UIView * _baseView; // +0x28
    UIView * _container; // +0x30
    UILabel * _titleLabel; // +0x38
    UIView * _lineView; // +0x40
    UIView * _cellContainer; // +0x48
    UIView * _bottomContainer; // +0x50
    UIButton * _cancelButton; // +0x58
    UIButton * _confirmButton; // +0x60
    NSString * _title; // +0x68
    NSString * _desc; // +0x70
    UILabel * _descLabel; // +0x78
}
- (id)initWithTitle:(id)arg1 desc:(id)arg2;
- (void)updateDelayOption:(id)arg1 selected:(unsigned int)arg2;
- (void)updateSubView;
- (void)layoutSubviews;
- (void)onTapEmpty;
- (void)updateBaseView;
- (void)updateContainer;
- (void)maskPanel;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)udpateLineView;
- (void)updateCellContainer;
- (void)onTapCell:(id)arg1;
- (void)updateCell:(id)arg1 selected:(unsigned int)arg2;
- (void)updateBottomContainer;
- (void)updateCancelButton;
- (void)updateConfirmButton;
- (void)onTapCancel;
- (void)onTapConfirm;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (unsigned int)selected;
- (void)setSelected:(unsigned int)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)cellContainer;
- (void)setCellContainer:(id)arg1;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

