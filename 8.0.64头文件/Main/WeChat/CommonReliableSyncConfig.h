@interface CommonReliableSyncConfig : MMObject
{
    unsigned int _commBizIdBit; // +0x8
    unsigned int _cgiId; // +0xc
    NSString * _cgiName; // +0x10
    NSString * _handleClassName; // +0x18
}
+ (id)genSyncConfigWithCommBizIdBit:(unsigned int)arg1 cgiId:(unsigned int)arg2 cgiName:(id)arg3 handleClassName:(id)arg4;
- (unsigned int)commBizIdBit;
- (void)setCommBizIdBit:(unsigned int)arg1;
- (unsigned int)cgiId;
- (void)setCgiId:(unsigned int)arg1;
- (id)cgiName;
- (void)setCgiName:(id)arg1;
- (id)handleClassName;
- (void)setHandleClassName:(id)arg1;
- (void).cxx_destruct;
@end
