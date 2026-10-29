@interface WCFinderSearchDataProvider : NSObject <WCFinderSearchDataProvider>
{
    BOOL _continueFlag; // +0x8
    BOOL _loading; // +0x9
    NSString * _text; // +0x10
    WCFinderSearchHotWord * _hotword; // +0x18
    NSMutableArray * _contentVMS; // +0x20
    NSData * _lastBuffer; // +0x28
    WCFinderSearchMetaData * _metaData; // +0x30
    NSData * _objHotwordInfoBuff; // +0x38
    NSData * _sessionBuffer; // +0x40
    WCFinderSearchKVReporter * _reporter; // +0x48
    id <WCFinderSearchDataProviderDelegate> _delegate; // +0x50
    NSString * _requestId; // +0x58
}
- (id)init;
- (id)initWithReqeustId:(id)arg1;
- (void)requestPageDatas;
- (id)queryParams;
- (void)reportSearchSuccess:(BOOL)arg1 requestId:(id)arg2;
- (id)text;
- (void)setText:(id)arg1;
- (id)hotword;
- (void)setHotword:(id)arg1;
- (id)contentVMS;
- (void)setContentVMS:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (id)metaData;
- (void)setMetaData:(id)arg1;
- (id)objHotwordInfoBuff;
- (void)setObjHotwordInfoBuff:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (void).cxx_destruct;
@end

