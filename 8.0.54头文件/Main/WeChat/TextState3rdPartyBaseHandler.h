@interface TextState3rdPartyBaseHandler : NSObject <TextState3rdPartyHandler>
{
    TextState3rdPartyContext * context; // +0x8
}
- (unsigned int)type;
- (BOOL)supportCustomMedia;
- (BOOL)supportCustomCover;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (id)title;
- (id)headImageView;
- (BOOL)preferCustomView;
- (id)customView;
- (id)name;
- (BOOL)useCoverForContent;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (BOOL)doHeadImageActionWithViewController:(id)arg1;
- (id)reportActivityId;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)allowReferBackground;
- (BOOL)autoHandleAppLifeCycleEvent;
- (id)mediaDescription;
- (void)checkValidWithCompletionBlock:(id /* block */)arg1 cacheOnly:(BOOL)arg2;
- (BOOL)isValid;
- (BOOL)canGetSourceInfoForRefer;
- (void)getSourceInfoForReferWithCompletionBlock:(id /* block */)arg1;
- (BOOL)isHybrid;
- (BOOL)needUpdateBizData;
- (BOOL)dataReady;
- (id)updateBizData;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end

