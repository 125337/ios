@interface WebViewMenuItem : NSObject
{
    NSString * _itemID; // +0x8
    NSString * _title; // +0x10
    NSString * _url; // +0x18
    UIImage * _iconImage; // +0x20
    NSString * _key; // +0x28
}
- (id)init;
- (void)setItemID:(id)arg1;
- (void)setTitleWithID:(id)arg1;
- (id)itemID;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end

