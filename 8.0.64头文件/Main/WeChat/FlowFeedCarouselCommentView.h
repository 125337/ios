@interface FlowFeedCarouselCommentView : UIView
{
    MMLiveFlowFeedCarouselCommentItem * _comment; // +0x8
    RichTextView * _textLabel; // +0x10
}
+ (double)rowHeight:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupWithComment:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)layoutSubviews;
- (double)calTextWidth:(id)arg1;
- (id)calculateDisplayContent;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
