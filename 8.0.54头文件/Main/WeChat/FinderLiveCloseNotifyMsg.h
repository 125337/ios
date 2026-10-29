@interface FinderLiveCloseNotifyMsg : NSObject
{
    NSString * _funcMsgID; // +0x8
    NSString * _tipsID; // +0x10
    NSString * _feedID; // +0x18
    NSString * _liveID; // +0x20
    NSString * _revokeID; // +0x28
}
- (id)initWithXmlContent:(id)arg1;
- (void)parseWithXml:(id)arg1;
- (id)funcMsgID;
- (void)setFuncMsgID:(id)arg1;
- (id)tipsID;
- (void)setTipsID:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)liveID;
- (void)setLiveID:(id)arg1;
- (id)revokeID;
- (void)setRevokeID:(id)arg1;
- (void).cxx_destruct;
@end

