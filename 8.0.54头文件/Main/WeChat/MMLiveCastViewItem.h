@interface MMLiveCastViewItem : NSObject
{
    BOOL _isLoading; // +0x8
    BOOL _showsTopSeparatorLine; // +0x9
    BOOL _showsBottomSeparatorLine; // +0xa
    NSString * _title; // +0x10
    id /* block */ _didSelectBlock; // +0x18
}
- (void)didSelect;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)showsTopSeparatorLine;
- (void)setShowsTopSeparatorLine:(BOOL)arg1;
- (BOOL)showsBottomSeparatorLine;
- (void)setShowsBottomSeparatorLine:(BOOL)arg1;
- (id /* block */)didSelectBlock;
- (void)setDidSelectBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

