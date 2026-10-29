@interface WxGamePluginLastMsgInfo : NSObject
{
    unsigned int _localId; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _leftCount; // +0x10
    unsigned int _msgCountToLoad; // +0x14
}
- (id)init:(unsigned int)arg1 createTime:(unsigned int)arg2 leftCount:(unsigned int)arg3 msgCountToLoad:(unsigned int)arg4;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)leftCount;
- (void)setLeftCount:(unsigned int)arg1;
- (unsigned int)msgCountToLoad;
- (void)setMsgCountToLoad:(unsigned int)arg1;
@end
