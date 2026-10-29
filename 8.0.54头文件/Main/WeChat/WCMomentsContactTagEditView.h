@interface WCMomentsContactTagEditView : UIView <FavTagEditViewDelegate>
{
    id <WCMomentsContactTagEditViewDelegate> _delegate; // +0x8
    FavTagEditView * _tagEditView; // +0x10
    OrderedDictionary * _tagNameToTagData; // +0x18
    UIEdgeInsets _layoutMargins; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 layoutMargins:(UIEdgeInsets)arg2;
- (void)initView;
- (void)updateWithTagDatas:(id)arg1;
- (void)addTagData:(id)arg1;
- (void)deleteTagData:(id)arg1;
- (BOOL)isContainTagData:(id)arg1;
- (id)tagNameToTagDataWithTagDatas:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)onDeleteButton:(id)arg1;
- (BOOL)onTextFieldShouldBeginEditing:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tagEditView;
- (void)setTagEditView:(id)arg1;
- (UIEdgeInsets)layoutMargins;
- (void)setLayoutMargins:(UIEdgeInsets)arg1;
- (id)tagNameToTagData;
- (void)setTagNameToTagData:(id)arg1;
- (void).cxx_destruct;
@end

