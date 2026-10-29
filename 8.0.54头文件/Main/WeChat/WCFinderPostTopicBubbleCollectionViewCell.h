@interface WCFinderPostTopicBubbleCollectionViewCell : UICollectionViewCell
{
    RichTextView * _contentTextView; // +0x8
}
+ (id)getStandardRichTextView;
+ (double)getBubbleWidthWithText:(id)arg1;
+ (double)getTextViewWidthWithText:(id)arg1;
- (id)contentTextView;
- (void)updateBubbleTips:(id)arg1;
- (void)updateBubbleWithTopicInfo:(id)arg1;
- (void)setContentTextView:(id)arg1;
- (void).cxx_destruct;
@end

