@interface ShakeMsgItem : MMObject <PBCoding>
{
    BOOL _bIsRead; // +0x8
    unsigned int _uiType; // +0xc
    unsigned int _uiCreateTime; // +0x10
    unsigned long long _ui64SvrMsgId; // +0x18
    NSString * _nsThumbUrl; // +0x20
    NSString * _nsTitle; // +0x28
    NSString * _nsDesc; // +0x30
    NSString * _nsJumpLink; // +0x38
    NSString * _nsPid; // +0x40
}
+ (void)PBArrayAdd_ui64SvrMsgId;
+ (void)PBArrayAdd_uiType;
+ (void)PBArrayAdd_uiCreateTime;
+ (void)PBArrayAdd_bIsRead;
+ (void)PBArrayAdd_nsThumbUrl;
+ (void)PBArrayAdd_nsTitle;
+ (void)PBArrayAdd_nsDesc;
+ (void)PBArrayAdd_nsJumpLink;
+ (void)PBArrayAdd_nsPid;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)ui64SvrMsgId;
- (void)setUi64SvrMsgId:(unsigned long long)arg1;
- (unsigned int)uiType;
- (void)setUiType:(unsigned int)arg1;
- (BOOL)bIsRead;
- (void)setBIsRead:(BOOL)arg1;
- (unsigned int)uiCreateTime;
- (void)setUiCreateTime:(unsigned int)arg1;
- (id)nsThumbUrl;
- (void)setNsThumbUrl:(id)arg1;
- (id)nsTitle;
- (void)setNsTitle:(id)arg1;
- (id)nsDesc;
- (void)setNsDesc:(id)arg1;
- (id)nsJumpLink;
- (void)setNsJumpLink:(id)arg1;
- (id)nsPid;
- (void)setNsPid:(id)arg1;
- (void).cxx_destruct;
@end
