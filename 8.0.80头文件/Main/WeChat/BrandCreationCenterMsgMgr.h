@interface BrandCreationCenterMsgMgr : MMUserService <MMServiceProtocol>
{
    MMLRUCache * _notifyUUIDCache; // +0x8
}
- (void)syncWithActionNotifyData:(id)arg1 uuid:(id)arg2;
- (id)notifyUUIDCache;
- (void)setNotifyUUIDCache:(id)arg1;
- (void).cxx_destruct;
@end
