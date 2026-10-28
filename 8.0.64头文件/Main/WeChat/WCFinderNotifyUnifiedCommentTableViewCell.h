@interface WCFinderNotifyUnifiedCommentTableViewCell : WCFinderNotifyUnifiedTableViewCell
{
    RichTextView * _contentTextView; // +0x8
    MMUIButton * _commentDeleteLabel; // +0x10
    WCFinderNotifyAttachDisplayView * _displayAttachmentView; // +0x18
    CGPoint _beginTouchPoint; // +0x20
}
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)forbidHightLightCell;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)commentDeleteLabel;
- (void)setCommentDeleteLabel:(id)arg1;
- (id)displayAttachmentView;
- (void)setDisplayAttachmentView:(id)arg1;
- (CGPoint)beginTouchPoint;
- (void)setBeginTouchPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end
