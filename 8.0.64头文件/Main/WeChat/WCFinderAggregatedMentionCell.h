@interface WCFinderAggregatedMentionCell : UITableViewCell <WCFinderThanksButtonDelegate, WCFinderThanksExt>
{
    id <WCFinderAggregatedMentionCellDelegate> _delegate; // +0x8
    WCFinderMention * _mention; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
    RichTextView * _nicknameLabel; // +0x20
    UILabel * _timeLabel; // +0x28
    WCFinderInteractionLabelGroupView * _nicknameTailLabel; // +0x30
    WCFinderInteractionLabelGroupView * _bottomInteractLabel; // +0x38
    WCFinderThanksButton * _thanksButton; // +0x40
    WCFinderLikeInfo * _likeInfo; // +0x48
    UIView * _separatorLine; // +0x50
    double _layoutWidth; // +0x58
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setupUI;
- (CGRect)thanksIconFrame;
- (id)accessibilityLabel;
- (void)updateWithMention:(id)arg1;
- (void)updateThanksButtonUI;
- (id)getDisplayNameWithUsername:(id)arg1 nickName:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)nicknameMinWidth;
- (void)onThanksButtonClickedWithThanksState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (void)onThankStateChanged:(BOOL)arg1 tid:(id)arg2 username:(id)arg3 interactionType:(int)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mention;
- (void)setMention:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)nicknameTailLabel;
- (void)setNicknameTailLabel:(id)arg1;
- (id)bottomInteractLabel;
- (void)setBottomInteractLabel:(id)arg1;
- (id)thanksButton;
- (void)setThanksButton:(id)arg1;
- (id)likeInfo;
- (void)setLikeInfo:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
