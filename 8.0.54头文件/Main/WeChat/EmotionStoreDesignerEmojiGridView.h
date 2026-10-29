@interface EmotionStoreDesignerEmojiGridView : MMImageGridView
{
    NSArray * m_designerEmojiCells; // +0x48
    long long m_numOfItemInOneLine; // +0x50
    id <EmotionStoreDesignerEmojiGridViewDelegate> _delegate; // +0x58
    NSArray * _emojiInfos; // +0x60
    long long _maxLineNum; // +0x68
    long long _maxNumOfEmojiToShow; // +0x70
}
+ (id)configEmojiCell:(id)arg1;
+ (void)calNumOfItemInOneLine:(long long *)arg1 ItemSideLen:(double *)arg2 ForTotalWidth:(double)arg3;
- (void)setEmojiInfos:(id)arg1;
- (void)adjustForWidth:(double)arg1;
- (void)useDefaultSettingForDesignerProfile;
- (void)configDesignerEmojiCellsForEmojis:(id)arg1;
- (void)adjustSubviewsForTotalWidth:(double)arg1;
- (void)onEmojiCellClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)emojiInfos;
- (long long)maxLineNum;
- (void)setMaxLineNum:(long long)arg1;
- (long long)maxNumOfEmojiToShow;
- (void)setMaxNumOfEmojiToShow:(long long)arg1;
- (void).cxx_destruct;
@end

