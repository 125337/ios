@interface MMFinderLiveFeedStreamBarrageItem : NSObject
{
    BOOL _stoppedByUser; // +0x8
    NSString * _text; // +0x10
    MMLiveCommentDataItem * _commentDataItem; // +0x18
    double _barrageContainerWidth; // +0x20
    MMFinderLiveFeedStreamBarrageItemTextView * _textView; // +0x28
    double _barrageMoveDuration; // +0x30
}
+ (id)itemWithInfo:(id)arg1;
- (double)getBarrageMoveDurationWithConfig:(id)arg1;
- (double)getBarrageMoveSpeedWithWidth:(double)arg1 config:(id)arg2;
- (id)text;
- (void)setText:(id)arg1;
- (id)commentDataItem;
- (void)setCommentDataItem:(id)arg1;
- (BOOL)stoppedByUser;
- (void)setStoppedByUser:(BOOL)arg1;
- (double)barrageContainerWidth;
- (void)setBarrageContainerWidth:(double)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (double)barrageMoveDuration;
- (void)setBarrageMoveDuration:(double)arg1;
- (void).cxx_destruct;
@end
