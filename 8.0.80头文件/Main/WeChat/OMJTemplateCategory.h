@interface OMJTemplateCategory : NSObject
{
    NSString * _categoryID; // +0x8
    NSString * _categoryName; // +0x10
    NSURL * _thumbnailURL; // +0x18
    NSArray * _templateInfos; // +0x20
}
- (id)initWithBackingCategory:(const void *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)categoryID;
- (id)categoryName;
- (id)thumbnailURL;
- (id)templateInfos;
- (void).cxx_destruct;
@end
