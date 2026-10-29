@interface WCFinderPostingCommentFailTableViewCell : UITableViewCell
{
    BOOL _isInDarkMode; // +0x8
    id <WCFinderPostingCommentFailTableViewCellDelegate> _delegate; // +0x10
    UIButton * _backGroundButton; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (void)clickButtonAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isInDarkMode;
- (void)setIsInDarkMode:(BOOL)arg1;
- (id)backGroundButton;
- (void)setBackGroundButton:(id)arg1;
- (void).cxx_destruct;
@end
