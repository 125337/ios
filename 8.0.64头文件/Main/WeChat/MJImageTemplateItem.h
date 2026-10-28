@interface MJImageTemplateItem : NSObject
{
    BOOL _isSelected; // +0x8
    NSString * _identifier; // +0x10
    NSString * _name; // +0x18
    NSString * _coverImageURL; // +0x20
    unsigned long long _descVersion; // +0x28
    NSString * _descDownloadURL; // +0x30
    unsigned long long _minimumiOSSDKVersion; // +0x38
    unsigned long long _minimumAndroidSDKVersion; // +0x40
    unsigned long long _loadingStatus; // +0x48
}
+ (id)blankTemplateInfo;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 coverImageURL:(id)arg3;
- (BOOL)isBlank;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)name;
- (id)coverImageURL;
- (unsigned long long)descVersion;
- (void)setDescVersion:(unsigned long long)arg1;
- (id)descDownloadURL;
- (void)setDescDownloadURL:(id)arg1;
- (unsigned long long)minimumiOSSDKVersion;
- (void)setMinimumiOSSDKVersion:(unsigned long long)arg1;
- (unsigned long long)minimumAndroidSDKVersion;
- (void)setMinimumAndroidSDKVersion:(unsigned long long)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (unsigned long long)loadingStatus;
- (void)setLoadingStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
