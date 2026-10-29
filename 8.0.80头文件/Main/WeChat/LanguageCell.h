@interface LanguageCell : UITableViewCell
{
    UILabel * _cnLabel; // +0x8
    UILabel * _enLabel; // +0x10
    UIImageView * _checkmarkView; // +0x18
    UIView * _backgroundView; // +0x20
    UIView * _bottomLine; // +0x28
    BOOL _isTopItem; // +0x30
    BOOL _isBottomItem; // +0x31
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithModel:(id)arg1 selected:(BOOL)arg2 isTop:(BOOL)arg3 isBottom:(BOOL)arg4 enHidden:(BOOL)arg5;
- (void).cxx_destruct;
@end
