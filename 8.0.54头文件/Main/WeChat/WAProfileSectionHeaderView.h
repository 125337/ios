@interface WAProfileSectionHeaderView : UITableViewHeaderFooterView
{
    unsigned int _type; // +0x8
    UIButton * _contentButton; // +0x10
    UILabel * _titleLabel; // +0x18
    id <WAProfileSectionHeaderViewDelegate> _delegate; // +0x20
}
+ (double)headerHeight;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setupSubviews;
- (void)updateTitle:(id)arg1 type:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)layoutSubviewsImmediately;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

