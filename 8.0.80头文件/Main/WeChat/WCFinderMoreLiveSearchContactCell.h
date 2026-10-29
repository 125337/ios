@interface WCFinderMoreLiveSearchContactCell : UITableViewCell
{
    id <WCFinderMoreLiveSearchContactCellDelegate> _delegate; // +0x8
    WCFinderSearchInfo * _searchInfo; // +0x10
    WCFinderSearchContactCellContentView * _cellContentView; // +0x18
}
+ (double)cellHeightWith:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubview;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(BOOL)arg2 shouldHideFollow:(BOOL)arg3 useRoundHeader:(BOOL)arg4;
- (id)getAttributeText:(id)arg1;
- (id)cellContentView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchInfo;
- (void)setSearchInfo:(id)arg1;
- (void)setCellContentView:(id)arg1;
- (void).cxx_destruct;
@end
