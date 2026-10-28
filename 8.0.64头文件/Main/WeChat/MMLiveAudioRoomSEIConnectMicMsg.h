@interface MMLiveAudioRoomSEIConnectMicMsg : NSObject
{
    NSArray * _list; // +0x8
    unsigned long long _i; // +0x10
    NSArray * _sl; // +0x18
    unsigned long long _m; // +0x20
}
- (unsigned long long)micLayoutMode;
- (id)list;
- (void)setList:(id)arg1;
- (unsigned long long)i;
- (void)setI:(unsigned long long)arg1;
- (id)sl;
- (void)setSl:(id)arg1;
- (unsigned long long)m;
- (void)setM:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
