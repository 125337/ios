@interface MMOpenVoiceRecordCache : MMObject <PBCoding, NSCopying>
{
    NSMutableArray * _recordRoomIds; // +0x8
}
+ (void)PBArrayAdd_recordRoomIds;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)recordRoomIds;
- (void)setRecordRoomIds:(id)arg1;
- (void).cxx_destruct;
@end
