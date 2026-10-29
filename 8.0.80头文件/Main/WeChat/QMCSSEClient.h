@interface QMCSSEClient : NSObject <NSURLSessionDataDelegate>
{
    BOOL _manuallyStopped; // +0x8
    long long _state; // +0x10
    id /* block */ _onOpen; // +0x18
    id /* block */ _onEvent; // +0x20
    id /* block */ _onFailure; // +0x28
    id /* block */ _onClose; // +0x30
    NSURLRequest * _request; // +0x38
    NSURLSession * _session; // +0x40
    NSURLSessionDataTask * _task; // +0x48
    QMCSSEEventParser * _parser; // +0x50
    NSMutableData * _non2xxResponseBuffer; // +0x58
}
- (id)initWithRequest:(id)arg1;
- (void)start;
- (void)stop;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_dispatchOpen;
- (void)_dispatchEvent:(id)arg1;
- (void)_dispatchFailure:(id)arg1;
- (void)_dispatchClose;
- (void)_finishAsClosed;
- (void)_finishSession;
- (long long)state;
- (void)setState:(long long)arg1;
- (id /* block */)onOpen;
- (void)setOnOpen:(id /* block */)arg1;
- (id /* block */)onEvent;
- (void)setOnEvent:(id /* block */)arg1;
- (id /* block */)onFailure;
- (void)setOnFailure:(id /* block */)arg1;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)parser;
- (void)setParser:(id)arg1;
- (BOOL)manuallyStopped;
- (void)setManuallyStopped:(BOOL)arg1;
- (id)non2xxResponseBuffer;
- (void)setNon2xxResponseBuffer:(id)arg1;
- (void).cxx_destruct;
@end
