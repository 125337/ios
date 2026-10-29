@interface MMFinderLiveRedPacketSendInfo : NSObject
{
    FinderLiveAppMsgSendRedPacketInfo * _appMsgSendInfo; // +0x8
    FinderLiveContact * _fromUserContact; // +0x10
    unsigned long long _seq; // +0x18
    NSString * _clientMsgId; // +0x20
    MMFinderLiveRedPacketItem * _referredRedPacketInfo; // +0x28
}
- (id)appMsgSendInfo;
- (void)setAppMsgSendInfo:(id)arg1;
- (id)fromUserContact;
- (void)setFromUserContact:(id)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (id)referredRedPacketInfo;
- (void)setReferredRedPacketInfo:(id)arg1;
- (void).cxx_destruct;
@end

