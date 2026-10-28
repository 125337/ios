@interface WCCommentEmotionFloatView : UIButton
{
    WCDataItem * _dataItem; // +0x8
    WCUserComment * _userComment; // +0x10
    SnsEmojiInfoObj * _snsEmojiInfoObj; // +0x18
}
+ (double)getWidth;
+ (double)getHeight;
- (id)initWithFrame:(CGRect)arg1 isAbove:(BOOL)arg2 arrowX:(double)arg3 emotion:(id)arg4;
- (id)getSnsEmojiInfoObj;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)userComment;
- (void)setUserComment:(id)arg1;
- (id)snsEmojiInfoObj;
- (void)setSnsEmojiInfoObj:(id)arg1;
- (void).cxx_destruct;
@end
