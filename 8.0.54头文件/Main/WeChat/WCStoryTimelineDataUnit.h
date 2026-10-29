@interface WCStoryTimelineDataUnit : NSObject
{
    long long _unreadFavorCellModelCount; // +0x8
    long long _readFavorCellModelCount; // +0x10
    NSArray * _timestampUnreadUnitArray; // +0x18
    NSArray * _timestampReadUnitArray; // +0x20
    NSArray * _unreadCornerMessageUnitArray; // +0x28
    NSArray * _timestampUnreadCellModelArray; // +0x30
    NSArray * _timestampReadCellModelArray; // +0x38
    NSArray * _unreadCornerMessageCellModelArray; // +0x40
}
- (id)init;
- (long long)unreadFavorCellModelCount;
- (long long)readFavorCellModelCount;
- (id)timestampUnreadUnitArray;
- (void)setTimestampUnreadUnitArray:(id)arg1;
- (id)timestampReadUnitArray;
- (void)setTimestampReadUnitArray:(id)arg1;
- (id)unreadCornerMessageUnitArray;
- (void)setUnreadCornerMessageUnitArray:(id)arg1;
- (id)timestampUnreadCellModelArray;
- (void)setTimestampUnreadCellModelArray:(id)arg1;
- (id)timestampReadCellModelArray;
- (void)setTimestampReadCellModelArray:(id)arg1;
- (id)unreadCornerMessageCellModelArray;
- (void)setUnreadCornerMessageCellModelArray:(id)arg1;
- (void).cxx_destruct;
@end

