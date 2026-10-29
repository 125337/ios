@interface MMFinderLiveFeedStreamBarrageItemTextView : MMFinderLiveFeedStreamBarrageItemView
{
    RichTextView * _contentTextView; // +0x8
}
- (id)initWithStyleConfig:(id)arg1 maxWidth:(double)arg2;
- (void)updateStyleWithContent:(id)arg1;
- (id)getCurrentSubTitleTextAttributeObj;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (void).cxx_destruct;
@end
