@interface WCFinderLiveTopCommentCGI : WCFinderLiveBaseCgi
{
    unsigned int _optype; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    NSData * _liveCookies; // +0x28
    unsigned long long _commentSeq; // +0x30
    NSString * _clientMsgId; // +0x38
    NSString * _oriClientMsgId; // +0x40
}
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 commentSeq:(unsigned long long)arg3 clientMsgId:(id)arg4 originalClientMsgId:(id)arg5 optype:(unsigned int)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)commentSeq;
- (void)setCommentSeq:(unsigned long long)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (id)oriClientMsgId;
- (void)setOriClientMsgId:(id)arg1;
- (unsigned int)optype;
- (void)setOptype:(unsigned int)arg1;
- (void).cxx_destruct;
@end
