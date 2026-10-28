@interface WAProfileRelatedInfo : MMObject
{
    NSString * _title; // +0x8
    NSString * _iconURL; // +0x10
    NSString * _desc; // +0x18
    NSString * _username; // +0x20
}
- (id)initWithBrandInfo:(id)arg1;
- (id)initWithWeAppInfo:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
