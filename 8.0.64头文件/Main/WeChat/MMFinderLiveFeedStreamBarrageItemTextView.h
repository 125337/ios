@interface MMFinderLiveFeedStreamBarrageItemTextView : UIView
{
    MMFinderLiveFeedStreamBarrageItem * _item; // +0x8
    RichTextView * _contentTextView; // +0x10
    MMFinderLiveFeedStreamBarrageStyleConfig * _styleConfig; // +0x18
}
- (id)initWithStyleConfig:(id)arg1 maxWidth:(double)arg2;
- (id)getCurrentSubTitleTextAttributeObj;
- (CGRect)presentationFrame;
- (void)updateContent:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)styleConfig;
- (void)setStyleConfig:(id)arg1;
- (void).cxx_destruct;
@end
