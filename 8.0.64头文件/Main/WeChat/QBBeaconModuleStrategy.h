@interface QBBeaconModuleStrategy : QBBeaconPersistObject
{
    int moduleKey; // +0x34
    BOOL onOff; // +0x38
    NSString * uploadUrl; // +0x40
    NSDictionary * detail; // +0x48
    NSArray * preventEventCode; // +0x50
    NSArray * sampleEvent; // +0x58
}
- (id)uploadUrl;
- (id)initWithWUPMSModel:(id)arg1;
- (BOOL)isEventCanReport:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)onOff;
- (void)setOnOff:(BOOL)arg1;
- (int)moduleKey;
- (void)setModuleKey:(int)arg1;
- (void)setUploadUrl:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)preventEventCode;
- (void)setPreventEventCode:(id)arg1;
- (id)sampleEvent;
- (void)setSampleEvent:(id)arg1;
@end
