@interface MJVoiceItem : NSObject
{
    BOOL _iconClipsToBounds; // +0x8
    unsigned long long _status; // +0x10
    unsigned long long _type; // +0x18
    NSString * _roleID; // +0x20
    NSString * _roleName; // +0x28
    NSURL * _iconURL; // +0x30
    UIImage * _icon; // +0x38
}
- (id)initWithType:(unsigned long long)arg1 roleID:(id)arg2 roleName:(id)arg3 iconURL:(id)arg4 iconClipsToBounds:(BOOL)arg5 status:(unsigned long long)arg6;
- (id)initWithType:(unsigned long long)arg1 roleID:(id)arg2 roleName:(id)arg3 icon:(id)arg4 iconClipsToBounds:(BOOL)arg5 status:(unsigned long long)arg6;
- (void)updateStatus:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)type;
- (id)roleID;
- (id)roleName;
- (id)iconURL;
- (id)icon;
- (BOOL)iconClipsToBounds;
- (void).cxx_destruct;
@end

