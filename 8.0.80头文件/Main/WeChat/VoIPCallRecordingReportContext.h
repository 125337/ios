@interface VoIPCallRecordingReportContext : NSObject <NSCopying>
{
    long long _roomId; // +0x8
    long long _screenType; // +0x10
    long long _source; // +0x18
}
- (id)initWithRoomId:(long long)arg1 screenType:(long long)arg2 source:(long long)arg3;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)roomId;
- (long long)screenType;
- (long long)source;
@end
