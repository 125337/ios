@interface WCTimelineTrashReportData : NSObject <PBCoding>
{
    unsigned int _likeCnt; // +0x8
    unsigned int _commentCnt; // +0xc
    unsigned int _exposeCnt; // +0x10
    NSString * _publishId; // +0x18
    NSString * _postSessionId; // +0x20
    NSString * _sessionId; // +0x28
    NSString * _exposeStartTime; // +0x30
}
+ (void)PBArrayAdd_publishId;
+ (void)PBArrayAdd_likeCnt;
+ (void)PBArrayAdd_commentCnt;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_postSessionId;
+ (void)initialize;
+ (void)reportExpose:(id)arg1 likeCnt:(unsigned int)arg2 commentCnt:(unsigned int)arg3 postSessionId:(id)arg4 sessionId:(id)arg5 exposeStartTime:(id)arg6 exposeCnt:(unsigned int)arg7;
+ (void)reportClick:(id)arg1 likeCnt:(unsigned int)arg2 commentCnt:(unsigned int)arg3 postSessionId:(id)arg4 sessionId:(id)arg5 nextAction:(unsigned int)arg6 nextPublishId:(id)arg7;
- (id)getPBPropertyTable;
- (id)debugDescription;
- (void)recordNextLocalId:(id)arg1 previousReportData:(id)arg2;
- (id)publishId;
- (void)setPublishId:(id)arg1;
- (unsigned int)likeCnt;
- (void)setLikeCnt:(unsigned int)arg1;
- (unsigned int)commentCnt;
- (void)setCommentCnt:(unsigned int)arg1;
- (id)postSessionId;
- (void)setPostSessionId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)exposeStartTime;
- (void)setExposeStartTime:(id)arg1;
- (unsigned int)exposeCnt;
- (void)setExposeCnt:(unsigned int)arg1;
- (void).cxx_destruct;
@end

