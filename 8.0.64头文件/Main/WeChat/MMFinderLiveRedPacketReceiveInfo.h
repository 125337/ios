@interface MMFinderLiveRedPacketReceiveInfo : NSObject
{
    FinderLiveAppMsgRecvRedPacketInfo * _appMsgReceiveInfo; // +0x8
    FinderLiveContact * _fromUserContact; // +0x10
    FinderLiveContact * _toUserContact; // +0x18
    unsigned long long _seq; // +0x20
    NSString * _clientMsgId; // +0x28
}
- (id)appMsgReceiveInfo;
- (void)setAppMsgReceiveInfo:(id)arg1;
- (id)fromUserContact;
- (void)setFromUserContact:(id)arg1;
- (id)toUserContact;
- (void)setToUserContact:(id)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (void).cxx_destruct;
@end
