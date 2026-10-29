@interface BizImagePreviewActionSrcCommentInfo : NSObject
{
    NSString * _type; // +0x8
    NSString * _contentId; // +0x10
    NSNumber * _replyId; // +0x18
}
+ (id)makeWithType:(id)arg1 contentId:(id)arg2 replyId:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)type;
- (void)setType:(id)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (id)replyId;
- (void)setReplyId:(id)arg1;
- (void).cxx_destruct;
@end
