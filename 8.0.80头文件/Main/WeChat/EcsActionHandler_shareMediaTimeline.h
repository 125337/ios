@interface EcsActionHandler_shareMediaTimeline : EcsActionHandler_shareTimeline
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handleAction:(id)arg1;
- (void)shareMediaTimeline:(id)arg1;
@end
