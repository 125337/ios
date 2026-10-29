@interface WCFinderModifiedPanelView : MMUIView <WCFinderModifiedLogBannerViewDelegate>
{
    id <WCFinderModifiedPanelViewDelegate> _delegate; // +0x8
    UIView * _containerView; // +0x10
    long long _modifyDescMaxCount; // +0x18
    long long _modifyTitleMaxCount; // +0x20
    RichTextView * _modifyDescLabel; // +0x28
    NSMutableArray * _descBannerArray; // +0x30
    RichTextView * _modifyTitleLabel; // +0x38
    NSMutableArray * _titleBannerArray; // +0x40
}
+ (id)buildPanelViewByContainerWidth:(double)arg1 modifyDescMaxCount:(long long)arg2 modifyTitleMaxCount:(long long)arg3;
- (id)descBannerArray;
- (id)titleBannerArray;
- (id)modifyDescLabel;
- (id)modifyTitleLabel;
- (void)updateDescModifyModelArray:(id)arg1;
- (void)updateTitleModifyModelArray:(id)arg1;
- (long long)getDescChangeCount;
- (long long)getTitleChangeCount;
- (void)displayOnView:(id)arg1;
- (void)layoutContainerView:(id)arg1;
- (void)layoutTitleRichTextView:(id)arg1 text:(id)arg2 topLine:(double)arg3;
- (double)layoutBannerContainer:(id)arg1 bannerViewArray:(id)arg2 topLine:(double)arg3;
- (void)onModifiedLogBannerClearModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (long long)modifyDescMaxCount;
- (void)setModifyDescMaxCount:(long long)arg1;
- (long long)modifyTitleMaxCount;
- (void)setModifyTitleMaxCount:(long long)arg1;
- (void)setModifyDescLabel:(id)arg1;
- (void)setDescBannerArray:(id)arg1;
- (void)setModifyTitleLabel:(id)arg1;
- (void)setTitleBannerArray:(id)arg1;
- (void).cxx_destruct;
@end

