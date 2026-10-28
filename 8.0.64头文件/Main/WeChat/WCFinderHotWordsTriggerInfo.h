@interface WCFinderHotWordsTriggerInfo : NSObject <WCTColumnCoding>
{
    int _jumpDest; // +0x8
    NSString * _keyword; // +0x10
    unsigned long long _startTime; // +0x18
    unsigned long long _endTime; // +0x20
    long long _jumpScene; // +0x28
    NSData * _bypassInfo; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)keyword;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_keyword;
+ (const void *)startTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_startTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_endTime;
+ (const void *)jumpDest;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_jumpDest;
+ (const void *)jumpScene;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_jumpScene;
+ (const void *)bypassInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_bypassInfo;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (id)fromPBMsgConfig:(id)arg1;
- (id)description;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (int)jumpDest;
- (void)setJumpDest:(int)arg1;
- (long long)jumpScene;
- (void)setJumpScene:(long long)arg1;
- (id)bypassInfo;
- (void)setBypassInfo:(id)arg1;
- (void).cxx_destruct;
@end
