@interface WCFinderUpdateTopicModel : NSObject
{
    NSString * _inputTopic; // +0x8
    _NSRange _topicRange; // +0x10
}
- (id)initWithInputTopic:(id)arg1 topicRange:(_NSRange)arg2;
- (BOOL)isValid;
- (BOOL)isEqual:(id)arg1;
- (id)inputTopic;
- (void)setInputTopic:(id)arg1;
- (_NSRange)topicRange;
- (void)setTopicRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end
