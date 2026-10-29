@interface MMWebViewHandOffItem : MMHandOffItem <NSCopying>
{
    NSString * _url; // +0x38
    NSString * _icon; // +0x40
}
- (id)init;
- (void)setDisplaySourceName:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initFromMinimizeTaskData:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end
