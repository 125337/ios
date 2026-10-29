@interface MMOpenVoiceRecordItem : MMObject <PBCoding, NSCopying>
{
    NSString * _appId; // +0x8
    long long _roomId; // +0x10
    NSString * _filePath; // +0x18
    NSString * _extraData; // +0x20
}
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_roomId;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_extraData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (long long)roomId;
- (void)setRoomId:(long long)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (void).cxx_destruct;
@end
