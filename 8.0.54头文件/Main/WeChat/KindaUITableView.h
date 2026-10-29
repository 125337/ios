@interface KindaUITableView : WCTableView
{
    NSMutableDictionary * _heightAtIndexPath; // +0x40
    CGRect _oldRect; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)reloadData;
- (CGRect)oldRect;
- (void)setOldRect:(CGRect)arg1;
- (id)heightAtIndexPath;
- (void)setHeightAtIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

