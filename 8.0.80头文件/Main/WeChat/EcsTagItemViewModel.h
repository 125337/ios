@interface EcsTagItemViewModel : NSObject
{
    EcsTagItem * _tagItem; // +0x8
    EcsRichTextButtonViewModel * _buttonVM; // +0x10
}
+ (id)createWithTagItem:(id)arg1;
- (id)initWithTagItem:(id)arg1;
- (void)setTagItem:(id)arg1;
- (double)widthForContainerHeight:(double)arg1;
- (id)tagItem;
- (id)buttonVM;
- (void).cxx_destruct;
@end
