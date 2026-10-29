@interface WCSiriContactEncode : WCSiriContact
{
    long long _type; // +0x38
    NSString * _originUsername; // +0x40
}
- (id)initWithContact:(id)arg1 type:(long long)arg2;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)originUsername;
- (void)setOriginUsername:(id)arg1;
- (void).cxx_destruct;
@end

