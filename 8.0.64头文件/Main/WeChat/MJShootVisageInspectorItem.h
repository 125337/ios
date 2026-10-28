@interface MJShootVisageInspectorItem : NSObject
{
    OMJMaterialInfo * _material; // +0x8
    NSString * _identifier; // +0x10
    NSString * _name; // +0x18
    NSURL * _iconURL; // +0x20
}
+ (id)createEmptyItemWithMaterialScene:(unsigned long long)arg1;
- (id)initWithMaterial:(id)arg1;
- (BOOL)isEmptyItem;
- (id)material;
- (id)identifier;
- (id)name;
- (id)iconURL;
- (void).cxx_destruct;
@end
