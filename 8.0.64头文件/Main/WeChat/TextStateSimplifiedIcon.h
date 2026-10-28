@interface TextStateSimplifiedIcon : NSObject
{
    NSString * _iconId; // +0x8
    NSString * _iconDescription; // +0x10
    NSString * _iconUrl; // +0x18
    unsigned long long _iconOption; // +0x20
}
- (id)initWithIcon:(id)arg1;
- (id)initWithIconId:(id)arg1 iconActions:(id)arg2;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (id)iconDescription;
- (void)setIconDescription:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (unsigned long long)iconOption;
- (void)setIconOption:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
