@interface CBTAttachmentListPrefixView : CBTAttachmentBaseView
{
    UILabel * _listLabel; // +0x8
}
+ (id)GetMonospacedDigitFont:(id)arg1;
+ (double)FirstIndentLevelPrefixWidth:(id)arg1;
+ (double)PrefixWidthForOrderListIndex:(unsigned int)arg1 font:(id)arg2;
- (id)initWithAttachment:(id)arg1;
- (void)setupViews;
- (unsigned int)getListIndex;
- (void)layoutView;
- (id)listLabel;
- (void)setListLabel:(id)arg1;
- (void).cxx_destruct;
@end
