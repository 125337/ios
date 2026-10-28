@interface MusicHistoryItem : NSObject <WCTTableCoding>
{
    NSString * _itemId; // +0x8
    NSData * _musicInfoData; // +0x10
    double _updateTimeStamp; // +0x18
    MMMusicInfo * _musicInfo; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)itemId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_itemId;
+ (const void *)musicInfoData;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_musicInfoData;
+ (const void *)updateTimeStamp;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_updateTimeStamp;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (id)generateItemIdFromMusicInfo:(id)arg1;
- (id)initWithMusicInfo:(id)arg1;
- (id)musicInfo;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (id)musicInfoData;
- (void)setMusicInfoData:(id)arg1;
- (double)updateTimeStamp;
- (void)setUpdateTimeStamp:(double)arg1;
- (void)setMusicInfo:(id)arg1;
- (void).cxx_destruct;
@end
