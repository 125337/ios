@interface WCFinderNotifyUnifiedLikeTableViewCell : WCFinderNotifyUnifiedTableViewCell
{
    UIImageView * _likeImageView; // +0x8
    WCFinderSizingRichTextView * _contentTextView; // +0x10
}
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (id)likeImageView;
- (void)setLikeImageView:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (void).cxx_destruct;
@end
