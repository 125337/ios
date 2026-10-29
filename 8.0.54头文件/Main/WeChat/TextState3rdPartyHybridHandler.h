@interface TextState3rdPartyHybridHandler : TextState3rdPartyBaseHandler
{
    id <TextState3rdPartyHandler> _appearHandler; // +0x8
    id <TextState3rdPartyHandler> _jumpHandler; // +0x10
}
- (id)initWithJumpHandler:(id)arg1 appearHandler:(id)arg2;
- (unsigned int)type;
- (BOOL)supportCustomMedia;
- (id)title;
- (id)headImageView;
- (BOOL)useCoverForContent;
- (BOOL)doHeadImageActionWithViewController:(id)arg1;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)allowReferBackground;
- (BOOL)autoHandleAppLifeCycleEvent;
- (id)mediaDescription;
- (void)checkValidWithCompletionBlock:(id /* block */)arg1 cacheOnly:(BOOL)arg2;
- (BOOL)isValid;
- (BOOL)canGetSourceInfoForRefer;
- (void)getSourceInfoForReferWithCompletionBlock:(id /* block */)arg1;
- (id)reportActivityId;
- (BOOL)preferCustomView;
- (id)customView;
- (id)name;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (BOOL)isHybrid;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (id)appearHandler;
- (void)setAppearHandler:(id)arg1;
- (id)jumpHandler;
- (void)setJumpHandler:(id)arg1;
- (void).cxx_destruct;
@end

