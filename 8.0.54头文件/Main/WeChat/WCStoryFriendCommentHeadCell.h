@interface WCStoryFriendCommentHeadCell : UITableViewCell <UIGestureRecognizerDelegate>
{
    id <WCStoryFriendCommmentHeadCellDelegate> _delegate; // +0x8
    WCStoryComment * _comment; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMCPLabel * _userNameLabel; // +0x20
    RichTextView * _commentView; // +0x28
    UIView * _separateLine; // +0x30
}
+ (double)heightForComment:(id)arg1;
+ (unsigned long long)getRichTextViewParserType;
+ (id)getRichTextViewFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateUI;
- (void)setup;
- (void)setupSubviews;
- (void)setupGesture;
- (id)getUserLabelText;
- (void)onContentViewDidClick;
- (void)onHeadViewDidClick;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setComment:(id)arg1;
- (id)userNameLabel;
- (id)headImageView;
- (id)commentView;
- (id)separateLine;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)comment;
- (void)setHeadImageView:(id)arg1;
- (void)setUserNameLabel:(id)arg1;
- (void)setCommentView:(id)arg1;
- (void)setSeparateLine:(id)arg1;
- (void).cxx_destruct;
@end

