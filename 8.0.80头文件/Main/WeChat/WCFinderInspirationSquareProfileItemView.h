@interface WCFinderInspirationSquareProfileItemView : MMUIButton
{
    UILabel * _playItemTitleLabel; // +0x8
    UILabel * _playItemSubTitleLabel; // +0x10
    UIImageView * _coverImageView; // +0x18
    FinderPostPlay * _playItem; // +0x20
}
+ (id)itemViewWithDataItem:(id)arg1;
- (void)setUpDataItem:(id)arg1;
- (void)setUpUI;
- (void)updateItem:(id)arg1;
- (void)layoutSubviews;
- (id)playItemTitleLabel;
- (void)setPlayItemTitleLabel:(id)arg1;
- (id)playItemSubTitleLabel;
- (void)setPlayItemSubTitleLabel:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)playItem;
- (void)setPlayItem:(id)arg1;
- (void).cxx_destruct;
@end
