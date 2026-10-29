@interface MMListCellSeparatorConfig : NSObject
{
    long long _displayMode; // +0x8
    double _separateLineLeftInset; // +0x10
    double _separateLineRightInset; // +0x18
}
- (id)init;
- (long long)displayMode;
- (void)setDisplayMode:(long long)arg1;
- (double)separateLineLeftInset;
- (void)setSeparateLineLeftInset:(double)arg1;
- (double)separateLineRightInset;
- (void)setSeparateLineRightInset:(double)arg1;
@end
