@interface VoiceTransSessionInfo : MMObject <PBCoding>
{
    NSString * _userName; // +0x8
    NSMutableDictionary * _dicVoiceTransInfo; // +0x10
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_dicVoiceTransInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithUserName:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)dicVoiceTransInfo;
- (void)setDicVoiceTransInfo:(id)arg1;
- (void).cxx_destruct;
@end

