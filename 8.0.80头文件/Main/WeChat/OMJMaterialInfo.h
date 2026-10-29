@interface OMJMaterialInfo : NSObject
{
    unsigned long long _scene; // +0x8
    NSString * _identifier; // +0x10
    long long _version; // +0x18
    NSString * _materialName; // +0x20
    NSString * _previewImageURL; // +0x28
    NSString * _displayImageGifURL; // +0x30
    NSString * _displayImageWxamURL; // +0x38
    NSString * _downloadURL; // +0x40
    NSDictionary * _extraInfo; // +0x48
    NSArray * _vocalFiltersParams; // +0x50
    SharedPtr<XMJMaterialInfo> _backingInfo; // +0x58
}
- (id)initWithScene:(unsigned long long)arg1 identifier:(id)arg2 version:(long long)arg3 materialName:(id)arg4 previewImageURL:(id)arg5 downloadURL:(id)arg6 extraInfo:(id)arg7;
- (id)initWithScene:(unsigned long long)arg1 identifier:(id)arg2 version:(long long)arg3 materialName:(id)arg4 previewImageURL:(id)arg5 displayImageGifURL:(id)arg6 displayImageWxamURL:(id)arg7 downloadURL:(id)arg8 extraInfo:(id)arg9 vocalFiltersParams:(id)arg10;
- (id)initWithBackingInfo:(SharedPtr<XMJMaterialInfo>)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)scene;
- (id)identifier;
- (long long)version;
- (id)materialName;
- (id)previewImageURL;
- (id)displayImageGifURL;
- (id)displayImageWxamURL;
- (id)downloadURL;
- (id)extraInfo;
- (id)vocalFiltersParams;
- (SharedPtr<XMJMaterialInfo>)backingInfo;
- (void)setBackingInfo:(SharedPtr<XMJMaterialInfo>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
