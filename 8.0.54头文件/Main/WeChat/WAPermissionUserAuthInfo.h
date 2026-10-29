@interface WAPermissionUserAuthInfo : NSObject
{
    unsigned long long _status; // +0x8
    unsigned long long _source; // +0x10
}
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
@end

