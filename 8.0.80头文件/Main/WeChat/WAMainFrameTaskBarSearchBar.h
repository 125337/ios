@interface WAMainFrameTaskBarSearchBar : UIView
{
    NSString * _placeHolder; // +0x8
    UIView * _backgroundView; // +0x10
    UIView * _contentView; // +0x18
    UIImageView * _searchBarImageView; // +0x20
    UILabel * _searchHintLabel; // +0x28
}
- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHintColor:(id)arg1;
- (void)setSearchBarBackgroundColor:(id)arg1;
- (void)setPlaceHolder:(id)arg1;
- (void)setSearchMagicAnimeId:(id)arg1;
- (id)placeHolder;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)searchBarImageView;
- (void)setSearchBarImageView:(id)arg1;
- (id)searchHintLabel;
- (void)setSearchHintLabel:(id)arg1;
- (void).cxx_destruct;
@end
