@interface OMJTemplateRecommendResult : NSObject
{
    BOOL _hasMoreTemplates; // +0x8
    BOOL _enableSingleTemplateMusicRec; // +0x9
    NSArray * _categories; // +0x10
    NSString * _pagingContext; // +0x18
    NSArray * _additionTemplateInfos; // +0x20
}
- (id)initWithBackingResult:(const void *)arg1;
- (id)description;
- (id)categories;
- (BOOL)hasMoreTemplates;
- (id)pagingContext;
- (BOOL)enableSingleTemplateMusicRec;
- (id)additionTemplateInfos;
- (void).cxx_destruct;
@end

