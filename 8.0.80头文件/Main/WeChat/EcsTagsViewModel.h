@interface EcsTagsViewModel : NSObject
{
    EcsTag * _tagsModel; // +0x8
    NSArray * _tagItemsVM; // +0x10
}
+ (id)createWithTagsModel:(id)arg1;
- (id)initWithTagsModel:(id)arg1;
- (void)setTagsModel:(id)arg1;
- (BOOL)hasTagWithJumpInfo;
- (id)tagsModel;
- (id)tagItemsVM;
- (void).cxx_destruct;
@end
