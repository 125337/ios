@interface SessionSelectListCell : ContactMultiSelectCell
{
    BOOL _showsBottomSeparator; // +0x8
}
- (void)layoutSubviews;
- (BOOL)showsBottomSeparator;
- (void)setShowsBottomSeparator:(BOOL)arg1;
@end
