@interface MPChannelTimelineInfo : NSObject <PBCoding>
{
    BOOL _shouldCleanUpDesc; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSArray * _bizInfoArr; // +0x20
    NSString * _appId; // +0x28
    unsigned long long _appDebugModeType; // +0x30
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_shouldCleanUpDesc;
+ (void)PBArrayAdd_bizInfoArr;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_appDebugModeType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isValid;
- (id)description;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)shouldCleanUpDesc;
- (void)setShouldCleanUpDesc:(BOOL)arg1;
- (id)bizInfoArr;
- (void)setBizInfoArr:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)appDebugModeType;
- (void)setAppDebugModeType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

