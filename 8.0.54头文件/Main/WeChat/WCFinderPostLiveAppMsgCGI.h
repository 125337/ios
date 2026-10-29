@interface WCFinderPostLiveAppMsgCGI : WCFinderLiveBaseBoxCgi
{
    unsigned int _msgType; // +0x8
    unsigned int _liveScene; // +0xc
    WCFinderDataItem * _dataItem; // +0x10
    NSData * _liveCookies; // +0x18
    unsigned long long _quoteMsgSeq; // +0x20
    NSString * _finderUserName; // +0x28
    NSString * _localClientMsgId; // +0x30
    FinderLiveAppMsg * _appMsg; // +0x38
    FinderWindowProductInfo * _questionProductInfo; // +0x40
    id /* block */ _successBlock; // +0x48
    id /* block */ _failBlock; // +0x50
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 quoteSeq:(unsigned long long)arg6 finderUserName:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 toUser:(id)arg6 replyConten:(id)arg7 clientMsgId:(id)arg8 successBlock:(id /* block */)arg9 failBlock:(id /* block */)arg10;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 toUser:(id)arg6 replyConten:(id)arg7 clientMsgId:(id)arg8 location:(id)arg9 poiAddrSubStr:(id)arg10 likeMsg:(id)arg11 boxId:(id)arg12 extraInfo:(id)arg13 successBlock:(id /* block */)arg14 failBlock:(id /* block */)arg15;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 atUsers:(id)arg6 atContent:(id)arg7 clientMsgId:(id)arg8 boxId:(id)arg9 extraInfo:(id)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
- (id)initWithLiveTaskIdForFriendChat:(id)arg1 finderDataItem:(id)arg2 liveScene:(unsigned int)arg3 msgType:(unsigned int)arg4 content:(id)arg5 liveCookies:(id)arg6 clientMsgId:(id)arg7 boxId:(id)arg8 extraInfo:(id)arg9 successBlock:(id /* block */)arg10 failBlock:(id /* block */)arg11;
- (id)initWithLiveTaskIdForProductQuestion:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 content:(id)arg6 productInfo:(id)arg7 clientMsgId:(id)arg8 boxId:(id)arg9 extraInfo:(id)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)setMsgPayload:(id)arg1;
- (void)setMsgBoxId:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)liveScene;
- (void)setLiveScene:(unsigned int)arg1;
- (unsigned long long)quoteMsgSeq;
- (void)setQuoteMsgSeq:(unsigned long long)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)localClientMsgId;
- (void)setLocalClientMsgId:(id)arg1;
- (id)appMsg;
- (void)setAppMsg:(id)arg1;
- (id)questionProductInfo;
- (void)setQuestionProductInfo:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

