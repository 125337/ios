@interface WCFinderSearchContactCell : UITableViewCell
{
    id <WCFinderSearchContactCellDelegate> _delegate; // +0x8
    WCFinderSearchInfo * _searchInfo; // +0x10
    WCFinderSearchContactCellContentView * _cellContentView; // +0x18
}
+ (double)cellHeightWith:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubview;
- (void)prepareForReuse;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(BOOL)arg2 shouldHideFollow:(BOOL)arg3 useRoundHeader:(BOOL)arg4;
- (void)updateUIWith:(id)arg1 params:(id)arg2;
- (id)getAttributeText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchInfo;
- (void)setSearchInfo:(id)arg1;
- (id)cellContentView;
- (void)setCellContentView:(id)arg1;
- (void).cxx_destruct;
@end

