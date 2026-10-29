@interface MJImageMaterialItem : NSObject
{
    unsigned long long _scene; // +0x8
    NSString * _identifier; // +0x10
    NSString * _name; // +0x18
    NSString * _previewImageURL; // +0x20
    unsigned long long _loadingStatus; // +0x28
}
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 previewImageURL:(id)arg3 scene:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)scene;
- (id)identifier;
- (id)name;
- (id)previewImageURL;
- (unsigned long long)loadingStatus;
- (void)setLoadingStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
