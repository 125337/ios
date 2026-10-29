@interface ChatRoomAtRecordList : MMObject <PBCoding>
{
    NSMutableArray * _records; // +0x8
    NSString * _roomUserName; // +0x10
}
+ (void)PBArrayAdd_records;
+ (void)initialize;
+ (id)GetKvForCurrentUser;
+ (id)GetRecordForRoom:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithUserName:(id)arg1;
- (void)saveToKV;
- (void)addAtRecord:(id)arg1;
- (void)addAtRecords:(id)arg1;
- (void)ensureRecordCount;
- (id)getRecentAtContacts:(id)arg1;
- (id)records;
- (void)setRecords:(id)arg1;
- (id)roomUserName;
- (void)setRoomUserName:(id)arg1;
- (void).cxx_destruct;
@end
