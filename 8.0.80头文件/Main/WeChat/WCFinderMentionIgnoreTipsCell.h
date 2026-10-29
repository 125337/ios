@interface WCFinderMentionIgnoreTipsCell : UITableViewCell
{
    id /* block */ _closeAction; // +0x8
    UIView * _tipsContainer; // +0x10
    UILabel * _tipsLabel; // +0x18
    MMUIButton * _closeBtn; // +0x20
}
+ (double)heightWithWidth:(double)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (id)tipsContainer;
- (void)setTipsContainer:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (void).cxx_destruct;
@end
