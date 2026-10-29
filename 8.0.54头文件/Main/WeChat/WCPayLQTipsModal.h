@interface WCPayLQTipsModal : UIView
{
    BOOL _isShowing; // +0x8
    id <WCPayLQTipsModalDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
    NSArray * _contents; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _descLabel; // +0x38
    UIView * _contentsView; // +0x40
    UIButton * _confirmBtn; // +0x48
    UIView * _backgroundView; // +0x50
}
- (id)initWithTitle:(id)arg1 desc:(id)arg2 contents:(id)arg3;
- (void)updateWithTitle:(id)arg1 desc:(id)arg2 contents:(id)arg3;
- (void)layoutSubviews;
- (void)updateView;
- (void)showInView;
- (void)dissmissView;
- (void)onTapConfirmBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)contents;
- (void)setContents:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)contentsView;
- (void)setContentsView:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (void).cxx_destruct;
@end

