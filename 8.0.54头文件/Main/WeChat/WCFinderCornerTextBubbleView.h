@interface WCFinderCornerTextBubbleView : MMUIView
{
    RichTextView * _richTextView; // +0x8
}
+ (id)genRichTextViewByWidth:(double)arg1;
+ (double)heightOfWidth:(double)arg1 content:(id)arg2;
+ (long long)getTextMaxLengthCountByTotalWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)richTextView;
- (void)updateWithContent:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (void).cxx_destruct;
@end

