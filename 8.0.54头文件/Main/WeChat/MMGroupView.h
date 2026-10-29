@interface MMGroupView : UIView
{
    NSMutableArray * _arrGroupViews; // +0x8
    unsigned int _groupViewDirection; // +0x10
}
- (id)init;
- (void)layoutSubviews;
- (BOOL)isAllHidden;
- (id)arrGroupViews;
- (void)setArrGroupViews:(id)arg1;
- (unsigned int)groupViewDirection;
- (void)setGroupViewDirection:(unsigned int)arg1;
- (void).cxx_destruct;
@end

