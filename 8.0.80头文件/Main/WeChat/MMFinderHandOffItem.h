@interface MMFinderHandOffItem : MMHandOffItem <NSCopying>
{
    NSString * _icon; // +0x38
    NSString * _objectId; // +0x40
    NSString * _objectNonceId; // +0x48
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (void).cxx_destruct;
@end
