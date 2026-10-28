@interface SRProxyConnect : NSObject <NSStreamDelegate>
{
    id /* block */ _completion; // +0x8
    NSString * _httpProxyHost; // +0x10
    unsigned int _httpProxyPort; // +0x18
    __CFHTTPMessage * _receivedHTTPHeaders; // +0x20
    NSString * _socksProxyHost; // +0x28
    unsigned int _socksProxyPort; // +0x30
    NSString * _socksProxyUsername; // +0x38
    NSString * _socksProxyPassword; // +0x40
    BOOL _connectionRequiresSSL; // +0x48
    NSMutableArray * _inputQueue; // +0x50
    NSObject<OS_dispatch_queue> * _writeQueue; // +0x58
    BOOL _disableTcpNaglesAlgorithm; // +0x60
    NSURL * _url; // +0x68
    NSInputStream * _inputStream; // +0x70
    NSOutputStream * _outputStream; // +0x78
}
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (void)openNetworkStreamWithCompletion:(id /* block */)arg1;
- (void)_didConnect;
- (void)_failWithError:(id)arg1;
- (void)_configureProxy;
- (void)_readProxySettingWithType:(id)arg1 settings:(id)arg2;
- (void)_fetchPAC:(id)arg1;
- (void)_runPACScript:(id)arg1;
- (void)_openConnection;
- (void)_initializeStreams;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_proxyDidConnect;
- (void)_processInputStream;
- (void)_dequeueInput;
- (BOOL)_proxyProcessHTTPResponseWithData:(id)arg1;
- (void)_proxyHTTPHeadersDidFinish;
- (void)_writeData:(id)arg1;
- (BOOL)disableTcpNaglesAlgorithm;
- (void)setDisableTcpNaglesAlgorithm:(BOOL)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)inputStream;
- (void)setInputStream:(id)arg1;
- (id)outputStream;
- (void)setOutputStream:(id)arg1;
- (void).cxx_destruct;
@end
