@interface APPortal : APBase <NSURLConnectionDelegate, PBMessageObserverDelegate>
{
    NSString * ticket; // +0x70
    NSString * authUrl; // +0x78
    NSString * extend; // +0x80
    int _retryCount; // +0x88
    id <APProtalDelegate> _delegate; // +0x90
    NSString * _tid; // +0x98
    NSString * _openid; // +0xa0
    NSString * _appid; // +0xa8
    UIViewController * _viewController; // +0xb0
    NSURLConnection * _connection; // +0xb8
    NSURLConnection * _postConnection; // +0xc0
    NSURLConnection * _ping32BlackUrlConnection; // +0xc8
    PublicWifiCache * _acache; // +0xd0
}
- (void)dealloc;
- (void)start;
- (void)cancel;
- (void)didStart;
- (void)didSuccess;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)description;
- (void)startLoading;
- (void)stopLoading;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)openid;
- (void)setOpenid:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)connection;
- (void)setConnection:(id)arg1;
- (id)postConnection;
- (void)setPostConnection:(id)arg1;
- (id)ping32BlackUrlConnection;
- (void)setPing32BlackUrlConnection:(id)arg1;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (id)acache;
- (void)setAcache:(id)arg1;
- (void).cxx_destruct;
@end

