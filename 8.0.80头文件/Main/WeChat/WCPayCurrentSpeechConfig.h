@interface WCPayCurrentSpeechConfig : NSObject <PBCoding>
{
    unsigned int _version; // +0x8
    NSString * _currentSpeechId; // +0x10
    NSString * _md5; // +0x18
}
+ (void)PBArrayAdd_currentSpeechId;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_md5;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)currentSpeechId;
- (void)setCurrentSpeechId:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (void).cxx_destruct;
@end
