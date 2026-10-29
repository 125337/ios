@interface MJVideoTemplateCategory : NSObject
{
    NSString * _categoryKey; // +0x8
    NSString * _categoryName; // +0x10
    NSArray * _videoTemplates; // +0x18
}
+ (id)recommendedCategoryKey;
- (id)initWithCategory:(id)arg1;
- (id)categoryKey;
- (id)categoryName;
- (id)videoTemplates;
- (void).cxx_destruct;
@end
