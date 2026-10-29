@interface MMFinderLiveFeedStreamBarrageItemComboLiveRewardView : MMFinderLiveFeedStreamBarrageItemView
{
    RichTextView * _contentTextView; // +0x8
    MMWebImageView * _giftImageView; // +0x10
    RichTextView * _giftCntTextView; // +0x18
}
- (id)initWithStyleConfig:(id)arg1 maxWidth:(double)arg2;
- (void)updateStyleWithContent:(id)arg1 imgUrl:(id)arg2 cnt:(unsigned long long)arg3;
- (id)getCurrentSubTitleTextAttributeObj;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)giftImageView;
- (void)setGiftImageView:(id)arg1;
- (id)giftCntTextView;
- (void)setGiftCntTextView:(id)arg1;
- (void).cxx_destruct;
@end
