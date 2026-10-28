@interface BizImagePreviewAction : NSObject
{
    NSString * _action; // +0x8
    NSString * _resp; // +0x10
    BizImagePreviewActionIdentity * _identity; // +0x18
    BizImagePreviewActionSrcCommentInfo * _srcCommentInfo; // +0x20
    BizImagePreviewActionPraiseInfo * _praiseInfo; // +0x28
    BizImagePreviewActionReplyInfo * _replyInfo; // +0x30
}
+ (id)makeWithAction:(id)arg1 resp:(id)arg2 identity:(id)arg3 srcCommentInfo:(id)arg4 praiseInfo:(id)arg5 replyInfo:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)action;
- (void)setAction:(id)arg1;
- (id)resp;
- (void)setResp:(id)arg1;
- (id)identity;
- (void)setIdentity:(id)arg1;
- (id)srcCommentInfo;
- (void)setSrcCommentInfo:(id)arg1;
- (id)praiseInfo;
- (void)setPraiseInfo:(id)arg1;
- (id)replyInfo;
- (void)setReplyInfo:(id)arg1;
- (void).cxx_destruct;
@end
