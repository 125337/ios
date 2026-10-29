@interface GCMessageViewModelConfig : NSObject
{
    BOOL _readOnly; // +0x8
    BOOL _isCache; // +0x9
    id <GCMessageViewModelDelegate> _viewModelDelgate; // +0x10
    id <GCMessageViewModeUnreadCntProtocol> _unReadCntDelegate; // +0x18
    NSString * _chatRoomName; // +0x20
    long long _channelId; // +0x28
    NSString * _channelName; // +0x30
    NSString * _cantSendReason; // +0x38
    Channel * _channel; // +0x40
}
- (id)viewModelDelgate;
- (void)setViewModelDelgate:(id)arg1;
- (id)unReadCntDelegate;
- (void)setUnReadCntDelegate:(id)arg1;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (long long)channelId;
- (void)setChannelId:(long long)arg1;
- (id)channelName;
- (void)setChannelName:(id)arg1;
- (BOOL)readOnly;
- (void)setReadOnly:(BOOL)arg1;
- (id)cantSendReason;
- (void)setCantSendReason:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (BOOL)isCache;
- (void)setIsCache:(BOOL)arg1;
- (void).cxx_destruct;
@end
