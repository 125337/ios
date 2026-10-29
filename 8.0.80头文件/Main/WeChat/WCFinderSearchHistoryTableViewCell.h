@interface WCFinderSearchHistoryTableViewCell : UITableViewCell
{
    id <WCFinderSearchHistoryTableViewCellDelegate> _delegate; // +0x8
    FavAttributeCPLabel * _tipsLabel; // +0x10
    WCFinderSearchSuggestion * _record; // +0x18
    UIImageView * _leftImageView; // +0x20
    UIImageView * _rightImageView; // +0x28
    UIView * _bottomLine; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)rightImageTapAction:(id)arg1;
- (void)prepareForReuse;
- (void)updateWithSearchRecord:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)record;
- (void)setRecord:(id)arg1;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg1;
- (id)rightImageView;
- (void)setRightImageView:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
