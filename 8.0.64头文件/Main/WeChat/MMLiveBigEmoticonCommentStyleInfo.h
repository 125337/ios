@interface MMLiveBigEmoticonCommentStyleInfo : NSObject
{
    BOOL _preferInlineComment; // +0x8
    BOOL _useClearBackground; // +0x9
    double _minEmotionSize; // +0x10
    double _maxEmotionSize; // +0x18
    MMLiveTaskId * _taskId; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)createStyleInfo;
- (double)minEmotionSize;
- (void)setMinEmotionSize:(double)arg1;
- (double)maxEmotionSize;
- (void)setMaxEmotionSize:(double)arg1;
- (BOOL)preferInlineComment;
- (void)setPreferInlineComment:(BOOL)arg1;
- (BOOL)useClearBackground;
- (void)setUseClearBackground:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
