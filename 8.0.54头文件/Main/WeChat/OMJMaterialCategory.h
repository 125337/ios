@interface OMJMaterialCategory : NSObject
{
    unsigned long long _scene; // +0x8
    unsigned long long _identifier; // +0x10
    NSString * _categoryName; // +0x18
    NSString * _previewImageURL; // +0x20
    NSArray * _materialInfos; // +0x28
    SharedPtr<XMJMaterialCategory> _backingCategory; // +0x30
}
- (id)initWithScene:(unsigned long long)arg1 identifier:(unsigned long long)arg2 categoryName:(id)arg3 previewImageURL:(id)arg4 materialInfo:(id)arg5;
- (id)initWithBackingCategory:(SharedPtr<XMJMaterialCategory>)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)scene;
- (unsigned long long)identifier;
- (id)categoryName;
- (id)previewImageURL;
- (id)materialInfos;
- (SharedPtr<XMJMaterialCategory>)backingCategory;
- (void)setBackingCategory:(SharedPtr<XMJMaterialCategory>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

