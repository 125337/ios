@interface CommonReliableSyncAction : MMObject
{
    unsigned int _commBizIdBit; // +0x8
    unsigned int _syncScene; // +0xc
    NSData * _syncActionyData; // +0x10
}
- (id)initWithSyncActionyData:(id)arg1 commBizIdBit:(unsigned int)arg2 syncScene:(unsigned int)arg3;
- (id)description;
- (id)syncActionyData;
- (void)setSyncActionyData:(id)arg1;
- (unsigned int)commBizIdBit;
- (void)setCommBizIdBit:(unsigned int)arg1;
- (unsigned int)syncScene;
- (void)setSyncScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
