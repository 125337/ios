@interface MMWebViewHandOffItem : MMHandOffItem <NSCopying>
{
    NSString * _url; // +0x30
    NSString * _icon; // +0x38
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initFromMinimizeTaskData:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end

