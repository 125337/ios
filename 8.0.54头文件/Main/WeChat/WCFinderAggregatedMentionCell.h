@interface WCFinderAggregatedMentionCell : UITableViewCell
{
    WCFinderMention * _mention; // +0x8
    WCFinderHeadImageView * _avatarImageView; // +0x10
    RichTextView * _nicknameLabel; // +0x18
    UILabel * _timeLabel; // +0x20
    WCFinderInteractionLabelGroupView * _nicknameTailLabel; // +0x28
    WCFinderInteractionLabelGroupView * _bottomInteractLabel; // +0x30
    UIView * _separatorLine; // +0x38
    double _layoutWidth; // +0x40
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)updateWithMention:(id)arg1;
- (id)getDisplayNameWithUsername:(id)arg1 nickName:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)nicknameMinWidth;
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
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end

