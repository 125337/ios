@interface MMFinderLiveTableStyleAudienceSubmitOrderCommentPubbleCell : MMFinderLiveTableStyleCommentPubbleCell
{
    UIImageView * _iconView; // +0x8
    UILabel * _buttonLabel; // +0x10
}
+ (CGSize)preferSizeForCellFrame:(id)arg1;
- (id)initWithCellFrame:(id)arg1;
- (BOOL)isUITypeValid;
- (void)layoutUI;
- (void)layoutCommentLabel;
- (void)didMoveToWindow;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)buttonLabel;
- (void)setButtonLabel:(id)arg1;
- (void).cxx_destruct;
@end
