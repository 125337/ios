@interface MMFinderLiveSensitiveTableView : MMTableView
{
    BOOL _keepContentOffsetForFoldSearchHeader; // +0x39
}
- (void)setContentOffset:(CGPoint)arg1;
- (CGPoint)foldedHeaderContentOffset;
- (BOOL)keepContentOffsetForFoldSearchHeader;
- (void)setKeepContentOffsetForFoldSearchHeader:(BOOL)arg1;
@end

