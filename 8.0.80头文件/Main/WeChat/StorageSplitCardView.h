@interface StorageSplitCardView : UIView
{
    id <StorageSplitCardViewDelegate> _delegate; // +0x8
    UIView * _backgroundView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subTitleLabel; // +0x20
    UIButton * _actionButton; // +0x28
    unsigned long long _viewType; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 viewType:(unsigned long long)arg2;
- (void)setupSubview;
- (void)layoutSubviews;
- (void)layout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onManageResourceClick;
- (void)onManageChatLogClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (unsigned long long)viewType;
- (void)setViewType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
