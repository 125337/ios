@interface WCFinderMemberShipSearchResultCell : UITableViewCell
{
    WCFinderFeedContentTextView * _textView; // +0x8
    MMWebImageView * _coverImgView; // +0x10
    UILabel * _nameLabel; // +0x18
    WCFinderDetailTimeStringConfig * _timeStringConfig; // +0x20
    UILabel * _descLabel; // +0x28
    UIView * _separatorView; // +0x30
}
+ (double)getHorizontalPadding;
- (void)updateWithSearchInfo:(id)arg1;
- (id)textView;
- (id)coverImgView;
- (id)nameLabel;
- (id)descLabel;
- (id)timeStringConfig;
- (id)separatorView;
- (void)setTextView:(id)arg1;
- (void)setCoverImgView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setTimeStringConfig:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void).cxx_destruct;
@end
