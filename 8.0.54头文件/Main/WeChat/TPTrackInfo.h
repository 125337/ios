@interface TPTrackInfo : NSObject
{
    BOOL _isSelected; // +0x8
    BOOL _isInternal; // +0x9
    BOOL _isExclusive; // +0xa
    unsigned long long _trackType; // +0x10
    unsigned long long _containerType; // +0x18
    NSString * _name; // +0x20
    NSString * _language; // +0x28
    TPHlsTag * _hlsTag; // +0x30
    TPDashFormat * _dashFormat; // +0x38
}
- (id)init;
- (unsigned long long)trackType;
- (void)setTrackType:(unsigned long long)arg1;
- (unsigned long long)containerType;
- (void)setContainerType:(unsigned long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isInternal;
- (void)setIsInternal:(BOOL)arg1;
- (BOOL)isExclusive;
- (void)setIsExclusive:(BOOL)arg1;
- (id)hlsTag;
- (void)setHlsTag:(id)arg1;
- (id)dashFormat;
- (void)setDashFormat:(id)arg1;
- (void).cxx_destruct;
@end

