@interface EnterpriseBrandAttrCacheItem : MMObject
{
    unsigned int _updateTime; // +0x8
    EnterpriseBrandAttr * _attr; // +0x10
}
- (id)attr;
- (void)setAttr:(id)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

