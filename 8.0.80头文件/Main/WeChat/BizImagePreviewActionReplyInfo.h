@interface BizImagePreviewActionReplyInfo : NSObject
{
    NSString * _content; // +0x8
    NSNumber * _time; // +0x10
    NSString * _replyImgUrl; // +0x18
}
+ (id)makeWithContent:(id)arg1 time:(id)arg2 replyImgUrl:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)content;
- (void)setContent:(id)arg1;
- (id)time;
- (void)setTime:(id)arg1;
- (id)replyImgUrl;
- (void)setReplyImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
