@interface WCSessionVCStackItem : MMObject
{
    NSString * _pageName; // +0x8
    unsigned long long _hashCode; // +0x10
}
- (id)toString;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1 hashCode:(unsigned long long)arg2;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (unsigned long long)hashCode;
- (void)setHashCode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

