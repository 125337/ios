@interface WCFinderGetWechatHDHeadFetcher : NSObject <MessageObserverDelegate>
{
    BOOL _allowNormalImg; // +0x8
    unsigned int _uiDownloadEventID; // +0xc
    NSString * _username; // +0x10
    CContact * _contact; // +0x18
    id /* block */ _successfulBlock; // +0x20
    id /* block */ _failedBlock; // +0x28
}
- (id)initWithNormalImageIfHDNotFound:(BOOL)arg1;
- (void)dealloc;
- (void)fetch;
- (void)fetchWithCompletion:(id /* block */)arg1 failed:(id /* block */)arg2;
- (void)downloadHDImg;
- (void)updateHDHead;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)uiDownloadEventID;
- (void)setUiDownloadEventID:(unsigned int)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)allowNormalImg;
- (void)setAllowNormalImg:(BOOL)arg1;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
