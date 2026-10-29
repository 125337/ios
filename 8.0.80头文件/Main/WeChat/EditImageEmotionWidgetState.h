@interface EditImageEmotionWidgetState : EditImageWidgetState
{
    BOOL _isEmotionAnimated; // +0x8
    NSString * _emotionMd5; // +0x10
    NSString * _emotionSearchKey; // +0x18
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)emotionMd5;
- (void)setEmotionMd5:(id)arg1;
- (id)emotionSearchKey;
- (void)setEmotionSearchKey:(id)arg1;
- (BOOL)isEmotionAnimated;
- (void)setIsEmotionAnimated:(BOOL)arg1;
- (void).cxx_destruct;
@end
