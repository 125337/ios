@interface CRAPIClient : NSObject
{
    BOOL _enabled; // +0x8
    CRRequestSession * _session; // +0x10
}
- (id)initWithSession:(id)arg1;
- (void)cancelAllRequests;
- (void)dealloc;
- (id)session;
- (void)setSession:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

