@interface QMUClusterAnnotation : QMUAnnotation
{
    NSMutableSet * _items; // +0x8
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)add:(id)arg1;
- (void)remove:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
