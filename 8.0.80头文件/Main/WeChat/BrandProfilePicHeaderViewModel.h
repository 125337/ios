@interface BrandProfilePicHeaderViewModel : BrandProfileMsgBaseViewModel
{
    BOOL _shouldShowAllEntry; // +0x10
    unsigned int _allPicCount; // +0x14
}
- (id)tableViewCellClassName;
- (double)cellHeight;
- (id)displayTitle;
- (unsigned int)allPicCount;
- (void)setAllPicCount:(unsigned int)arg1;
- (BOOL)shouldShowAllEntry;
- (void)setShouldShowAllEntry:(BOOL)arg1;
@end
