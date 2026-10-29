@interface WCFinderNotifyExpandFooterView : UITableViewHeaderFooterView
{
    id /* block */ _expandActionBlock; // +0x8
    UILabel * _tipsLabel; // +0x10
    MMUIButton * _expandButton; // +0x18
}
+ (double)cellHeight;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id /* block */)expandActionBlock;
- (void)setExpandActionBlock:(id /* block */)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (void).cxx_destruct;
@end

