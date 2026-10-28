@interface WCFinderFeedHighlightsItemCellView : UITableViewCell
{
    BOOL _isItemSelected; // +0x8
    WCFinderFeedHighlightItem * _highlightItem; // +0x10
    UIImageView * _iconView; // +0x18
    PAGView * _playingPagView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _descLabel; // +0x30
    UIView * _verticalLineView; // +0x38
}
+ (id)ReuseIdentifier;
+ (double)calculateHeightForText:(id)arg1 tableViewWidth:(double)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configCellWithItem:(id)arg1 isItemSelected:(BOOL)arg2;
- (void)configUI;
- (void)layoutUI;
- (id)generateTitleText;
- (id)highlightItem;
- (void)setHighlightItem:(id)arg1;
- (BOOL)isItemSelected;
- (void)setIsItemSelected:(BOOL)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)playingPagView;
- (void)setPlayingPagView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)verticalLineView;
- (void)setVerticalLineView:(id)arg1;
- (void).cxx_destruct;
@end
