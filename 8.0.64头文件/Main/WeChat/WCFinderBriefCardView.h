@interface WCFinderBriefCardView : MMUIView
{
    MMWebImageView * _avatarView; // +0x8
    UILabel * _nameLabel; // +0x10
    RichTextView * _introTextView; // +0x18
    RichTextView * _guideTextView; // +0x20
    id /* block */ _clickAction; // +0x28
}
+ (double)cardHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithContact:(id)arg1 rightText:(id)arg2 clickAction:(id /* block */)arg3;
- (void)layoutAllSubviews;
- (id)avatarView;
- (id)nameLabel;
- (id)introTextView;
- (id)guideTextView;
- (void)setAvatarView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setIntroTextView:(id)arg1;
- (void)setGuideTextView:(id)arg1;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
