@interface WCTagsView : UIView
{
    NSArray * _tagsArray; // +0x8
    NSDictionary * _dicTagIconUrl; // +0x10
    double _maxWidth; // +0x18
    id /* block */ _tagClickAction; // +0x20
    double _tagHeight; // +0x28
    double _tagSpace; // +0x30
    NSMutableArray * _tagViewArray; // +0x38
    NSArray * _tagViewModelArray; // +0x40
    NSArray * _visableTagViewModelArray; // +0x48
    double _viewWidth; // +0x50
}
+ (double)viewWidthForTags:(id)arg1;
+ (double)viewWidthForTags:(id)arg1 maxWidth:(id)arg2;
+ (double)viewWidthForTags:(id)arg1 tagHeight:(id)arg2 tagSpace:(id)arg3 maxWidth:(id)arg4;
+ (double)p_viewWidthForTags:(id)arg1 tagHeight:(double)arg2 tagSpace:(double)arg3 maxWidth:(double)arg4 viewModelArray:(id)arg5 visableViewModelArray:(id)arg6 dicTagIconUrl:(id)arg7;
- (id)initWithTagHeight:(double)arg1;
- (id)initWithTagHeight:(double)arg1 tagSpace:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)updateTags:(id)arg1;
- (CGSize)updateTags:(id)arg1 maxWidth:(double)arg2;
- (CGSize)updateTags:(id)arg1 maxWidth:(double)arg2 dicTagIconUrl:(id)arg3;
- (void)setTagsArray:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setTagSpace:(double)arg1;
- (void)setTagHeight:(double)arg1;
- (void)setTagClickAction:(id /* block */)arg1;
- (CGSize)getExpectedViewSize;
- (void)p_update;
- (void)p_updateViewModels;
- (void)p_updateViewUI;
- (id)tagsArray;
- (id)dicTagIconUrl;
- (void)setDicTagIconUrl:(id)arg1;
- (double)maxWidth;
- (id /* block */)tagClickAction;
- (double)tagHeight;
- (double)tagSpace;
- (id)tagViewArray;
- (void)setTagViewArray:(id)arg1;
- (id)tagViewModelArray;
- (void)setTagViewModelArray:(id)arg1;
- (id)visableTagViewModelArray;
- (void)setVisableTagViewModelArray:(id)arg1;
- (double)viewWidth;
- (void)setViewWidth:(double)arg1;
- (void).cxx_destruct;
@end

