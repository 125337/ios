@interface MJDecorPackageItem : NSObject
{
    unsigned long long _status; // +0x8
    NSString * _identifier; // +0x10
    NSString * _displayName; // +0x18
    NSURL * _iconURL; // +0x20
    UIImage * _icon; // +0x28
}
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 iconURL:(id)arg3 status:(unsigned long long)arg4;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 icon:(id)arg3 status:(unsigned long long)arg4;
- (void)updateStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)identifier;
- (id)displayName;
- (id)iconURL;
- (id)icon;
- (void).cxx_destruct;
@end
