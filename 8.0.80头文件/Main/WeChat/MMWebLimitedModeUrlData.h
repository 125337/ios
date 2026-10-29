@interface MMWebLimitedModeUrlData : NSObject
{
    NSString * _url; // +0x8
    NSString * _title; // +0x10
    NSString * _coverUrl; // +0x18
    NSData * _coverData; // +0x20
}
- (BOOL)isValid;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)coverData;
- (void)setCoverData:(id)arg1;
- (void).cxx_destruct;
@end
