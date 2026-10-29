@interface TPYYClassInfo : NSObject
{
    BOOL _needUpdate; // +0x8
    BOOL _isMeta; // +0x9
    Class _cls; // +0x10
    Class _superCls; // +0x18
    Class _metaCls; // +0x20
    NSString * _name; // +0x28
    TPYYClassInfo * _superClassInfo; // +0x30
    NSDictionary * _ivarInfos; // +0x38
    NSDictionary * _methodInfos; // +0x40
    NSDictionary * _propertyInfos; // +0x48
}
+ (id)classInfoWithClass:(Class)arg1;
+ (id)classInfoWithClassName:(id)arg1;
- (id)initWithClass:(Class)arg1;
- (void)_update;
- (void)setNeedUpdate;
- (BOOL)needUpdate;
- (Class)cls;
- (Class)superCls;
- (Class)metaCls;
- (BOOL)isMeta;
- (id)name;
- (id)superClassInfo;
- (id)ivarInfos;
- (id)methodInfos;
- (id)propertyInfos;
- (void).cxx_destruct;
@end
