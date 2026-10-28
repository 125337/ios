@interface COpenIMCustomToolBarItem : NSObject
{
    NSString * _icon; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _actionUrl; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)actionUrl;
- (void)setActionUrl:(id)arg1;
- (void).cxx_destruct;
@end
